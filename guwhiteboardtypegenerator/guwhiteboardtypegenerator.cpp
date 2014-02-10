/*
 *  guwhiteboardtypegenerator.c
 *
 *  Created by Carl Lusty in 2013.
 *  Copyright (c) 2013 Carl Lusty
 *  All rights reserved.
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <time.h>

//#define DDEBUG

using namespace std;

static char *include_str = (char *)"\
/**                                                                     \n\
 *  /file guwhiteboardtypelist_generated.h                              \n\
 *                                                                      \n\
 *  Created by Carl Lusty in 2013.                                      \n\
 *  Copyright (c) 2013 Carl Lusty                                       \n\
 *  All rights reserved.                                                \n\
 */                                                                     \n\
                                                                        \n\
                                                                        \n\
#ifndef _GUWHITEBOARD_TYPELIST_H_                                       \n\
#define _GUWHITEBOARD_TYPELIST_H_                                       \n\
                                                                        \n\
#include \"gugenericwhiteboardobject.h\"                                \n\
#include \"gutcpinjectionwhiteboardobject.h\"                           \n\
                                                                        \n\
#pragma clang diagnostic push                                           \n\
#pragma clang diagnostic ignored \"-Wpadded\"                           \n\
                                                                        \n\
                                                                        \n\
";

static char *include_str_c = (char *)"\
/**                                                                     \n\
 *  /file guwhiteboardtypelist_c_generated.h                            \n\
 *                                                                      \n\
 *  Created by Carl Lusty in 2013.                                      \n\
 *  Copyright (c) 2013 Carl Lusty                                       \n\
 *  All rights reserved.                                                \n\
 */                                                                     \n\
\n\
\n\
#ifndef _GUWHITEBOARD_TYPELIST_C_H_                                     \n\
#define _GUWHITEBOARD_TYPELIST_C_H_                                     \n\
\n\
\n\
#define WANT_WB_STRINGS\n\
";

static char *include_str_c_typestrings = (char *)"\
/**                                                                     \n\
 *  /file guwhiteboardtypelist_c_typestrings_generated.c                \n\
 *                                                                      \n\
 *  Created by Carl Lusty in 2013.                                      \n\
 *  Copyright (c) 2013 Carl Lusty                                       \n\
 *  All rights reserved.                                                \n\
 */                                                                     \n\
\n\
#include \"gusimplewhiteboard.h\"\n\
#include \"guwhiteboardtypelist_c_generated.h\"\n\
\n\
";

static char *include_wbfunctor_extension = (char *)"\
/**                                                                     \n\
 *  /file WBFunctor_types_generated.h                                   \n\
 *                                                                      \n\
 *  Created by Carl Lusty in 2013.                                      \n\
 *  Copyright (c) 2013 Carl Lusty                                       \n\
 *  All rights reserved.                                                \n\
 */                                                                     \n\
\n\
\n\
";

static char *opening_namespace = (char *)"                              \n\
namespace guWhiteboard                                                  \n\
{                                                                       \n\
                                                                        \n\
extern \"C\"                                                            \n\
{                                                                       \n\
#include \"guwhiteboardtypelist_c_generated.h\"                         \n\
}                                                                       \n\
                                                                        \n\
";

static char *opening_enum = (char *)"        typedef enum wb_types      \n\
        {                                                               \n\
";

static char *closing_enum = (char *)"        } WBTypes;\n\n";

static char *extern_for_string_array = (char *)"        extern const char *WBTypes_stringValues[];\n";

static char *opening_string_array_definition = (char *)"const char *WBTypes_stringValues[] = \n{\n";

static char *closing_string_array_definition = (char *)"};      \n\n";

static char *closing_namespace = (char *)"}\n\n";

static char *end_include_str = (char *)"#endif                          \n\
";

enum ClassType {
	None = 0,
	POD_Class,
	Custom_Class
	};

struct gu_type_info {
	ClassType class_info;
	std::string class_name;
	std::string type_const_name;
	std::string type_name;
	std::string comment;
        std::string atomic;
};

namespace ParseTarget { enum kind {
	dataType = 0,
	atomic,
	constName,
        stringName,
        comment,
        NUM_OF_TARGETS
}; }

int main()
{
	ifstream tsl_file;
        ofstream output_file;
        ofstream output_c_file;
        ofstream output_string_array_c_file;
        ofstream output_functor_templates;
        ofstream output_generic_poster;
        ofstream output_generic_getter;
	
        tsl_file.open ("../guwhiteboardtypelist.tsl");
        output_file.open ("../guwhiteboardtypelist_generated.h");
        output_c_file.open ("../guwhiteboardtypelist_c_generated.h");
        output_string_array_c_file.open ("../guwhiteboardtypelist_c_typestrings_generated.c");
        output_functor_templates.open ("../WBFunctor_types_generated.h");
        output_generic_poster.open ("../guwhiteboardposter.cpp");
        output_generic_getter.open ("../guwhiteboardgetter.cpp");

        if(!tsl_file.is_open() || !output_file.is_open() || !output_c_file.is_open() || !output_string_array_c_file.is_open() || !output_functor_templates.is_open() || !output_generic_poster.is_open())
        {
                //just incase someone runs it from inside the build directory
                tsl_file.open ("../../guwhiteboardtypelist.tsl");
                output_file.open ("../../guwhiteboardtypelist_generated.h");
		output_c_file.open ("../../guwhiteboardtypelist_c_generated.h");
                output_string_array_c_file.open ("../../guwhiteboardtypelist_c_typestrings_generated.c");
                output_functor_templates.open ("../../WBFunctor_types_generated.h");
                output_generic_poster.open ("../../guwhiteboardposter.cpp");
                output_generic_getter.open ("../../guwhiteboardgetter.cpp");

                if(!tsl_file.is_open() || !output_file.is_open() || !output_c_file.is_open() || !output_string_array_c_file.is_open() || !output_functor_templates.is_open() || !output_generic_poster.is_open())
                {
                        perror("could not open one of the files");
                        return EXIT_FAILURE;
                }
        }

        output_generic_poster << "/** Auto-generated, don't modify! */\n\n"
        "#include <string>\n"
        "#include <vector>\n"
        "#include <cstdlib>\n\n"
        "#define WHITEBOARD_POSTER_STRING_CONVERSION\n\n"
        "#include \"guwhiteboardtypelist_generated.h\"\n"
        "#include \"guwhiteboardposter.h\"\n\n"
        "using namespace std;\n"
        "using namespace guWhiteboard;\n\n"
        "extern \"C\"\n{\n"
        "\tWBTypes whiteboard_type_for_message_named(const char *message_type)\n"
        "\t{\n"
        "\t\treturn types_map[message_type];\n"
        "\t}\n\n\n"
        "\tbool whiteboard_post(const char *message_type, const char *message_content)\n"
        "\t{\n"
        "\t\treturn whiteboard_postmsg(types_map[message_type], message_content);\n"
        "\t}\n\n\n"
        "\tbool whiteboard_postmsg(int message_index, const char *message_content)\n"
        "\t{\n"
        "\t\treturn postmsg(WBTypes(message_index), message_content);\n"
        "\t}\n"
        "} // extern C\n\n"
        "static vector<int> strtointvec(string str)\n"
        "{\n"
        "\tconst char *sep = \"|,\";\n"
        "\tchar *context = NULL;\n"
        "\tvector<int> array;\n"
        "\tfor (char *element = strtok_r((char *)str.c_str(), sep, &context); element; element = strtok_r(NULL, sep, &context))\n"
        "\t\tarray.push_back(atoi(element));\n"
        "\treturn array;\n"
        "}\n\n"
        "#pragma clang diagnostic push\n"
        "#pragma clang diagnostic ignored \"-Wglobal-constructors\"\n"
        "#pragma clang diagnostic ignored \"-Wexit-time-destructors\"\n\n"
        "whiteboard_types_map guWhiteboard::types_map; ///< global types map\n\n"
        "#pragma clang diagnostic pop\n\n"
        "bool guWhiteboard::post(string message_type, string message_content)\n"
        "{\n"
        "\treturn postmsg(types_map[message_type], message_content);\n"
        "}\n\n\n"
        "bool guWhiteboard::postmsg(WBTypes message_index, std::string message_content)\n"
        "{\n"
        "\tswitch (message_index)\n"
        "\t{\n";

        output_generic_getter << "/** Auto-generated, don't modify! */\n\n"
        "#include <string>\n"
        "#include <vector>\n"
        "#include <cstdlib>\n\n"
        "#define WHITEBOARD_POSTER_STRING_CONVERSION\n\n"
        "#include \"guwhiteboardtypelist_generated.h\"\n"
        "#include \"guwhiteboardgetter.h\"\n\n"
        "using namespace std;\n"
        "using namespace guWhiteboard;\n\n"
        "extern \"C\"\n{\n"
        "\tchar *whiteboard_get(const char *message_type, gu_simple_message *msg)\n"
        "\t{\n"
        "\t\treturn whiteboard_getmsg(types_map[message_type], msg);\n"
        "\t}\n\n\n"
        "\tchar *whiteboard_getmsg(int message_index, gu_simple_message *msg)\n"
        "\t{\n"
        "\t\treturn gu_strdup(getmsg(WBTypes(message_index), msg).c_str());\n"
        "\t}\n"
        "} // extern C\n\n"
        "static string intvectostring(const vector<int> &vec)\n"
        "{\n"
        "\tstringstream ss;\n"
        "\t\n"
        "\tfor (vector<int>::const_iterator it = vec.begin(); it != vec.end(); it++)\n"
        "\t{\n"
        "\t\tif (it != vec.begin()) ss << \",\";\n"
        "\t\tss << *it;\n"
        "\t}\n"
        "\n"
        "\treturn ss.str();\n"
        "}\n\n"
        "string guWhiteboard::getmsg(string message_type, gu_simple_message *msg)\n"
        "{\n"
        "\treturn getmsg(types_map[message_type], msg);\n"
        "}\n\n\n"
        "string guWhiteboard::getmsg(WBTypes message_index, gu_simple_message *msg)\n"
        "{\n"
        "\tswitch (message_index)\n"
        "\t{\n";

        stringstream tsl_file_stream;
        tsl_file_stream << tsl_file.rdbuf();
        
        string tsl_file_str = tsl_file_stream.str();
        
        string header_token = std::string("\n");

        std::vector<gu_type_info> types;
        int pos = 0;
        do
        {
                int start_p = 0;
                if(pos > 0)
                        start_p = pos+(int)header_token.length();
                
                int end_p = (int)tsl_file_str.find("\n", start_p);
                pos = end_p;

		std::string type_line = tsl_file_str.substr(start_p, end_p-start_p);
                if((int)type_line.size() == 0)
                        break;

		std::string line_token = std::string(",");
		int line_pos = 0;
		std::vector<std::string> elements;
                
                for (int i = 0; i <= ParseTarget::comment; i++)
                {
                        int start = line_pos;
			int end = (int)type_line.find(line_token, start);
                        
                        line_pos = end+(int)line_token.length();

                        std::string type_info_element;
                        
                        if(i == ParseTarget::comment) //comment, just give me the rest of the string
                                type_info_element = type_line.substr(start, type_line.length()-start);
                        else
                                type_info_element = type_line.substr(start, end-start);
                        
                        int start_non_whitespace = (int)type_info_element.find_first_not_of(' ');
                        if(start_non_whitespace != (int)std::string::npos)
                                type_info_element.erase(0, start_non_whitespace);
                        
                        elements.push_back(type_info_element);
                }
		
		if((int)elements.size() != ParseTarget::NUM_OF_TARGETS)
		{
			fprintf(stderr, "guwhiteboardtypegenerator: Parsing issue found, take a look at line: %d\nexiting...", (int)types.size());
			exit(1);
		}

		struct gu_type_info info;
		//Splitting logic from parsing
		for (int i = 0; i < (int)elements.size(); i++)
		{
			switch (i) {
				case ParseTarget::atomic:
				{
                                        if((int)elements.at(i).compare("atomic") == 0) //atomic type?
                                                info.atomic = std::string("true");
                                        else
                                                info.atomic = std::string("false");
#ifdef DDEBUG
					fprintf(stderr, "is_atomic:\t'%s'\n", (char *)elements.at(i).c_str());
#endif
					break;
				}
				case ParseTarget::constName:
				{
					info.type_const_name = elements.at(i);
#ifdef DDEBUG
					fprintf(stderr, "const:\t'%s'\n", (char *)info.type_const_name.c_str());
#endif
					break;
				}
				case ParseTarget::stringName:
				{
					info.type_name = elements.at(i).substr(1, elements.at(i).length()-2); //substr to remove the quotes
#ifdef DDEBUG
					fprintf(stderr, "value:\t'%s'\n", (char *)info.type_name.c_str());
#endif
					break;
				}
				case ParseTarget::dataType:
					if((int)elements.at(i).size() == 0)
					{
                                                //warning if no type is given, however allow it for now.
						info.class_info = None;
					}
					else
					{
						if((int)elements.at(i).find("class:") != (int)string::npos) //custom class?
						{
							info.class_info = Custom_Class;
							info.class_name = elements.at(i).substr(std::string("class:").length());
						}
						else
						{
							info.class_info = POD_Class;
							info.class_name = elements.at(i);
						}
					}
#ifdef DDEBUG
					switch (info.class_info) {
						case None:
							fprintf(stderr, "class info:\tNone, just a WB Type, no class\n");
							break;
						case POD_Class:
							fprintf(stderr, "class info:\tPOD_Class, type: %s\n", (char *)info.class_name.c_str());
							break;
						case Custom_Class:
							fprintf(stderr, "class info:\tCustom_Class, class name: %s\n", (char *)info.class_name.c_str());
							break;
					}
#endif
					break;
				case ParseTarget::comment:
				{
					info.comment = elements.at(i);
#ifdef DDEBUG
					fprintf(stderr, "comments:\t'%s'\n", (char *)info.comment.c_str());
#endif
					break;
				}
				default:
					break;
			}
		}
		types.push_back(info);
	} while((pos = (int)tsl_file_str.find(header_token, pos)) != (int)string::npos);
		
	
	//output to file
        output_file << include_str;
        output_c_file << include_str_c;
        output_string_array_c_file << include_str_c_typestrings;
        output_functor_templates << include_wbfunctor_extension;

        
        output_c_file << "\n#define GSW_NUM_TYPES_DEFINED " << types.size() << "\n\n";
        output_c_file << "#if GSW_NUM_TYPES_DEFINED > GSW_NUM_RESERVED\n";
        output_c_file << "#error *** Error: gusimplewhiteboard: The number of defined types exceeds the total number of reserved types allowed. Increase GSW_NUM_RESERVED to solve this.\n";
        output_c_file << "#endif\n";      
        
        //print current date
        time_t rawtime;
        struct tm * timeinfo;
        time ( &rawtime );
        timeinfo = localtime ( &rawtime );
	//get user name
	char * pPath;
	pPath = getenv ("USER");
	
		
	
        output_file << "//Generated on: " << asctime (timeinfo) << "//Generated by user: ";
        output_c_file << "//Generated on: " << asctime (timeinfo) << "//Generated by user: ";
        output_string_array_c_file << "//Generated on: " << asctime (timeinfo) << "//Generated by user: ";
        output_functor_templates << "//Generated on: " << asctime (timeinfo) << "//Generated by user: ";
	if (pPath!=NULL)
	{
		output_file << pPath << "\n";
		output_string_array_c_file << pPath << "\n\n";
		output_c_file << pPath << "\n\n";
                output_functor_templates << pPath << "\n\n";
	}
	else
	{
		output_file << "unknown\n";
		output_string_array_c_file << "unknown\n\n";
		output_c_file << "unknown\n\n";
                output_functor_templates << "unknown\n\n";
	}

        
        output_file << opening_namespace;
	
		
	
        output_c_file << opening_enum;

        //enum
	for (int i = 0; i < (int)types.size(); i++)
	{
                const gu_type_info &type = types[i];
		int hash_offset = i;//gsw_offset_for_message_type(_wbd, (char *)types.at(i).type_name.c_str());
		output_c_file << "                k" << type.type_const_name << "_v = " << hash_offset;

                if(i+1 != (int)types.size())
                       output_c_file << ",";

                output_generic_poster << "\t\tcase k" << type.type_const_name << "_v:\n";
                output_generic_getter << "\t\tcase k" << type.type_const_name << "_v:\n";

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wcovered-switch-default"
#pragma clang diagnostic ignored "-Wimplicit-fallthrough"
                
                switch (type.class_info)
                {
                        case None:
                                output_c_file << "\t///<" << type.comment << endl;
                                output_generic_poster << "\t\t\treturn false;\n\n";
                                output_generic_getter << "\t\t\treturn \"##unsupported##\";\n\n";
                                break;

                        case POD_Class:
                                if (type.class_name == "bool" ||
                                    type.class_name == "int" ||
                                    type.class_name == "unsigned" ||
                                    type.class_name == "unsigned int")
                                {
                                        output_c_file << endl;
                                        output_generic_poster << "\t\t{\n\t\t\tclass " << type.type_const_name << "_t " << type.type_const_name << "_msg;\n\t\t\t" << type.type_const_name << "_msg.post(atoi(message_content.c_str()));\n\t\t\treturn true;\n\t\t}\n\n";
                                        output_generic_getter << "\t\t{\n\t\t\tclass " << type.type_const_name << "_t m;\n\t\t\treturn msg ? gu_ltos(long(m.get_from(msg))) : gu_ltos(long(m.get()));\n\t\t}\n" ;
                                        break;
                                }
                                if (type.class_name == "long" ||
                                    type.class_name == "unsigned long")
                                {
                                        output_c_file << endl;
                                        output_generic_poster << "\t\t{\n\t\t\tclass " << type.type_const_name << "_t " << type.type_const_name << "_msg;\n\t\t\t" << type.type_const_name << "_msg.post(atol(message_content.c_str()));\n\t\t\treturn true;\n\t\t}\n\n";
                                        output_generic_getter << "\t\t{\n\t\t\tclass " << type.type_const_name << "_t m;\n\t\t\treturn msg ? gu_ltos(long(m.get_from(msg))) : gu_ltos(long(m.get()));\n\t\t}\n" ;
                                        break;
                                }
                                if (type.class_name == "float" ||
                                    type.class_name == "double")
                                {
                                        output_c_file << endl;
                                        output_generic_poster << "\t\t{\n\t\t\tclass " << type.type_const_name << "_t " << type.type_const_name << "_msg;\n\t\t\t" << type.type_const_name << "_msg.post(" << type.class_name << "(atof(message_content.c_str())));\n\t\t\treturn true;\n\t\t}\n\n";
                                        output_generic_getter << "\t\t{\n\t\t\tclass " << type.type_const_name << "_t m;\n\t\t\treturn msg ? gu_dtos(m.get_from(msg)) : gu_dtos(m.get());\n\t\t}\n" ;
                                        break;
                                }
                                if (type.class_name == "std::vector<int>")
                                {
                                        output_c_file << endl;
                                        output_generic_poster << "\t\t{\n\t\t\tclass " << type.type_const_name << "_t " << type.type_const_name << "_msg(strtointvec(message_content));\n\t\t\t(void)" << type.type_const_name << "_msg;\n\t\t\treturn true;\n\t\t}\n\n";
                                        output_generic_getter << "\t\t{\n\t\t\tclass " << type.type_const_name << "_t m;\n\t\t\treturn msg ? intvectostring(m.get_from(msg)) : intvectostring(m.get());\n\t\t}\n" ;
                                        break;
                                }
                                if (type.class_name == "std::string")
                                {
                                        output_generic_poster << "\t\t{\n\t\t\tclass " << type.type_const_name << "_t " << type.type_const_name << "_msg;\n\t\t\t" << type.type_const_name << "_msg.post(" << type.class_name << "(message_content));\n\t\t\treturn true;\n\t\t}\n" ;
                                        output_generic_getter << "\t\t{\n\t\t\tclass " << type.type_const_name << "_t m;\n\t\t\treturn msg ? m.get_from(msg) : m.get();\n\t\t}\n";
                                        break;
                                }
                        case Custom_Class:
                        default:
                                output_c_file << endl;
                                output_generic_poster << "#ifdef " << type.class_name << "_DEFINED\n";
                                output_generic_getter << "#ifdef " << type.class_name << "_DEFINED\n";
                                output_generic_poster << "\t\t{\n\t\t\tclass " << type.type_const_name << "_t " << type.type_const_name << "_msg;\n\t\t\t" << type.type_const_name << "_msg.post(" << type.class_name << "(message_content));\n\t\t\treturn true;\n\t\t}\n" ;
                                output_generic_getter << "\t\t{\n\t\t\tclass " << type.type_const_name << "_t m;\n\t\t\treturn msg ? m.get_from(msg).description() : m.get().description();\n\t\t}\n" ;
                                output_generic_poster << "#else\n";
                                output_generic_poster << "\t\t\treturn false;\n";
                                output_generic_poster << "#endif // !" << type.class_name << "_DEFINED\n\n";
                                output_generic_getter << "#else\n";
                                output_generic_getter << "\t\t\treturn \"##unsupported##\";\n\n";
                                output_generic_getter << "#endif // !" << type.class_name << "_DEFINED\n\n";
                }
	}

#pragma clang diagnostic pop

        output_c_file << closing_enum;
        output_c_file << extern_for_string_array;
        output_string_array_c_file << opening_string_array_definition;

        output_generic_poster << "\t}\n#pragma clang diagnostic push\n#pragma clang diagnostic ignored \"-Wunreachable-code\"\n\n\treturn false;\n#pragma clang diagnostic pop\n}\n\n";
        output_generic_poster << "whiteboard_types_map::whiteboard_types_map(): map<string, WBTypes>()\n"
        "{\n"
        "\twhiteboard_types_map &self = *this;\n"
        "\t// self.reserve(" << types.size() << ");\n\n";

        output_generic_getter << "\t}\n#pragma clang diagnostic push\n#pragma clang diagnostic ignored \"-Wunreachable-code\"\n\n\treturn \"##unsupported##\";\n#pragma clang diagnostic pop\n}\n\n";

	//string array
	for (int i = 0; i < int(types.size()); i++)
	{
                const gu_type_info &type = types[i];
                output_generic_poster << "\tself[\"" << types[i].type_name << "\"] = k" << type.type_const_name << "_v;\n";
		output_string_array_c_file << "        \"" << types[i].type_name;
                i+1 != (int)types.size() ? output_string_array_c_file << "\",\n" : output_string_array_c_file << "\"\n";
	}
        output_generic_poster << "}\n\n";

        output_string_array_c_file << closing_string_array_definition;
	
	//type classes
	for (int i = 0; i < (int)types.size(); i++)
	{
                const gu_type_info &type = types[i];
		switch (type.class_info)
                {
			case None:
				break;
			case POD_Class:
			{
                                //local wb wrapper
                                output_file << "\t/// " <<  type.comment << "\n        class " << type.type_const_name
                                        << "_t: public generic_whiteboard_object<" << type.class_name
                                        << " > { \n\tpublic: \n\t\t" << types[i].type_const_name << "_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<" << types[i].class_name << " >(wbd, k" << types[i].type_const_name << "_v, " << types[i].atomic << ") {}\n\t\t"
                                        << types[i].type_const_name << "_t("<< types[i].class_name << " value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<" << types[i].class_name << " >(value, k"
                                        << types[i].type_const_name << "_v, wbd, " << types[i].atomic << ") {} \n\t};\n\n";

                                //TCP injection wrapper
				output_file << "\t/// " <<  type.comment << "\n        class " << type.type_const_name
                                        << "_iTCP: public injection_whiteboard_object<" << type.class_name
                                        << " > { \n\tpublic: \n\t\t" << types[i].type_const_name << "_iTCP(const char *hostname = (const char *)\"localhost\", bool is_async = true): injection_whiteboard_object<" << types[i].class_name << " >(hostname, k" << types[i].type_const_name << "_v, is_async) {}\n\t\t"
                                        << types[i].type_const_name << "_iTCP("<< types[i].class_name << " value, const char *hostname = (const char *)\"localhost\", bool is_async = true): injection_whiteboard_object<" << types[i].class_name << " >(value, hostname, k"
                                        << types[i].type_const_name << "_v, is_async) {} \n\t};\n\n";
				break;
			}
			case Custom_Class:
			{
				output_file << "\t///" <<  types[i].comment << "\n        class " << types[i].type_const_name
                                        << "_t: public generic_whiteboard_object<class " << types[i].class_name
                                        << " > { \n\tpublic: \n\t\t" << types[i].type_const_name << "_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class " << types[i].class_name << " >(wbd, k" << types[i].type_const_name << "_v, " << types[i].atomic << ") {} \n\t};\n\n";
                                output_file << "\t///" <<  types[i].comment << "\n        class " << types[i].type_const_name
                                        << "_iTCP: public injection_whiteboard_object<class " << types[i].class_name
                                        << " > { \n\tpublic: \n\t\t" << types[i].type_const_name << "_iTCP(const char *hostname = (const char *)\"localhost\", bool is_async = true) : injection_whiteboard_object<class " << types[i].class_name << " >(hostname, k" << types[i].type_const_name << "_v, is_async) {} \n\t};\n\n";
				break;
			}
		}
	}
	
	
        output_file << closing_namespace;
        output_file << "#pragma clang diagnostic pop\n" << endl;
        output_file << end_include_str;
        output_c_file << end_include_str;
        
        
        //WBFunctor extension
        
        /*
         template <typename kSpeechOutput_WBFunctor_T>
         class kSpeechOutput_WBFunctor: public WBFunctor<kSpeechOutput_WBFunctor_T>
         {
         public:
         kSpeechOutput_WBFunctor(kSpeechOutput_WBFunctor_T* obj, void (kSpeechOutput_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<kSpeechOutput_WBFunctor_T>(obj, (void (kSpeechOutput_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }
         
         void call(gu_simple_message *m)
         {
         bool result = guWhiteboard::kSpeechOutput_t::get_from(m);
         kSpeechOutput_function_t funct((void (kSpeechOutput_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<kSpeechOutput_WBFunctor_T>::get_s_func_ptr());
         (WBFunctor<kSpeechOutput_WBFunctor_T>::fObject->*funct)(WBFunctor<kSpeechOutput_WBFunctor_T>::type_enum, result);
         }
         
         typedef void (kSpeechOutput_WBFunctor_T::*kSpeechOutput_function_t) (guWhiteboard::WBTypes, bool &);
         
         static WBFunctorBase *bind(kSpeechOutput_WBFunctor_T *obj, void (kSpeechOutput_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new kSpeechOutput_WBFunctor<kSpeechOutput_WBFunctor_T>(obj, f, t); }
         }
         */

	for (int i = 0; i < (int)types.size(); i++)
	{
                stringstream ss;
                ss << (char *)types.at(i).type_const_name.c_str() << "_WBFunctor";
                std::string class_name = ss.str();
                stringstream ss2;
                ss2 << (char *)types.at(i).type_const_name.c_str() << "_WBFunctor_T";
                std::string type_name = ss2.str();
                
                std::string datatype;
                if(types.at(i).class_info == POD_Class)
                        datatype = types.at(i).class_name;
                else
                        datatype = std::string("guWhiteboard::").append(types.at(i).class_name);
                
		if (types.at(i).class_info != None)
                {
                        if(types.at(i).class_info == Custom_Class)
                                output_functor_templates << "#ifdef " << types.at(i).class_name << "_DEFINED\n";
                        output_functor_templates        << "template <typename " << type_name << " >\n"
                        << "class " << class_name << ": public WBFunctor<" << type_name << " > \n{\n"
                        << "public:\n"
                        << "        " << class_name << "(" << type_name << "* obj, void (" << type_name << "::*pFunc) (guWhiteboard::WBTypes, " << datatype << " &), guWhiteboard::WBTypes t): WBFunctor<" << type_name << " >(obj, (void (" << type_name << "::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }\n\n"
                        << "        void call(gu_simple_message *m)\n"
                        << "        {\n"
                        << "                " << datatype << " result = guWhiteboard::" << types.at(i).type_const_name << "_t().get_from(m);\n"
                        << "                " << types.at(i).type_const_name << "_function_t funct((void (" << type_name << "::*)(guWhiteboard::WBTypes, " << datatype << " &))WBFunctor<" << type_name << " >::get_s_func_ptr());\n"
                        << "                (WBFunctor<" << type_name << " >::fObject->*funct)(WBFunctor<" << type_name << " >::type_enum, result);\n"
                        << "        }\n"
                        << "        \n"
                        << "        typedef void (" << type_name << "::*" << types.at(i).type_const_name << "_function_t) (guWhiteboard::WBTypes, " << datatype << " &);\n\n"
                        << "        static WBFunctorBase *bind(" << type_name << " *obj, void (" << type_name << "::*f)(guWhiteboard::WBTypes, " << datatype << " &), guWhiteboard::WBTypes t) { return new " << class_name << "<" << type_name << " >(obj, f, t); }\n};\n\n";

                        if(types.at(i).class_info == Custom_Class)
                                output_functor_templates << "#endif //" << types.at(i).class_name << "_DEFINED\n";
                        output_functor_templates << "\n\n";
		}
        }
        
        
        tsl_file.close();
        output_file.close();
	output_c_file.close();
        output_functor_templates.close();
        output_generic_poster.close();
        output_generic_getter.close();
}
