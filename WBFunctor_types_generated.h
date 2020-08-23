/**
 *  /file WBFunctor_types_generated.h
 *
 *  Created by Carl Lusty in 2018.
 *  Copyright (c) 2013-2020 Carl Lusty and Rene Hexel
 *  All rights reserved.
 */

#ifndef WBFUNCTOR_TYPES_GENERATED_H
#define WBFUNCTOR_TYPES_GENERATED_H

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wpadded"
#pragma clang diagnostic ignored "-Wold-style-cast"



/** WBFunctor definition for wb_reserved_SubscribeToAllTypes_WBFunctor_T */ 
template <typename wb_reserved_SubscribeToAllTypes_WBFunctor_T >
class wb_reserved_SubscribeToAllTypes_WBFunctor: public WBFunctor<wb_reserved_SubscribeToAllTypes_WBFunctor_T > {
public:
    /** WBFunctor constructor for wb_reserved_SubscribeToAllTypes_WBFunctor_T */
    wb_reserved_SubscribeToAllTypes_WBFunctor(wb_reserved_SubscribeToAllTypes_WBFunctor_T* obj, void (wb_reserved_SubscribeToAllTypes_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<wb_reserved_SubscribeToAllTypes_WBFunctor_T >(obj, (void (wb_reserved_SubscribeToAllTypes_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class wb_reserved_SubscribeToAllTypes_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::wb_reserved_SubscribeToAllTypes_t().get_from(m);
        wb_reserved_SubscribeToAllTypes_function_t funct((void (wb_reserved_SubscribeToAllTypes_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<wb_reserved_SubscribeToAllTypes_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<wb_reserved_SubscribeToAllTypes_WBFunctor_T >::fObject->*funct)(WBFunctor<wb_reserved_SubscribeToAllTypes_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (wb_reserved_SubscribeToAllTypes_WBFunctor_T::*wb_reserved_SubscribeToAllTypes_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(wb_reserved_SubscribeToAllTypes_WBFunctor_T *obj, void (wb_reserved_SubscribeToAllTypes_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new wb_reserved_SubscribeToAllTypes_WBFunctor<wb_reserved_SubscribeToAllTypes_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Print_WBFunctor_T */ 
template <typename Print_WBFunctor_T >
class Print_WBFunctor: public WBFunctor<Print_WBFunctor_T > {
public:
    /** WBFunctor constructor for Print_WBFunctor_T */
    Print_WBFunctor(Print_WBFunctor_T* obj, void (Print_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, std::string &), guWhiteboard::WBTypes t): WBFunctor<Print_WBFunctor_T >(obj, (void (Print_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Print_WBFunctor */
    void call(gu_simple_message *m) {
        std::string result = guWhiteboard::Print_t().get_from(m);
        Print_function_t funct((void (Print_WBFunctor_T::*)(guWhiteboard::WBTypes, std::string &))WBFunctor<Print_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Print_WBFunctor_T >::fObject->*funct)(WBFunctor<Print_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Print_WBFunctor_T::*Print_function_t) (guWhiteboard::WBTypes, std::string &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Print_WBFunctor_T *obj, void (Print_WBFunctor_T::*f)(guWhiteboard::WBTypes, std::string &), guWhiteboard::WBTypes t) { return new Print_WBFunctor<Print_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Say_WBFunctor_T */ 
template <typename Say_WBFunctor_T >
class Say_WBFunctor: public WBFunctor<Say_WBFunctor_T > {
public:
    /** WBFunctor constructor for Say_WBFunctor_T */
    Say_WBFunctor(Say_WBFunctor_T* obj, void (Say_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, std::string &), guWhiteboard::WBTypes t): WBFunctor<Say_WBFunctor_T >(obj, (void (Say_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Say_WBFunctor */
    void call(gu_simple_message *m) {
        std::string result = guWhiteboard::Say_t().get_from(m);
        Say_function_t funct((void (Say_WBFunctor_T::*)(guWhiteboard::WBTypes, std::string &))WBFunctor<Say_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Say_WBFunctor_T >::fObject->*funct)(WBFunctor<Say_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Say_WBFunctor_T::*Say_function_t) (guWhiteboard::WBTypes, std::string &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Say_WBFunctor_T *obj, void (Say_WBFunctor_T::*f)(guWhiteboard::WBTypes, std::string &), guWhiteboard::WBTypes t) { return new Say_WBFunctor<Say_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Speech_WBFunctor_T */ 
template <typename Speech_WBFunctor_T >
class Speech_WBFunctor: public WBFunctor<Speech_WBFunctor_T > {
public:
    /** WBFunctor constructor for Speech_WBFunctor_T */
    Speech_WBFunctor(Speech_WBFunctor_T* obj, void (Speech_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, std::string &), guWhiteboard::WBTypes t): WBFunctor<Speech_WBFunctor_T >(obj, (void (Speech_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Speech_WBFunctor */
    void call(gu_simple_message *m) {
        std::string result = guWhiteboard::Speech_t().get_from(m);
        Speech_function_t funct((void (Speech_WBFunctor_T::*)(guWhiteboard::WBTypes, std::string &))WBFunctor<Speech_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Speech_WBFunctor_T >::fObject->*funct)(WBFunctor<Speech_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Speech_WBFunctor_T::*Speech_function_t) (guWhiteboard::WBTypes, std::string &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Speech_WBFunctor_T *obj, void (Speech_WBFunctor_T::*f)(guWhiteboard::WBTypes, std::string &), guWhiteboard::WBTypes t) { return new Speech_WBFunctor<Speech_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for QSay_WBFunctor_T */ 
template <typename QSay_WBFunctor_T >
class QSay_WBFunctor: public WBFunctor<QSay_WBFunctor_T > {
public:
    /** WBFunctor constructor for QSay_WBFunctor_T */
    QSay_WBFunctor(QSay_WBFunctor_T* obj, void (QSay_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, std::string &), guWhiteboard::WBTypes t): WBFunctor<QSay_WBFunctor_T >(obj, (void (QSay_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class QSay_WBFunctor */
    void call(gu_simple_message *m) {
        std::string result = guWhiteboard::QSay_t().get_from(m);
        QSay_function_t funct((void (QSay_WBFunctor_T::*)(guWhiteboard::WBTypes, std::string &))WBFunctor<QSay_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<QSay_WBFunctor_T >::fObject->*funct)(WBFunctor<QSay_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (QSay_WBFunctor_T::*QSay_function_t) (guWhiteboard::WBTypes, std::string &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(QSay_WBFunctor_T *obj, void (QSay_WBFunctor_T::*f)(guWhiteboard::WBTypes, std::string &), guWhiteboard::WBTypes t) { return new QSay_WBFunctor<QSay_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for QSpeech_WBFunctor_T */ 
template <typename QSpeech_WBFunctor_T >
class QSpeech_WBFunctor: public WBFunctor<QSpeech_WBFunctor_T > {
public:
    /** WBFunctor constructor for QSpeech_WBFunctor_T */
    QSpeech_WBFunctor(QSpeech_WBFunctor_T* obj, void (QSpeech_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, std::string &), guWhiteboard::WBTypes t): WBFunctor<QSpeech_WBFunctor_T >(obj, (void (QSpeech_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class QSpeech_WBFunctor */
    void call(gu_simple_message *m) {
        std::string result = guWhiteboard::QSpeech_t().get_from(m);
        QSpeech_function_t funct((void (QSpeech_WBFunctor_T::*)(guWhiteboard::WBTypes, std::string &))WBFunctor<QSpeech_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<QSpeech_WBFunctor_T >::fObject->*funct)(WBFunctor<QSpeech_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (QSpeech_WBFunctor_T::*QSpeech_function_t) (guWhiteboard::WBTypes, std::string &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(QSpeech_WBFunctor_T *obj, void (QSpeech_WBFunctor_T::*f)(guWhiteboard::WBTypes, std::string &), guWhiteboard::WBTypes t) { return new QSpeech_WBFunctor<QSpeech_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for SpeechOutput_WBFunctor_T */ 
template <typename SpeechOutput_WBFunctor_T >
class SpeechOutput_WBFunctor: public WBFunctor<SpeechOutput_WBFunctor_T > {
public:
    /** WBFunctor constructor for SpeechOutput_WBFunctor_T */
    SpeechOutput_WBFunctor(SpeechOutput_WBFunctor_T* obj, void (SpeechOutput_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<SpeechOutput_WBFunctor_T >(obj, (void (SpeechOutput_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class SpeechOutput_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::SpeechOutput_t().get_from(m);
        SpeechOutput_function_t funct((void (SpeechOutput_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<SpeechOutput_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<SpeechOutput_WBFunctor_T >::fObject->*funct)(WBFunctor<SpeechOutput_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (SpeechOutput_WBFunctor_T::*SpeechOutput_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(SpeechOutput_WBFunctor_T *obj, void (SpeechOutput_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new SpeechOutput_WBFunctor<SpeechOutput_WBFunctor_T >(obj, f, t); }
}; 


#ifdef GCGameState_DEFINED
/** WBFunctor definition for GCGameState_WBFunctor_T */ 
template <typename GCGameState_WBFunctor_T >
class GCGameState_WBFunctor: public WBFunctor<GCGameState_WBFunctor_T > {
public:
    /** WBFunctor constructor for GCGameState_WBFunctor_T */
    GCGameState_WBFunctor(GCGameState_WBFunctor_T* obj, void (GCGameState_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::GCGameState &), guWhiteboard::WBTypes t): WBFunctor<GCGameState_WBFunctor_T >(obj, (void (GCGameState_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class GCGameState_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::GCGameState result = guWhiteboard::GCGameState_t().get_from(m);
        GCGameState_function_t funct((void (GCGameState_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::GCGameState &))WBFunctor<GCGameState_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<GCGameState_WBFunctor_T >::fObject->*funct)(WBFunctor<GCGameState_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (GCGameState_WBFunctor_T::*GCGameState_function_t) (guWhiteboard::WBTypes, guWhiteboard::GCGameState &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(GCGameState_WBFunctor_T *obj, void (GCGameState_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::GCGameState &), guWhiteboard::WBTypes t) { return new GCGameState_WBFunctor<GCGameState_WBFunctor_T >(obj, f, t); }
}; 
#endif //GCGameState_DEFINED

#ifdef SensorsHandSensors_DEFINED
/** WBFunctor definition for SensorsHandSensors_WBFunctor_T */ 
template <typename SensorsHandSensors_WBFunctor_T >
class SensorsHandSensors_WBFunctor: public WBFunctor<SensorsHandSensors_WBFunctor_T > {
public:
    /** WBFunctor constructor for SensorsHandSensors_WBFunctor_T */
    SensorsHandSensors_WBFunctor(SensorsHandSensors_WBFunctor_T* obj, void (SensorsHandSensors_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::SensorsHandSensors &), guWhiteboard::WBTypes t): WBFunctor<SensorsHandSensors_WBFunctor_T >(obj, (void (SensorsHandSensors_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class SensorsHandSensors_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::SensorsHandSensors result = guWhiteboard::SensorsHandSensors_t().get_from(m);
        SensorsHandSensors_function_t funct((void (SensorsHandSensors_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::SensorsHandSensors &))WBFunctor<SensorsHandSensors_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<SensorsHandSensors_WBFunctor_T >::fObject->*funct)(WBFunctor<SensorsHandSensors_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (SensorsHandSensors_WBFunctor_T::*SensorsHandSensors_function_t) (guWhiteboard::WBTypes, guWhiteboard::SensorsHandSensors &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(SensorsHandSensors_WBFunctor_T *obj, void (SensorsHandSensors_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::SensorsHandSensors &), guWhiteboard::WBTypes t) { return new SensorsHandSensors_WBFunctor<SensorsHandSensors_WBFunctor_T >(obj, f, t); }
}; 
#endif //SensorsHandSensors_DEFINED

#ifdef SensorsHeadSensors_DEFINED
/** WBFunctor definition for SensorsHeadSensors_WBFunctor_T */ 
template <typename SensorsHeadSensors_WBFunctor_T >
class SensorsHeadSensors_WBFunctor: public WBFunctor<SensorsHeadSensors_WBFunctor_T > {
public:
    /** WBFunctor constructor for SensorsHeadSensors_WBFunctor_T */
    SensorsHeadSensors_WBFunctor(SensorsHeadSensors_WBFunctor_T* obj, void (SensorsHeadSensors_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::SensorsHeadSensors &), guWhiteboard::WBTypes t): WBFunctor<SensorsHeadSensors_WBFunctor_T >(obj, (void (SensorsHeadSensors_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class SensorsHeadSensors_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::SensorsHeadSensors result = guWhiteboard::SensorsHeadSensors_t().get_from(m);
        SensorsHeadSensors_function_t funct((void (SensorsHeadSensors_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::SensorsHeadSensors &))WBFunctor<SensorsHeadSensors_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<SensorsHeadSensors_WBFunctor_T >::fObject->*funct)(WBFunctor<SensorsHeadSensors_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (SensorsHeadSensors_WBFunctor_T::*SensorsHeadSensors_function_t) (guWhiteboard::WBTypes, guWhiteboard::SensorsHeadSensors &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(SensorsHeadSensors_WBFunctor_T *obj, void (SensorsHeadSensors_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::SensorsHeadSensors &), guWhiteboard::WBTypes t) { return new SensorsHeadSensors_WBFunctor<SensorsHeadSensors_WBFunctor_T >(obj, f, t); }
}; 
#endif //SensorsHeadSensors_DEFINED

#ifdef MOTION_Commands_DEFINED
/** WBFunctor definition for MOTION_Commands_WBFunctor_T */ 
template <typename MOTION_Commands_WBFunctor_T >
class MOTION_Commands_WBFunctor: public WBFunctor<MOTION_Commands_WBFunctor_T > {
public:
    /** WBFunctor constructor for MOTION_Commands_WBFunctor_T */
    MOTION_Commands_WBFunctor(MOTION_Commands_WBFunctor_T* obj, void (MOTION_Commands_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::MOTION_Commands &), guWhiteboard::WBTypes t): WBFunctor<MOTION_Commands_WBFunctor_T >(obj, (void (MOTION_Commands_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class MOTION_Commands_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::MOTION_Commands result = guWhiteboard::MOTION_Commands_t().get_from(m);
        MOTION_Commands_function_t funct((void (MOTION_Commands_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::MOTION_Commands &))WBFunctor<MOTION_Commands_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<MOTION_Commands_WBFunctor_T >::fObject->*funct)(WBFunctor<MOTION_Commands_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (MOTION_Commands_WBFunctor_T::*MOTION_Commands_function_t) (guWhiteboard::WBTypes, guWhiteboard::MOTION_Commands &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(MOTION_Commands_WBFunctor_T *obj, void (MOTION_Commands_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::MOTION_Commands &), guWhiteboard::WBTypes t) { return new MOTION_Commands_WBFunctor<MOTION_Commands_WBFunctor_T >(obj, f, t); }
}; 
#endif //MOTION_Commands_DEFINED

#ifdef MOTION_Status_DEFINED
/** WBFunctor definition for MOTION_Status_WBFunctor_T */ 
template <typename MOTION_Status_WBFunctor_T >
class MOTION_Status_WBFunctor: public WBFunctor<MOTION_Status_WBFunctor_T > {
public:
    /** WBFunctor constructor for MOTION_Status_WBFunctor_T */
    MOTION_Status_WBFunctor(MOTION_Status_WBFunctor_T* obj, void (MOTION_Status_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::MOTION_Status &), guWhiteboard::WBTypes t): WBFunctor<MOTION_Status_WBFunctor_T >(obj, (void (MOTION_Status_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class MOTION_Status_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::MOTION_Status result = guWhiteboard::MOTION_Status_t().get_from(m);
        MOTION_Status_function_t funct((void (MOTION_Status_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::MOTION_Status &))WBFunctor<MOTION_Status_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<MOTION_Status_WBFunctor_T >::fObject->*funct)(WBFunctor<MOTION_Status_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (MOTION_Status_WBFunctor_T::*MOTION_Status_function_t) (guWhiteboard::WBTypes, guWhiteboard::MOTION_Status &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(MOTION_Status_WBFunctor_T *obj, void (MOTION_Status_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::MOTION_Status &), guWhiteboard::WBTypes t) { return new MOTION_Status_WBFunctor<MOTION_Status_WBFunctor_T >(obj, f, t); }
}; 
#endif //MOTION_Status_DEFINED

#ifdef HAL_HeadTarget_DEFINED
/** WBFunctor definition for HAL_HeadTarget_WBFunctor_T */ 
template <typename HAL_HeadTarget_WBFunctor_T >
class HAL_HeadTarget_WBFunctor: public WBFunctor<HAL_HeadTarget_WBFunctor_T > {
public:
    /** WBFunctor constructor for HAL_HeadTarget_WBFunctor_T */
    HAL_HeadTarget_WBFunctor(HAL_HeadTarget_WBFunctor_T* obj, void (HAL_HeadTarget_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::HAL_HeadTarget &), guWhiteboard::WBTypes t): WBFunctor<HAL_HeadTarget_WBFunctor_T >(obj, (void (HAL_HeadTarget_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class HAL_HeadTarget_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::HAL_HeadTarget result = guWhiteboard::HAL_HeadTarget_t().get_from(m);
        HAL_HeadTarget_function_t funct((void (HAL_HeadTarget_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::HAL_HeadTarget &))WBFunctor<HAL_HeadTarget_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<HAL_HeadTarget_WBFunctor_T >::fObject->*funct)(WBFunctor<HAL_HeadTarget_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (HAL_HeadTarget_WBFunctor_T::*HAL_HeadTarget_function_t) (guWhiteboard::WBTypes, guWhiteboard::HAL_HeadTarget &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(HAL_HeadTarget_WBFunctor_T *obj, void (HAL_HeadTarget_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::HAL_HeadTarget &), guWhiteboard::WBTypes t) { return new HAL_HeadTarget_WBFunctor<HAL_HeadTarget_WBFunctor_T >(obj, f, t); }
}; 
#endif //HAL_HeadTarget_DEFINED

#ifdef SensorsFootSensors_DEFINED
/** WBFunctor definition for SensorsFootSensors_WBFunctor_T */ 
template <typename SensorsFootSensors_WBFunctor_T >
class SensorsFootSensors_WBFunctor: public WBFunctor<SensorsFootSensors_WBFunctor_T > {
public:
    /** WBFunctor constructor for SensorsFootSensors_WBFunctor_T */
    SensorsFootSensors_WBFunctor(SensorsFootSensors_WBFunctor_T* obj, void (SensorsFootSensors_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::SensorsFootSensors &), guWhiteboard::WBTypes t): WBFunctor<SensorsFootSensors_WBFunctor_T >(obj, (void (SensorsFootSensors_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class SensorsFootSensors_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::SensorsFootSensors result = guWhiteboard::SensorsFootSensors_t().get_from(m);
        SensorsFootSensors_function_t funct((void (SensorsFootSensors_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::SensorsFootSensors &))WBFunctor<SensorsFootSensors_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<SensorsFootSensors_WBFunctor_T >::fObject->*funct)(WBFunctor<SensorsFootSensors_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (SensorsFootSensors_WBFunctor_T::*SensorsFootSensors_function_t) (guWhiteboard::WBTypes, guWhiteboard::SensorsFootSensors &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(SensorsFootSensors_WBFunctor_T *obj, void (SensorsFootSensors_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::SensorsFootSensors &), guWhiteboard::WBTypes t) { return new SensorsFootSensors_WBFunctor<SensorsFootSensors_WBFunctor_T >(obj, f, t); }
}; 
#endif //SensorsFootSensors_DEFINED

#ifdef SensorsBodySensors_DEFINED
/** WBFunctor definition for SensorsBodySensors_WBFunctor_T */ 
template <typename SensorsBodySensors_WBFunctor_T >
class SensorsBodySensors_WBFunctor: public WBFunctor<SensorsBodySensors_WBFunctor_T > {
public:
    /** WBFunctor constructor for SensorsBodySensors_WBFunctor_T */
    SensorsBodySensors_WBFunctor(SensorsBodySensors_WBFunctor_T* obj, void (SensorsBodySensors_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::SensorsBodySensors &), guWhiteboard::WBTypes t): WBFunctor<SensorsBodySensors_WBFunctor_T >(obj, (void (SensorsBodySensors_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class SensorsBodySensors_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::SensorsBodySensors result = guWhiteboard::SensorsBodySensors_t().get_from(m);
        SensorsBodySensors_function_t funct((void (SensorsBodySensors_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::SensorsBodySensors &))WBFunctor<SensorsBodySensors_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<SensorsBodySensors_WBFunctor_T >::fObject->*funct)(WBFunctor<SensorsBodySensors_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (SensorsBodySensors_WBFunctor_T::*SensorsBodySensors_function_t) (guWhiteboard::WBTypes, guWhiteboard::SensorsBodySensors &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(SensorsBodySensors_WBFunctor_T *obj, void (SensorsBodySensors_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::SensorsBodySensors &), guWhiteboard::WBTypes t) { return new SensorsBodySensors_WBFunctor<SensorsBodySensors_WBFunctor_T >(obj, f, t); }
}; 
#endif //SensorsBodySensors_DEFINED

#ifdef SENSORSLedsSensors_DEFINED
/** WBFunctor definition for SENSORSLedsSensors_WBFunctor_T */ 
template <typename SENSORSLedsSensors_WBFunctor_T >
class SENSORSLedsSensors_WBFunctor: public WBFunctor<SENSORSLedsSensors_WBFunctor_T > {
public:
    /** WBFunctor constructor for SENSORSLedsSensors_WBFunctor_T */
    SENSORSLedsSensors_WBFunctor(SENSORSLedsSensors_WBFunctor_T* obj, void (SENSORSLedsSensors_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::SENSORSLedsSensors &), guWhiteboard::WBTypes t): WBFunctor<SENSORSLedsSensors_WBFunctor_T >(obj, (void (SENSORSLedsSensors_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class SENSORSLedsSensors_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::SENSORSLedsSensors result = guWhiteboard::SENSORSLedsSensors_t().get_from(m);
        SENSORSLedsSensors_function_t funct((void (SENSORSLedsSensors_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::SENSORSLedsSensors &))WBFunctor<SENSORSLedsSensors_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<SENSORSLedsSensors_WBFunctor_T >::fObject->*funct)(WBFunctor<SENSORSLedsSensors_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (SENSORSLedsSensors_WBFunctor_T::*SENSORSLedsSensors_function_t) (guWhiteboard::WBTypes, guWhiteboard::SENSORSLedsSensors &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(SENSORSLedsSensors_WBFunctor_T *obj, void (SENSORSLedsSensors_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::SENSORSLedsSensors &), guWhiteboard::WBTypes t) { return new SENSORSLedsSensors_WBFunctor<SENSORSLedsSensors_WBFunctor_T >(obj, f, t); }
}; 
#endif //SENSORSLedsSensors_DEFINED

#ifdef SENSORSLegJointTemps_DEFINED
/** WBFunctor definition for SENSORSLegJointTemps_WBFunctor_T */ 
template <typename SENSORSLegJointTemps_WBFunctor_T >
class SENSORSLegJointTemps_WBFunctor: public WBFunctor<SENSORSLegJointTemps_WBFunctor_T > {
public:
    /** WBFunctor constructor for SENSORSLegJointTemps_WBFunctor_T */
    SENSORSLegJointTemps_WBFunctor(SENSORSLegJointTemps_WBFunctor_T* obj, void (SENSORSLegJointTemps_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::SENSORSLegJointTemps &), guWhiteboard::WBTypes t): WBFunctor<SENSORSLegJointTemps_WBFunctor_T >(obj, (void (SENSORSLegJointTemps_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class SENSORSLegJointTemps_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::SENSORSLegJointTemps result = guWhiteboard::SENSORSLegJointTemps_t().get_from(m);
        SENSORSLegJointTemps_function_t funct((void (SENSORSLegJointTemps_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::SENSORSLegJointTemps &))WBFunctor<SENSORSLegJointTemps_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<SENSORSLegJointTemps_WBFunctor_T >::fObject->*funct)(WBFunctor<SENSORSLegJointTemps_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (SENSORSLegJointTemps_WBFunctor_T::*SENSORSLegJointTemps_function_t) (guWhiteboard::WBTypes, guWhiteboard::SENSORSLegJointTemps &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(SENSORSLegJointTemps_WBFunctor_T *obj, void (SENSORSLegJointTemps_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::SENSORSLegJointTemps &), guWhiteboard::WBTypes t) { return new SENSORSLegJointTemps_WBFunctor<SENSORSLegJointTemps_WBFunctor_T >(obj, f, t); }
}; 
#endif //SENSORSLegJointTemps_DEFINED

#ifdef SENSORSTorsoJointTemps_DEFINED
/** WBFunctor definition for SENSORSTorsoJointTemps_WBFunctor_T */ 
template <typename SENSORSTorsoJointTemps_WBFunctor_T >
class SENSORSTorsoJointTemps_WBFunctor: public WBFunctor<SENSORSTorsoJointTemps_WBFunctor_T > {
public:
    /** WBFunctor constructor for SENSORSTorsoJointTemps_WBFunctor_T */
    SENSORSTorsoJointTemps_WBFunctor(SENSORSTorsoJointTemps_WBFunctor_T* obj, void (SENSORSTorsoJointTemps_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::SENSORSTorsoJointTemps &), guWhiteboard::WBTypes t): WBFunctor<SENSORSTorsoJointTemps_WBFunctor_T >(obj, (void (SENSORSTorsoJointTemps_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class SENSORSTorsoJointTemps_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::SENSORSTorsoJointTemps result = guWhiteboard::SENSORSTorsoJointTemps_t().get_from(m);
        SENSORSTorsoJointTemps_function_t funct((void (SENSORSTorsoJointTemps_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::SENSORSTorsoJointTemps &))WBFunctor<SENSORSTorsoJointTemps_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<SENSORSTorsoJointTemps_WBFunctor_T >::fObject->*funct)(WBFunctor<SENSORSTorsoJointTemps_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (SENSORSTorsoJointTemps_WBFunctor_T::*SENSORSTorsoJointTemps_function_t) (guWhiteboard::WBTypes, guWhiteboard::SENSORSTorsoJointTemps &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(SENSORSTorsoJointTemps_WBFunctor_T *obj, void (SENSORSTorsoJointTemps_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::SENSORSTorsoJointTemps &), guWhiteboard::WBTypes t) { return new SENSORSTorsoJointTemps_WBFunctor<SENSORSTorsoJointTemps_WBFunctor_T >(obj, f, t); }
}; 
#endif //SENSORSTorsoJointTemps_DEFINED

#ifdef SENSORSLegJointSensors_DEFINED
/** WBFunctor definition for SENSORSLegJointSensors_WBFunctor_T */ 
template <typename SENSORSLegJointSensors_WBFunctor_T >
class SENSORSLegJointSensors_WBFunctor: public WBFunctor<SENSORSLegJointSensors_WBFunctor_T > {
public:
    /** WBFunctor constructor for SENSORSLegJointSensors_WBFunctor_T */
    SENSORSLegJointSensors_WBFunctor(SENSORSLegJointSensors_WBFunctor_T* obj, void (SENSORSLegJointSensors_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::SENSORSLegJointSensors &), guWhiteboard::WBTypes t): WBFunctor<SENSORSLegJointSensors_WBFunctor_T >(obj, (void (SENSORSLegJointSensors_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class SENSORSLegJointSensors_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::SENSORSLegJointSensors result = guWhiteboard::SENSORSLegJointSensors_t().get_from(m);
        SENSORSLegJointSensors_function_t funct((void (SENSORSLegJointSensors_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::SENSORSLegJointSensors &))WBFunctor<SENSORSLegJointSensors_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<SENSORSLegJointSensors_WBFunctor_T >::fObject->*funct)(WBFunctor<SENSORSLegJointSensors_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (SENSORSLegJointSensors_WBFunctor_T::*SENSORSLegJointSensors_function_t) (guWhiteboard::WBTypes, guWhiteboard::SENSORSLegJointSensors &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(SENSORSLegJointSensors_WBFunctor_T *obj, void (SENSORSLegJointSensors_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::SENSORSLegJointSensors &), guWhiteboard::WBTypes t) { return new SENSORSLegJointSensors_WBFunctor<SENSORSLegJointSensors_WBFunctor_T >(obj, f, t); }
}; 
#endif //SENSORSLegJointSensors_DEFINED

#ifdef SENSORSTorsoJointSensors_DEFINED
/** WBFunctor definition for SENSORSTorsoJointSensors_WBFunctor_T */ 
template <typename SENSORSTorsoJointSensors_WBFunctor_T >
class SENSORSTorsoJointSensors_WBFunctor: public WBFunctor<SENSORSTorsoJointSensors_WBFunctor_T > {
public:
    /** WBFunctor constructor for SENSORSTorsoJointSensors_WBFunctor_T */
    SENSORSTorsoJointSensors_WBFunctor(SENSORSTorsoJointSensors_WBFunctor_T* obj, void (SENSORSTorsoJointSensors_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::SENSORSTorsoJointSensors &), guWhiteboard::WBTypes t): WBFunctor<SENSORSTorsoJointSensors_WBFunctor_T >(obj, (void (SENSORSTorsoJointSensors_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class SENSORSTorsoJointSensors_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::SENSORSTorsoJointSensors result = guWhiteboard::SENSORSTorsoJointSensors_t().get_from(m);
        SENSORSTorsoJointSensors_function_t funct((void (SENSORSTorsoJointSensors_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::SENSORSTorsoJointSensors &))WBFunctor<SENSORSTorsoJointSensors_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<SENSORSTorsoJointSensors_WBFunctor_T >::fObject->*funct)(WBFunctor<SENSORSTorsoJointSensors_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (SENSORSTorsoJointSensors_WBFunctor_T::*SENSORSTorsoJointSensors_function_t) (guWhiteboard::WBTypes, guWhiteboard::SENSORSTorsoJointSensors &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(SENSORSTorsoJointSensors_WBFunctor_T *obj, void (SENSORSTorsoJointSensors_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::SENSORSTorsoJointSensors &), guWhiteboard::WBTypes t) { return new SENSORSTorsoJointSensors_WBFunctor<SENSORSTorsoJointSensors_WBFunctor_T >(obj, f, t); }
}; 
#endif //SENSORSTorsoJointSensors_DEFINED

#ifdef SENSORSSonarSensors_DEFINED
/** WBFunctor definition for SENSORSSonarSensors_WBFunctor_T */ 
template <typename SENSORSSonarSensors_WBFunctor_T >
class SENSORSSonarSensors_WBFunctor: public WBFunctor<SENSORSSonarSensors_WBFunctor_T > {
public:
    /** WBFunctor constructor for SENSORSSonarSensors_WBFunctor_T */
    SENSORSSonarSensors_WBFunctor(SENSORSSonarSensors_WBFunctor_T* obj, void (SENSORSSonarSensors_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::SENSORSSonarSensors &), guWhiteboard::WBTypes t): WBFunctor<SENSORSSonarSensors_WBFunctor_T >(obj, (void (SENSORSSonarSensors_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class SENSORSSonarSensors_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::SENSORSSonarSensors result = guWhiteboard::SENSORSSonarSensors_t().get_from(m);
        SENSORSSonarSensors_function_t funct((void (SENSORSSonarSensors_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::SENSORSSonarSensors &))WBFunctor<SENSORSSonarSensors_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<SENSORSSonarSensors_WBFunctor_T >::fObject->*funct)(WBFunctor<SENSORSSonarSensors_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (SENSORSSonarSensors_WBFunctor_T::*SENSORSSonarSensors_function_t) (guWhiteboard::WBTypes, guWhiteboard::SENSORSSonarSensors &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(SENSORSSonarSensors_WBFunctor_T *obj, void (SENSORSSonarSensors_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::SENSORSSonarSensors &), guWhiteboard::WBTypes t) { return new SENSORSSonarSensors_WBFunctor<SENSORSSonarSensors_WBFunctor_T >(obj, f, t); }
}; 
#endif //SENSORSSonarSensors_DEFINED

#ifdef FSMControlStatus_DEFINED
/** WBFunctor definition for FSM_Control_WBFunctor_T */ 
template <typename FSM_Control_WBFunctor_T >
class FSM_Control_WBFunctor: public WBFunctor<FSM_Control_WBFunctor_T > {
public:
    /** WBFunctor constructor for FSM_Control_WBFunctor_T */
    FSM_Control_WBFunctor(FSM_Control_WBFunctor_T* obj, void (FSM_Control_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::FSMControlStatus &), guWhiteboard::WBTypes t): WBFunctor<FSM_Control_WBFunctor_T >(obj, (void (FSM_Control_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class FSM_Control_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::FSMControlStatus result = guWhiteboard::FSM_Control_t().get_from(m);
        FSM_Control_function_t funct((void (FSM_Control_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::FSMControlStatus &))WBFunctor<FSM_Control_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<FSM_Control_WBFunctor_T >::fObject->*funct)(WBFunctor<FSM_Control_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (FSM_Control_WBFunctor_T::*FSM_Control_function_t) (guWhiteboard::WBTypes, guWhiteboard::FSMControlStatus &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(FSM_Control_WBFunctor_T *obj, void (FSM_Control_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::FSMControlStatus &), guWhiteboard::WBTypes t) { return new FSM_Control_WBFunctor<FSM_Control_WBFunctor_T >(obj, f, t); }
}; 
#endif //FSMControlStatus_DEFINED

#ifdef FSMControlStatus_DEFINED
/** WBFunctor definition for FSM_Status_WBFunctor_T */ 
template <typename FSM_Status_WBFunctor_T >
class FSM_Status_WBFunctor: public WBFunctor<FSM_Status_WBFunctor_T > {
public:
    /** WBFunctor constructor for FSM_Status_WBFunctor_T */
    FSM_Status_WBFunctor(FSM_Status_WBFunctor_T* obj, void (FSM_Status_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::FSMControlStatus &), guWhiteboard::WBTypes t): WBFunctor<FSM_Status_WBFunctor_T >(obj, (void (FSM_Status_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class FSM_Status_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::FSMControlStatus result = guWhiteboard::FSM_Status_t().get_from(m);
        FSM_Status_function_t funct((void (FSM_Status_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::FSMControlStatus &))WBFunctor<FSM_Status_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<FSM_Status_WBFunctor_T >::fObject->*funct)(WBFunctor<FSM_Status_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (FSM_Status_WBFunctor_T::*FSM_Status_function_t) (guWhiteboard::WBTypes, guWhiteboard::FSMControlStatus &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(FSM_Status_WBFunctor_T *obj, void (FSM_Status_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::FSMControlStatus &), guWhiteboard::WBTypes t) { return new FSM_Status_WBFunctor<FSM_Status_WBFunctor_T >(obj, f, t); }
}; 
#endif //FSMControlStatus_DEFINED

#ifdef FSMNames_DEFINED
/** WBFunctor definition for FSM_Names_WBFunctor_T */ 
template <typename FSM_Names_WBFunctor_T >
class FSM_Names_WBFunctor: public WBFunctor<FSM_Names_WBFunctor_T > {
public:
    /** WBFunctor constructor for FSM_Names_WBFunctor_T */
    FSM_Names_WBFunctor(FSM_Names_WBFunctor_T* obj, void (FSM_Names_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::FSMNames &), guWhiteboard::WBTypes t): WBFunctor<FSM_Names_WBFunctor_T >(obj, (void (FSM_Names_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class FSM_Names_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::FSMNames result = guWhiteboard::FSM_Names_t().get_from(m);
        FSM_Names_function_t funct((void (FSM_Names_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::FSMNames &))WBFunctor<FSM_Names_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<FSM_Names_WBFunctor_T >::fObject->*funct)(WBFunctor<FSM_Names_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (FSM_Names_WBFunctor_T::*FSM_Names_function_t) (guWhiteboard::WBTypes, guWhiteboard::FSMNames &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(FSM_Names_WBFunctor_T *obj, void (FSM_Names_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::FSMNames &), guWhiteboard::WBTypes t) { return new FSM_Names_WBFunctor<FSM_Names_WBFunctor_T >(obj, f, t); }
}; 
#endif //FSMNames_DEFINED


/** WBFunctor definition for SoloTypeExample_WBFunctor_T */ 
template <typename SoloTypeExample_WBFunctor_T >
class SoloTypeExample_WBFunctor: public WBFunctor<SoloTypeExample_WBFunctor_T > {
public:
    /** WBFunctor constructor for SoloTypeExample_WBFunctor_T */
    SoloTypeExample_WBFunctor(SoloTypeExample_WBFunctor_T* obj, void (SoloTypeExample_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<SoloTypeExample_WBFunctor_T >(obj, (void (SoloTypeExample_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class SoloTypeExample_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::SoloTypeExample_t().get_from(m);
        SoloTypeExample_function_t funct((void (SoloTypeExample_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<SoloTypeExample_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<SoloTypeExample_WBFunctor_T >::fObject->*funct)(WBFunctor<SoloTypeExample_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (SoloTypeExample_WBFunctor_T::*SoloTypeExample_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(SoloTypeExample_WBFunctor_T *obj, void (SoloTypeExample_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new SoloTypeExample_WBFunctor<SoloTypeExample_WBFunctor_T >(obj, f, t); }
}; 


#ifdef FilteredArrayOneDimObjects_DEFINED
/** WBFunctor definition for FilteredGoalSighting_WBFunctor_T */ 
template <typename FilteredGoalSighting_WBFunctor_T >
class FilteredGoalSighting_WBFunctor: public WBFunctor<FilteredGoalSighting_WBFunctor_T > {
public:
    /** WBFunctor constructor for FilteredGoalSighting_WBFunctor_T */
    FilteredGoalSighting_WBFunctor(FilteredGoalSighting_WBFunctor_T* obj, void (FilteredGoalSighting_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::FilteredArrayOneDimObjects &), guWhiteboard::WBTypes t): WBFunctor<FilteredGoalSighting_WBFunctor_T >(obj, (void (FilteredGoalSighting_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class FilteredGoalSighting_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::FilteredArrayOneDimObjects result = guWhiteboard::FilteredGoalSighting_t().get_from(m);
        FilteredGoalSighting_function_t funct((void (FilteredGoalSighting_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::FilteredArrayOneDimObjects &))WBFunctor<FilteredGoalSighting_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<FilteredGoalSighting_WBFunctor_T >::fObject->*funct)(WBFunctor<FilteredGoalSighting_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (FilteredGoalSighting_WBFunctor_T::*FilteredGoalSighting_function_t) (guWhiteboard::WBTypes, guWhiteboard::FilteredArrayOneDimObjects &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(FilteredGoalSighting_WBFunctor_T *obj, void (FilteredGoalSighting_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::FilteredArrayOneDimObjects &), guWhiteboard::WBTypes t) { return new FilteredGoalSighting_WBFunctor<FilteredGoalSighting_WBFunctor_T >(obj, f, t); }
}; 
#endif //FilteredArrayOneDimObjects_DEFINED

#ifdef NAO_State_DEFINED
/** WBFunctor definition for NAO_State_WBFunctor_T */ 
template <typename NAO_State_WBFunctor_T >
class NAO_State_WBFunctor: public WBFunctor<NAO_State_WBFunctor_T > {
public:
    /** WBFunctor constructor for NAO_State_WBFunctor_T */
    NAO_State_WBFunctor(NAO_State_WBFunctor_T* obj, void (NAO_State_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::NAO_State &), guWhiteboard::WBTypes t): WBFunctor<NAO_State_WBFunctor_T >(obj, (void (NAO_State_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class NAO_State_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::NAO_State result = guWhiteboard::NAO_State_t().get_from(m);
        NAO_State_function_t funct((void (NAO_State_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::NAO_State &))WBFunctor<NAO_State_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<NAO_State_WBFunctor_T >::fObject->*funct)(WBFunctor<NAO_State_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (NAO_State_WBFunctor_T::*NAO_State_function_t) (guWhiteboard::WBTypes, guWhiteboard::NAO_State &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(NAO_State_WBFunctor_T *obj, void (NAO_State_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::NAO_State &), guWhiteboard::WBTypes t) { return new NAO_State_WBFunctor<NAO_State_WBFunctor_T >(obj, f, t); }
}; 
#endif //NAO_State_DEFINED

#ifdef GCGameState_DEFINED
/** WBFunctor definition for UDPRN_WBFunctor_T */ 
template <typename UDPRN_WBFunctor_T >
class UDPRN_WBFunctor: public WBFunctor<UDPRN_WBFunctor_T > {
public:
    /** WBFunctor constructor for UDPRN_WBFunctor_T */
    UDPRN_WBFunctor(UDPRN_WBFunctor_T* obj, void (UDPRN_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::GCGameState &), guWhiteboard::WBTypes t): WBFunctor<UDPRN_WBFunctor_T >(obj, (void (UDPRN_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class UDPRN_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::GCGameState result = guWhiteboard::UDPRN_t().get_from(m);
        UDPRN_function_t funct((void (UDPRN_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::GCGameState &))WBFunctor<UDPRN_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<UDPRN_WBFunctor_T >::fObject->*funct)(WBFunctor<UDPRN_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (UDPRN_WBFunctor_T::*UDPRN_function_t) (guWhiteboard::WBTypes, guWhiteboard::GCGameState &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(UDPRN_WBFunctor_T *obj, void (UDPRN_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::GCGameState &), guWhiteboard::WBTypes t) { return new UDPRN_WBFunctor<UDPRN_WBFunctor_T >(obj, f, t); }
}; 
#endif //GCGameState_DEFINED


/** WBFunctor definition for PlayerNumber_WBFunctor_T */ 
template <typename PlayerNumber_WBFunctor_T >
class PlayerNumber_WBFunctor: public WBFunctor<PlayerNumber_WBFunctor_T > {
public:
    /** WBFunctor constructor for PlayerNumber_WBFunctor_T */
    PlayerNumber_WBFunctor(PlayerNumber_WBFunctor_T* obj, void (PlayerNumber_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, int8_t &), guWhiteboard::WBTypes t): WBFunctor<PlayerNumber_WBFunctor_T >(obj, (void (PlayerNumber_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class PlayerNumber_WBFunctor */
    void call(gu_simple_message *m) {
        int8_t result = guWhiteboard::PlayerNumber_t().get_from(m);
        PlayerNumber_function_t funct((void (PlayerNumber_WBFunctor_T::*)(guWhiteboard::WBTypes, int8_t &))WBFunctor<PlayerNumber_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<PlayerNumber_WBFunctor_T >::fObject->*funct)(WBFunctor<PlayerNumber_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (PlayerNumber_WBFunctor_T::*PlayerNumber_function_t) (guWhiteboard::WBTypes, int8_t &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(PlayerNumber_WBFunctor_T *obj, void (PlayerNumber_WBFunctor_T::*f)(guWhiteboard::WBTypes, int8_t &), guWhiteboard::WBTypes t) { return new PlayerNumber_WBFunctor<PlayerNumber_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for ManuallyPenalized_WBFunctor_T */ 
template <typename ManuallyPenalized_WBFunctor_T >
class ManuallyPenalized_WBFunctor: public WBFunctor<ManuallyPenalized_WBFunctor_T > {
public:
    /** WBFunctor constructor for ManuallyPenalized_WBFunctor_T */
    ManuallyPenalized_WBFunctor(ManuallyPenalized_WBFunctor_T* obj, void (ManuallyPenalized_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, int8_t &), guWhiteboard::WBTypes t): WBFunctor<ManuallyPenalized_WBFunctor_T >(obj, (void (ManuallyPenalized_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class ManuallyPenalized_WBFunctor */
    void call(gu_simple_message *m) {
        int8_t result = guWhiteboard::ManuallyPenalized_t().get_from(m);
        ManuallyPenalized_function_t funct((void (ManuallyPenalized_WBFunctor_T::*)(guWhiteboard::WBTypes, int8_t &))WBFunctor<ManuallyPenalized_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<ManuallyPenalized_WBFunctor_T >::fObject->*funct)(WBFunctor<ManuallyPenalized_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (ManuallyPenalized_WBFunctor_T::*ManuallyPenalized_function_t) (guWhiteboard::WBTypes, int8_t &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(ManuallyPenalized_WBFunctor_T *obj, void (ManuallyPenalized_WBFunctor_T::*f)(guWhiteboard::WBTypes, int8_t &), guWhiteboard::WBTypes t) { return new ManuallyPenalized_WBFunctor<ManuallyPenalized_WBFunctor_T >(obj, f, t); }
}; 


#ifdef VisionControlStatus_DEFINED
/** WBFunctor definition for VisionControl_WBFunctor_T */ 
template <typename VisionControl_WBFunctor_T >
class VisionControl_WBFunctor: public WBFunctor<VisionControl_WBFunctor_T > {
public:
    /** WBFunctor constructor for VisionControl_WBFunctor_T */
    VisionControl_WBFunctor(VisionControl_WBFunctor_T* obj, void (VisionControl_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::VisionControlStatus &), guWhiteboard::WBTypes t): WBFunctor<VisionControl_WBFunctor_T >(obj, (void (VisionControl_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class VisionControl_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::VisionControlStatus result = guWhiteboard::VisionControl_t().get_from(m);
        VisionControl_function_t funct((void (VisionControl_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::VisionControlStatus &))WBFunctor<VisionControl_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<VisionControl_WBFunctor_T >::fObject->*funct)(WBFunctor<VisionControl_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (VisionControl_WBFunctor_T::*VisionControl_function_t) (guWhiteboard::WBTypes, guWhiteboard::VisionControlStatus &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(VisionControl_WBFunctor_T *obj, void (VisionControl_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::VisionControlStatus &), guWhiteboard::WBTypes t) { return new VisionControl_WBFunctor<VisionControl_WBFunctor_T >(obj, f, t); }
}; 
#endif //VisionControlStatus_DEFINED

#ifdef VisionControlStatus_DEFINED
/** WBFunctor definition for VisionStatus_WBFunctor_T */ 
template <typename VisionStatus_WBFunctor_T >
class VisionStatus_WBFunctor: public WBFunctor<VisionStatus_WBFunctor_T > {
public:
    /** WBFunctor constructor for VisionStatus_WBFunctor_T */
    VisionStatus_WBFunctor(VisionStatus_WBFunctor_T* obj, void (VisionStatus_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::VisionControlStatus &), guWhiteboard::WBTypes t): WBFunctor<VisionStatus_WBFunctor_T >(obj, (void (VisionStatus_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class VisionStatus_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::VisionControlStatus result = guWhiteboard::VisionStatus_t().get_from(m);
        VisionStatus_function_t funct((void (VisionStatus_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::VisionControlStatus &))WBFunctor<VisionStatus_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<VisionStatus_WBFunctor_T >::fObject->*funct)(WBFunctor<VisionStatus_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (VisionStatus_WBFunctor_T::*VisionStatus_function_t) (guWhiteboard::WBTypes, guWhiteboard::VisionControlStatus &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(VisionStatus_WBFunctor_T *obj, void (VisionStatus_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::VisionControlStatus &), guWhiteboard::WBTypes t) { return new VisionStatus_WBFunctor<VisionStatus_WBFunctor_T >(obj, f, t); }
}; 
#endif //VisionControlStatus_DEFINED

#ifdef FFTStatus_DEFINED
/** WBFunctor definition for FFTStatus_WBFunctor_T */ 
template <typename FFTStatus_WBFunctor_T >
class FFTStatus_WBFunctor: public WBFunctor<FFTStatus_WBFunctor_T > {
public:
    /** WBFunctor constructor for FFTStatus_WBFunctor_T */
    FFTStatus_WBFunctor(FFTStatus_WBFunctor_T* obj, void (FFTStatus_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::FFTStatus &), guWhiteboard::WBTypes t): WBFunctor<FFTStatus_WBFunctor_T >(obj, (void (FFTStatus_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class FFTStatus_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::FFTStatus result = guWhiteboard::FFTStatus_t().get_from(m);
        FFTStatus_function_t funct((void (FFTStatus_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::FFTStatus &))WBFunctor<FFTStatus_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<FFTStatus_WBFunctor_T >::fObject->*funct)(WBFunctor<FFTStatus_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (FFTStatus_WBFunctor_T::*FFTStatus_function_t) (guWhiteboard::WBTypes, guWhiteboard::FFTStatus &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(FFTStatus_WBFunctor_T *obj, void (FFTStatus_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::FFTStatus &), guWhiteboard::WBTypes t) { return new FFTStatus_WBFunctor<FFTStatus_WBFunctor_T >(obj, f, t); }
}; 
#endif //FFTStatus_DEFINED

#ifdef FilteredArrayOneDimSonar_DEFINED
/** WBFunctor definition for FSOsighting_WBFunctor_T */ 
template <typename FSOsighting_WBFunctor_T >
class FSOsighting_WBFunctor: public WBFunctor<FSOsighting_WBFunctor_T > {
public:
    /** WBFunctor constructor for FSOsighting_WBFunctor_T */
    FSOsighting_WBFunctor(FSOsighting_WBFunctor_T* obj, void (FSOsighting_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::FilteredArrayOneDimSonar &), guWhiteboard::WBTypes t): WBFunctor<FSOsighting_WBFunctor_T >(obj, (void (FSOsighting_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class FSOsighting_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::FilteredArrayOneDimSonar result = guWhiteboard::FSOsighting_t().get_from(m);
        FSOsighting_function_t funct((void (FSOsighting_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::FilteredArrayOneDimSonar &))WBFunctor<FSOsighting_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<FSOsighting_WBFunctor_T >::fObject->*funct)(WBFunctor<FSOsighting_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (FSOsighting_WBFunctor_T::*FSOsighting_function_t) (guWhiteboard::WBTypes, guWhiteboard::FilteredArrayOneDimSonar &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(FSOsighting_WBFunctor_T *obj, void (FSOsighting_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::FilteredArrayOneDimSonar &), guWhiteboard::WBTypes t) { return new FSOsighting_WBFunctor<FSOsighting_WBFunctor_T >(obj, f, t); }
}; 
#endif //FilteredArrayOneDimSonar_DEFINED

#ifdef TopParticles_DEFINED
/** WBFunctor definition for TopParticles_WBFunctor_T */ 
template <typename TopParticles_WBFunctor_T >
class TopParticles_WBFunctor: public WBFunctor<TopParticles_WBFunctor_T > {
public:
    /** WBFunctor constructor for TopParticles_WBFunctor_T */
    TopParticles_WBFunctor(TopParticles_WBFunctor_T* obj, void (TopParticles_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::TopParticles &), guWhiteboard::WBTypes t): WBFunctor<TopParticles_WBFunctor_T >(obj, (void (TopParticles_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class TopParticles_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::TopParticles result = guWhiteboard::TopParticles_t().get_from(m);
        TopParticles_function_t funct((void (TopParticles_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::TopParticles &))WBFunctor<TopParticles_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<TopParticles_WBFunctor_T >::fObject->*funct)(WBFunctor<TopParticles_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (TopParticles_WBFunctor_T::*TopParticles_function_t) (guWhiteboard::WBTypes, guWhiteboard::TopParticles &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(TopParticles_WBFunctor_T *obj, void (TopParticles_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::TopParticles &), guWhiteboard::WBTypes t) { return new TopParticles_WBFunctor<TopParticles_WBFunctor_T >(obj, f, t); }
}; 
#endif //TopParticles_DEFINED

#ifdef FilteredArrayBallSightings_DEFINED
/** WBFunctor definition for FilteredBallSighting_WBFunctor_T */ 
template <typename FilteredBallSighting_WBFunctor_T >
class FilteredBallSighting_WBFunctor: public WBFunctor<FilteredBallSighting_WBFunctor_T > {
public:
    /** WBFunctor constructor for FilteredBallSighting_WBFunctor_T */
    FilteredBallSighting_WBFunctor(FilteredBallSighting_WBFunctor_T* obj, void (FilteredBallSighting_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::FilteredArrayBallSightings &), guWhiteboard::WBTypes t): WBFunctor<FilteredBallSighting_WBFunctor_T >(obj, (void (FilteredBallSighting_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class FilteredBallSighting_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::FilteredArrayBallSightings result = guWhiteboard::FilteredBallSighting_t().get_from(m);
        FilteredBallSighting_function_t funct((void (FilteredBallSighting_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::FilteredArrayBallSightings &))WBFunctor<FilteredBallSighting_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<FilteredBallSighting_WBFunctor_T >::fObject->*funct)(WBFunctor<FilteredBallSighting_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (FilteredBallSighting_WBFunctor_T::*FilteredBallSighting_function_t) (guWhiteboard::WBTypes, guWhiteboard::FilteredArrayBallSightings &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(FilteredBallSighting_WBFunctor_T *obj, void (FilteredBallSighting_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::FilteredArrayBallSightings &), guWhiteboard::WBTypes t) { return new FilteredBallSighting_WBFunctor<FilteredBallSighting_WBFunctor_T >(obj, f, t); }
}; 
#endif //FilteredArrayBallSightings_DEFINED


/** WBFunctor definition for PF_ControlStatus_Modes_WBFunctor_T */ 
template <typename PF_ControlStatus_Modes_WBFunctor_T >
class PF_ControlStatus_Modes_WBFunctor: public WBFunctor<PF_ControlStatus_Modes_WBFunctor_T > {
public:
    /** WBFunctor constructor for PF_ControlStatus_Modes_WBFunctor_T */
    PF_ControlStatus_Modes_WBFunctor(PF_ControlStatus_Modes_WBFunctor_T* obj, void (PF_ControlStatus_Modes_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, int32_t &), guWhiteboard::WBTypes t): WBFunctor<PF_ControlStatus_Modes_WBFunctor_T >(obj, (void (PF_ControlStatus_Modes_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class PF_ControlStatus_Modes_WBFunctor */
    void call(gu_simple_message *m) {
        int32_t result = guWhiteboard::PF_ControlStatus_Modes_t().get_from(m);
        PF_ControlStatus_Modes_function_t funct((void (PF_ControlStatus_Modes_WBFunctor_T::*)(guWhiteboard::WBTypes, int32_t &))WBFunctor<PF_ControlStatus_Modes_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<PF_ControlStatus_Modes_WBFunctor_T >::fObject->*funct)(WBFunctor<PF_ControlStatus_Modes_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (PF_ControlStatus_Modes_WBFunctor_T::*PF_ControlStatus_Modes_function_t) (guWhiteboard::WBTypes, int32_t &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(PF_ControlStatus_Modes_WBFunctor_T *obj, void (PF_ControlStatus_Modes_WBFunctor_T::*f)(guWhiteboard::WBTypes, int32_t &), guWhiteboard::WBTypes t) { return new PF_ControlStatus_Modes_WBFunctor<PF_ControlStatus_Modes_WBFunctor_T >(obj, f, t); }
}; 


#ifdef WEBOTS_NXT_bridge_DEFINED
/** WBFunctor definition for WEBOTS_NXT_bridge_WBFunctor_T */ 
template <typename WEBOTS_NXT_bridge_WBFunctor_T >
class WEBOTS_NXT_bridge_WBFunctor: public WBFunctor<WEBOTS_NXT_bridge_WBFunctor_T > {
public:
    /** WBFunctor constructor for WEBOTS_NXT_bridge_WBFunctor_T */
    WEBOTS_NXT_bridge_WBFunctor(WEBOTS_NXT_bridge_WBFunctor_T* obj, void (WEBOTS_NXT_bridge_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_bridge &), guWhiteboard::WBTypes t): WBFunctor<WEBOTS_NXT_bridge_WBFunctor_T >(obj, (void (WEBOTS_NXT_bridge_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class WEBOTS_NXT_bridge_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::WEBOTS_NXT_bridge result = guWhiteboard::WEBOTS_NXT_bridge_t().get_from(m);
        WEBOTS_NXT_bridge_function_t funct((void (WEBOTS_NXT_bridge_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_bridge &))WBFunctor<WEBOTS_NXT_bridge_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<WEBOTS_NXT_bridge_WBFunctor_T >::fObject->*funct)(WBFunctor<WEBOTS_NXT_bridge_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (WEBOTS_NXT_bridge_WBFunctor_T::*WEBOTS_NXT_bridge_function_t) (guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_bridge &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(WEBOTS_NXT_bridge_WBFunctor_T *obj, void (WEBOTS_NXT_bridge_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_bridge &), guWhiteboard::WBTypes t) { return new WEBOTS_NXT_bridge_WBFunctor<WEBOTS_NXT_bridge_WBFunctor_T >(obj, f, t); }
}; 
#endif //WEBOTS_NXT_bridge_DEFINED

#ifdef WEBOTS_NXT_encoders_DEFINED
/** WBFunctor definition for WEBOTS_NXT_encoders_WBFunctor_T */ 
template <typename WEBOTS_NXT_encoders_WBFunctor_T >
class WEBOTS_NXT_encoders_WBFunctor: public WBFunctor<WEBOTS_NXT_encoders_WBFunctor_T > {
public:
    /** WBFunctor constructor for WEBOTS_NXT_encoders_WBFunctor_T */
    WEBOTS_NXT_encoders_WBFunctor(WEBOTS_NXT_encoders_WBFunctor_T* obj, void (WEBOTS_NXT_encoders_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_encoders &), guWhiteboard::WBTypes t): WBFunctor<WEBOTS_NXT_encoders_WBFunctor_T >(obj, (void (WEBOTS_NXT_encoders_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class WEBOTS_NXT_encoders_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::WEBOTS_NXT_encoders result = guWhiteboard::WEBOTS_NXT_encoders_t().get_from(m);
        WEBOTS_NXT_encoders_function_t funct((void (WEBOTS_NXT_encoders_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_encoders &))WBFunctor<WEBOTS_NXT_encoders_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<WEBOTS_NXT_encoders_WBFunctor_T >::fObject->*funct)(WBFunctor<WEBOTS_NXT_encoders_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (WEBOTS_NXT_encoders_WBFunctor_T::*WEBOTS_NXT_encoders_function_t) (guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_encoders &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(WEBOTS_NXT_encoders_WBFunctor_T *obj, void (WEBOTS_NXT_encoders_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_encoders &), guWhiteboard::WBTypes t) { return new WEBOTS_NXT_encoders_WBFunctor<WEBOTS_NXT_encoders_WBFunctor_T >(obj, f, t); }
}; 
#endif //WEBOTS_NXT_encoders_DEFINED

#ifdef WEBOTS_NXT_camera_DEFINED
/** WBFunctor definition for WEBOTS_NXT_camera_WBFunctor_T */ 
template <typename WEBOTS_NXT_camera_WBFunctor_T >
class WEBOTS_NXT_camera_WBFunctor: public WBFunctor<WEBOTS_NXT_camera_WBFunctor_T > {
public:
    /** WBFunctor constructor for WEBOTS_NXT_camera_WBFunctor_T */
    WEBOTS_NXT_camera_WBFunctor(WEBOTS_NXT_camera_WBFunctor_T* obj, void (WEBOTS_NXT_camera_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_camera &), guWhiteboard::WBTypes t): WBFunctor<WEBOTS_NXT_camera_WBFunctor_T >(obj, (void (WEBOTS_NXT_camera_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class WEBOTS_NXT_camera_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::WEBOTS_NXT_camera result = guWhiteboard::WEBOTS_NXT_camera_t().get_from(m);
        WEBOTS_NXT_camera_function_t funct((void (WEBOTS_NXT_camera_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_camera &))WBFunctor<WEBOTS_NXT_camera_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<WEBOTS_NXT_camera_WBFunctor_T >::fObject->*funct)(WBFunctor<WEBOTS_NXT_camera_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (WEBOTS_NXT_camera_WBFunctor_T::*WEBOTS_NXT_camera_function_t) (guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_camera &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(WEBOTS_NXT_camera_WBFunctor_T *obj, void (WEBOTS_NXT_camera_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_camera &), guWhiteboard::WBTypes t) { return new WEBOTS_NXT_camera_WBFunctor<WEBOTS_NXT_camera_WBFunctor_T >(obj, f, t); }
}; 
#endif //WEBOTS_NXT_camera_DEFINED

#ifdef WEBOTS_NXT_walk_isRunning_DEFINED
/** WBFunctor definition for WEBOTS_NXT_walk_isRunning_WBFunctor_T */ 
template <typename WEBOTS_NXT_walk_isRunning_WBFunctor_T >
class WEBOTS_NXT_walk_isRunning_WBFunctor: public WBFunctor<WEBOTS_NXT_walk_isRunning_WBFunctor_T > {
public:
    /** WBFunctor constructor for WEBOTS_NXT_walk_isRunning_WBFunctor_T */
    WEBOTS_NXT_walk_isRunning_WBFunctor(WEBOTS_NXT_walk_isRunning_WBFunctor_T* obj, void (WEBOTS_NXT_walk_isRunning_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_walk_isRunning &), guWhiteboard::WBTypes t): WBFunctor<WEBOTS_NXT_walk_isRunning_WBFunctor_T >(obj, (void (WEBOTS_NXT_walk_isRunning_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class WEBOTS_NXT_walk_isRunning_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::WEBOTS_NXT_walk_isRunning result = guWhiteboard::WEBOTS_NXT_walk_isRunning_t().get_from(m);
        WEBOTS_NXT_walk_isRunning_function_t funct((void (WEBOTS_NXT_walk_isRunning_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_walk_isRunning &))WBFunctor<WEBOTS_NXT_walk_isRunning_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<WEBOTS_NXT_walk_isRunning_WBFunctor_T >::fObject->*funct)(WBFunctor<WEBOTS_NXT_walk_isRunning_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (WEBOTS_NXT_walk_isRunning_WBFunctor_T::*WEBOTS_NXT_walk_isRunning_function_t) (guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_walk_isRunning &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(WEBOTS_NXT_walk_isRunning_WBFunctor_T *obj, void (WEBOTS_NXT_walk_isRunning_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_walk_isRunning &), guWhiteboard::WBTypes t) { return new WEBOTS_NXT_walk_isRunning_WBFunctor<WEBOTS_NXT_walk_isRunning_WBFunctor_T >(obj, f, t); }
}; 
#endif //WEBOTS_NXT_walk_isRunning_DEFINED

#ifdef WEBOTS_NXT_deadReakoning_walk_DEFINED
/** WBFunctor definition for WEBOTS_NXT_deadReakoning_walk_WBFunctor_T */ 
template <typename WEBOTS_NXT_deadReakoning_walk_WBFunctor_T >
class WEBOTS_NXT_deadReakoning_walk_WBFunctor: public WBFunctor<WEBOTS_NXT_deadReakoning_walk_WBFunctor_T > {
public:
    /** WBFunctor constructor for WEBOTS_NXT_deadReakoning_walk_WBFunctor_T */
    WEBOTS_NXT_deadReakoning_walk_WBFunctor(WEBOTS_NXT_deadReakoning_walk_WBFunctor_T* obj, void (WEBOTS_NXT_deadReakoning_walk_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_deadReakoning_walk &), guWhiteboard::WBTypes t): WBFunctor<WEBOTS_NXT_deadReakoning_walk_WBFunctor_T >(obj, (void (WEBOTS_NXT_deadReakoning_walk_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class WEBOTS_NXT_deadReakoning_walk_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::WEBOTS_NXT_deadReakoning_walk result = guWhiteboard::WEBOTS_NXT_deadReakoning_walk_t().get_from(m);
        WEBOTS_NXT_deadReakoning_walk_function_t funct((void (WEBOTS_NXT_deadReakoning_walk_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_deadReakoning_walk &))WBFunctor<WEBOTS_NXT_deadReakoning_walk_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<WEBOTS_NXT_deadReakoning_walk_WBFunctor_T >::fObject->*funct)(WBFunctor<WEBOTS_NXT_deadReakoning_walk_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (WEBOTS_NXT_deadReakoning_walk_WBFunctor_T::*WEBOTS_NXT_deadReakoning_walk_function_t) (guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_deadReakoning_walk &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(WEBOTS_NXT_deadReakoning_walk_WBFunctor_T *obj, void (WEBOTS_NXT_deadReakoning_walk_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_deadReakoning_walk &), guWhiteboard::WBTypes t) { return new WEBOTS_NXT_deadReakoning_walk_WBFunctor<WEBOTS_NXT_deadReakoning_walk_WBFunctor_T >(obj, f, t); }
}; 
#endif //WEBOTS_NXT_deadReakoning_walk_DEFINED

#ifdef WEBOTS_NXT_colorLine_walk_DEFINED
/** WBFunctor definition for WEBOTS_NXT_colorLine_walk_WBFunctor_T */ 
template <typename WEBOTS_NXT_colorLine_walk_WBFunctor_T >
class WEBOTS_NXT_colorLine_walk_WBFunctor: public WBFunctor<WEBOTS_NXT_colorLine_walk_WBFunctor_T > {
public:
    /** WBFunctor constructor for WEBOTS_NXT_colorLine_walk_WBFunctor_T */
    WEBOTS_NXT_colorLine_walk_WBFunctor(WEBOTS_NXT_colorLine_walk_WBFunctor_T* obj, void (WEBOTS_NXT_colorLine_walk_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_colorLine_walk &), guWhiteboard::WBTypes t): WBFunctor<WEBOTS_NXT_colorLine_walk_WBFunctor_T >(obj, (void (WEBOTS_NXT_colorLine_walk_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class WEBOTS_NXT_colorLine_walk_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::WEBOTS_NXT_colorLine_walk result = guWhiteboard::WEBOTS_NXT_colorLine_walk_t().get_from(m);
        WEBOTS_NXT_colorLine_walk_function_t funct((void (WEBOTS_NXT_colorLine_walk_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_colorLine_walk &))WBFunctor<WEBOTS_NXT_colorLine_walk_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<WEBOTS_NXT_colorLine_walk_WBFunctor_T >::fObject->*funct)(WBFunctor<WEBOTS_NXT_colorLine_walk_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (WEBOTS_NXT_colorLine_walk_WBFunctor_T::*WEBOTS_NXT_colorLine_walk_function_t) (guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_colorLine_walk &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(WEBOTS_NXT_colorLine_walk_WBFunctor_T *obj, void (WEBOTS_NXT_colorLine_walk_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_colorLine_walk &), guWhiteboard::WBTypes t) { return new WEBOTS_NXT_colorLine_walk_WBFunctor<WEBOTS_NXT_colorLine_walk_WBFunctor_T >(obj, f, t); }
}; 
#endif //WEBOTS_NXT_colorLine_walk_DEFINED

#ifdef WEBOTS_NXT_gridMotions_DEFINED
/** WBFunctor definition for WEBOTS_NXT_gridMotions_WBFunctor_T */ 
template <typename WEBOTS_NXT_gridMotions_WBFunctor_T >
class WEBOTS_NXT_gridMotions_WBFunctor: public WBFunctor<WEBOTS_NXT_gridMotions_WBFunctor_T > {
public:
    /** WBFunctor constructor for WEBOTS_NXT_gridMotions_WBFunctor_T */
    WEBOTS_NXT_gridMotions_WBFunctor(WEBOTS_NXT_gridMotions_WBFunctor_T* obj, void (WEBOTS_NXT_gridMotions_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_gridMotions &), guWhiteboard::WBTypes t): WBFunctor<WEBOTS_NXT_gridMotions_WBFunctor_T >(obj, (void (WEBOTS_NXT_gridMotions_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class WEBOTS_NXT_gridMotions_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::WEBOTS_NXT_gridMotions result = guWhiteboard::WEBOTS_NXT_gridMotions_t().get_from(m);
        WEBOTS_NXT_gridMotions_function_t funct((void (WEBOTS_NXT_gridMotions_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_gridMotions &))WBFunctor<WEBOTS_NXT_gridMotions_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<WEBOTS_NXT_gridMotions_WBFunctor_T >::fObject->*funct)(WBFunctor<WEBOTS_NXT_gridMotions_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (WEBOTS_NXT_gridMotions_WBFunctor_T::*WEBOTS_NXT_gridMotions_function_t) (guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_gridMotions &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(WEBOTS_NXT_gridMotions_WBFunctor_T *obj, void (WEBOTS_NXT_gridMotions_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_gridMotions &), guWhiteboard::WBTypes t) { return new WEBOTS_NXT_gridMotions_WBFunctor<WEBOTS_NXT_gridMotions_WBFunctor_T >(obj, f, t); }
}; 
#endif //WEBOTS_NXT_gridMotions_DEFINED

#ifdef VisionBall_DEFINED
/** WBFunctor definition for VisionBall_WBFunctor_T */ 
template <typename VisionBall_WBFunctor_T >
class VisionBall_WBFunctor: public WBFunctor<VisionBall_WBFunctor_T > {
public:
    /** WBFunctor constructor for VisionBall_WBFunctor_T */
    VisionBall_WBFunctor(VisionBall_WBFunctor_T* obj, void (VisionBall_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::VisionBall &), guWhiteboard::WBTypes t): WBFunctor<VisionBall_WBFunctor_T >(obj, (void (VisionBall_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class VisionBall_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::VisionBall result = guWhiteboard::VisionBall_t().get_from(m);
        VisionBall_function_t funct((void (VisionBall_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::VisionBall &))WBFunctor<VisionBall_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<VisionBall_WBFunctor_T >::fObject->*funct)(WBFunctor<VisionBall_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (VisionBall_WBFunctor_T::*VisionBall_function_t) (guWhiteboard::WBTypes, guWhiteboard::VisionBall &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(VisionBall_WBFunctor_T *obj, void (VisionBall_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::VisionBall &), guWhiteboard::WBTypes t) { return new VisionBall_WBFunctor<VisionBall_WBFunctor_T >(obj, f, t); }
}; 
#endif //VisionBall_DEFINED

#ifdef VisionGoals_DEFINED
/** WBFunctor definition for VisionGoals_WBFunctor_T */ 
template <typename VisionGoals_WBFunctor_T >
class VisionGoals_WBFunctor: public WBFunctor<VisionGoals_WBFunctor_T > {
public:
    /** WBFunctor constructor for VisionGoals_WBFunctor_T */
    VisionGoals_WBFunctor(VisionGoals_WBFunctor_T* obj, void (VisionGoals_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::VisionGoals &), guWhiteboard::WBTypes t): WBFunctor<VisionGoals_WBFunctor_T >(obj, (void (VisionGoals_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class VisionGoals_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::VisionGoals result = guWhiteboard::VisionGoals_t().get_from(m);
        VisionGoals_function_t funct((void (VisionGoals_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::VisionGoals &))WBFunctor<VisionGoals_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<VisionGoals_WBFunctor_T >::fObject->*funct)(WBFunctor<VisionGoals_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (VisionGoals_WBFunctor_T::*VisionGoals_function_t) (guWhiteboard::WBTypes, guWhiteboard::VisionGoals &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(VisionGoals_WBFunctor_T *obj, void (VisionGoals_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::VisionGoals &), guWhiteboard::WBTypes t) { return new VisionGoals_WBFunctor<VisionGoals_WBFunctor_T >(obj, f, t); }
}; 
#endif //VisionGoals_DEFINED

#ifdef WalkData_DEFINED
/** WBFunctor definition for WalkData_WBFunctor_T */ 
template <typename WalkData_WBFunctor_T >
class WalkData_WBFunctor: public WBFunctor<WalkData_WBFunctor_T > {
public:
    /** WBFunctor constructor for WalkData_WBFunctor_T */
    WalkData_WBFunctor(WalkData_WBFunctor_T* obj, void (WalkData_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::WalkData &), guWhiteboard::WBTypes t): WBFunctor<WalkData_WBFunctor_T >(obj, (void (WalkData_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class WalkData_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::WalkData result = guWhiteboard::WalkData_t().get_from(m);
        WalkData_function_t funct((void (WalkData_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::WalkData &))WBFunctor<WalkData_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<WalkData_WBFunctor_T >::fObject->*funct)(WBFunctor<WalkData_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (WalkData_WBFunctor_T::*WalkData_function_t) (guWhiteboard::WBTypes, guWhiteboard::WalkData &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(WalkData_WBFunctor_T *obj, void (WalkData_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::WalkData &), guWhiteboard::WBTypes t) { return new WalkData_WBFunctor<WalkData_WBFunctor_T >(obj, f, t); }
}; 
#endif //WalkData_DEFINED

#ifdef TeleoperationControlStatus_DEFINED
/** WBFunctor definition for TeleoperationControlStatus_WBFunctor_T */ 
template <typename TeleoperationControlStatus_WBFunctor_T >
class TeleoperationControlStatus_WBFunctor: public WBFunctor<TeleoperationControlStatus_WBFunctor_T > {
public:
    /** WBFunctor constructor for TeleoperationControlStatus_WBFunctor_T */
    TeleoperationControlStatus_WBFunctor(TeleoperationControlStatus_WBFunctor_T* obj, void (TeleoperationControlStatus_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::TeleoperationControlStatus &), guWhiteboard::WBTypes t): WBFunctor<TeleoperationControlStatus_WBFunctor_T >(obj, (void (TeleoperationControlStatus_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class TeleoperationControlStatus_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::TeleoperationControlStatus result = guWhiteboard::TeleoperationControlStatus_t().get_from(m);
        TeleoperationControlStatus_function_t funct((void (TeleoperationControlStatus_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::TeleoperationControlStatus &))WBFunctor<TeleoperationControlStatus_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<TeleoperationControlStatus_WBFunctor_T >::fObject->*funct)(WBFunctor<TeleoperationControlStatus_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (TeleoperationControlStatus_WBFunctor_T::*TeleoperationControlStatus_function_t) (guWhiteboard::WBTypes, guWhiteboard::TeleoperationControlStatus &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(TeleoperationControlStatus_WBFunctor_T *obj, void (TeleoperationControlStatus_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::TeleoperationControlStatus &), guWhiteboard::WBTypes t) { return new TeleoperationControlStatus_WBFunctor<TeleoperationControlStatus_WBFunctor_T >(obj, f, t); }
}; 
#endif //TeleoperationControlStatus_DEFINED


/** WBFunctor definition for TeleoperationConnection_WBFunctor_T */ 
template <typename TeleoperationConnection_WBFunctor_T >
class TeleoperationConnection_WBFunctor: public WBFunctor<TeleoperationConnection_WBFunctor_T > {
public:
    /** WBFunctor constructor for TeleoperationConnection_WBFunctor_T */
    TeleoperationConnection_WBFunctor(TeleoperationConnection_WBFunctor_T* obj, void (TeleoperationConnection_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, int8_t &), guWhiteboard::WBTypes t): WBFunctor<TeleoperationConnection_WBFunctor_T >(obj, (void (TeleoperationConnection_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class TeleoperationConnection_WBFunctor */
    void call(gu_simple_message *m) {
        int8_t result = guWhiteboard::TeleoperationConnection_t().get_from(m);
        TeleoperationConnection_function_t funct((void (TeleoperationConnection_WBFunctor_T::*)(guWhiteboard::WBTypes, int8_t &))WBFunctor<TeleoperationConnection_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<TeleoperationConnection_WBFunctor_T >::fObject->*funct)(WBFunctor<TeleoperationConnection_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (TeleoperationConnection_WBFunctor_T::*TeleoperationConnection_function_t) (guWhiteboard::WBTypes, int8_t &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(TeleoperationConnection_WBFunctor_T *obj, void (TeleoperationConnection_WBFunctor_T::*f)(guWhiteboard::WBTypes, int8_t &), guWhiteboard::WBTypes t) { return new TeleoperationConnection_WBFunctor<TeleoperationConnection_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for UDPWBNumber_WBFunctor_T */ 
template <typename UDPWBNumber_WBFunctor_T >
class UDPWBNumber_WBFunctor: public WBFunctor<UDPWBNumber_WBFunctor_T > {
public:
    /** WBFunctor constructor for UDPWBNumber_WBFunctor_T */
    UDPWBNumber_WBFunctor(UDPWBNumber_WBFunctor_T* obj, void (UDPWBNumber_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, int8_t &), guWhiteboard::WBTypes t): WBFunctor<UDPWBNumber_WBFunctor_T >(obj, (void (UDPWBNumber_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class UDPWBNumber_WBFunctor */
    void call(gu_simple_message *m) {
        int8_t result = guWhiteboard::UDPWBNumber_t().get_from(m);
        UDPWBNumber_function_t funct((void (UDPWBNumber_WBFunctor_T::*)(guWhiteboard::WBTypes, int8_t &))WBFunctor<UDPWBNumber_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<UDPWBNumber_WBFunctor_T >::fObject->*funct)(WBFunctor<UDPWBNumber_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (UDPWBNumber_WBFunctor_T::*UDPWBNumber_function_t) (guWhiteboard::WBTypes, int8_t &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(UDPWBNumber_WBFunctor_T *obj, void (UDPWBNumber_WBFunctor_T::*f)(guWhiteboard::WBTypes, int8_t &), guWhiteboard::WBTypes t) { return new UDPWBNumber_WBFunctor<UDPWBNumber_WBFunctor_T >(obj, f, t); }
}; 


#ifdef WEBOTS_NXT_bumper_DEFINED
/** WBFunctor definition for WEBOTS_NXT_bumper_WBFunctor_T */ 
template <typename WEBOTS_NXT_bumper_WBFunctor_T >
class WEBOTS_NXT_bumper_WBFunctor: public WBFunctor<WEBOTS_NXT_bumper_WBFunctor_T > {
public:
    /** WBFunctor constructor for WEBOTS_NXT_bumper_WBFunctor_T */
    WEBOTS_NXT_bumper_WBFunctor(WEBOTS_NXT_bumper_WBFunctor_T* obj, void (WEBOTS_NXT_bumper_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_bumper &), guWhiteboard::WBTypes t): WBFunctor<WEBOTS_NXT_bumper_WBFunctor_T >(obj, (void (WEBOTS_NXT_bumper_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class WEBOTS_NXT_bumper_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::WEBOTS_NXT_bumper result = guWhiteboard::WEBOTS_NXT_bumper_t().get_from(m);
        WEBOTS_NXT_bumper_function_t funct((void (WEBOTS_NXT_bumper_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_bumper &))WBFunctor<WEBOTS_NXT_bumper_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<WEBOTS_NXT_bumper_WBFunctor_T >::fObject->*funct)(WBFunctor<WEBOTS_NXT_bumper_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (WEBOTS_NXT_bumper_WBFunctor_T::*WEBOTS_NXT_bumper_function_t) (guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_bumper &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(WEBOTS_NXT_bumper_WBFunctor_T *obj, void (WEBOTS_NXT_bumper_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_bumper &), guWhiteboard::WBTypes t) { return new WEBOTS_NXT_bumper_WBFunctor<WEBOTS_NXT_bumper_WBFunctor_T >(obj, f, t); }
}; 
#endif //WEBOTS_NXT_bumper_DEFINED

#ifdef WEBOTS_NXT_vector_bridge_DEFINED
/** WBFunctor definition for WEBOTS_NXT_vector_bridge_WBFunctor_T */ 
template <typename WEBOTS_NXT_vector_bridge_WBFunctor_T >
class WEBOTS_NXT_vector_bridge_WBFunctor: public WBFunctor<WEBOTS_NXT_vector_bridge_WBFunctor_T > {
public:
    /** WBFunctor constructor for WEBOTS_NXT_vector_bridge_WBFunctor_T */
    WEBOTS_NXT_vector_bridge_WBFunctor(WEBOTS_NXT_vector_bridge_WBFunctor_T* obj, void (WEBOTS_NXT_vector_bridge_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_vector_bridge &), guWhiteboard::WBTypes t): WBFunctor<WEBOTS_NXT_vector_bridge_WBFunctor_T >(obj, (void (WEBOTS_NXT_vector_bridge_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class WEBOTS_NXT_vector_bridge_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::WEBOTS_NXT_vector_bridge result = guWhiteboard::WEBOTS_NXT_vector_bridge_t().get_from(m);
        WEBOTS_NXT_vector_bridge_function_t funct((void (WEBOTS_NXT_vector_bridge_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_vector_bridge &))WBFunctor<WEBOTS_NXT_vector_bridge_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<WEBOTS_NXT_vector_bridge_WBFunctor_T >::fObject->*funct)(WBFunctor<WEBOTS_NXT_vector_bridge_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (WEBOTS_NXT_vector_bridge_WBFunctor_T::*WEBOTS_NXT_vector_bridge_function_t) (guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_vector_bridge &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(WEBOTS_NXT_vector_bridge_WBFunctor_T *obj, void (WEBOTS_NXT_vector_bridge_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::WEBOTS_NXT_vector_bridge &), guWhiteboard::WBTypes t) { return new WEBOTS_NXT_vector_bridge_WBFunctor<WEBOTS_NXT_vector_bridge_WBFunctor_T >(obj, f, t); }
}; 
#endif //WEBOTS_NXT_vector_bridge_DEFINED

#ifdef VisionLines_DEFINED
/** WBFunctor definition for TopVisionLines_WBFunctor_T */ 
template <typename TopVisionLines_WBFunctor_T >
class TopVisionLines_WBFunctor: public WBFunctor<TopVisionLines_WBFunctor_T > {
public:
    /** WBFunctor constructor for TopVisionLines_WBFunctor_T */
    TopVisionLines_WBFunctor(TopVisionLines_WBFunctor_T* obj, void (TopVisionLines_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::VisionLines &), guWhiteboard::WBTypes t): WBFunctor<TopVisionLines_WBFunctor_T >(obj, (void (TopVisionLines_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class TopVisionLines_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::VisionLines result = guWhiteboard::TopVisionLines_t().get_from(m);
        TopVisionLines_function_t funct((void (TopVisionLines_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::VisionLines &))WBFunctor<TopVisionLines_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<TopVisionLines_WBFunctor_T >::fObject->*funct)(WBFunctor<TopVisionLines_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (TopVisionLines_WBFunctor_T::*TopVisionLines_function_t) (guWhiteboard::WBTypes, guWhiteboard::VisionLines &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(TopVisionLines_WBFunctor_T *obj, void (TopVisionLines_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::VisionLines &), guWhiteboard::WBTypes t) { return new TopVisionLines_WBFunctor<TopVisionLines_WBFunctor_T >(obj, f, t); }
}; 
#endif //VisionLines_DEFINED

#ifdef VisionLines_DEFINED
/** WBFunctor definition for BottomVisionLines_WBFunctor_T */ 
template <typename BottomVisionLines_WBFunctor_T >
class BottomVisionLines_WBFunctor: public WBFunctor<BottomVisionLines_WBFunctor_T > {
public:
    /** WBFunctor constructor for BottomVisionLines_WBFunctor_T */
    BottomVisionLines_WBFunctor(BottomVisionLines_WBFunctor_T* obj, void (BottomVisionLines_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::VisionLines &), guWhiteboard::WBTypes t): WBFunctor<BottomVisionLines_WBFunctor_T >(obj, (void (BottomVisionLines_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class BottomVisionLines_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::VisionLines result = guWhiteboard::BottomVisionLines_t().get_from(m);
        BottomVisionLines_function_t funct((void (BottomVisionLines_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::VisionLines &))WBFunctor<BottomVisionLines_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<BottomVisionLines_WBFunctor_T >::fObject->*funct)(WBFunctor<BottomVisionLines_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (BottomVisionLines_WBFunctor_T::*BottomVisionLines_function_t) (guWhiteboard::WBTypes, guWhiteboard::VisionLines &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(BottomVisionLines_WBFunctor_T *obj, void (BottomVisionLines_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::VisionLines &), guWhiteboard::WBTypes t) { return new BottomVisionLines_WBFunctor<BottomVisionLines_WBFunctor_T >(obj, f, t); }
}; 
#endif //VisionLines_DEFINED

#ifdef DifferentialRobotControlStatus_DEFINED
/** WBFunctor definition for DifferentialRobotStatus_WBFunctor_T */ 
template <typename DifferentialRobotStatus_WBFunctor_T >
class DifferentialRobotStatus_WBFunctor: public WBFunctor<DifferentialRobotStatus_WBFunctor_T > {
public:
    /** WBFunctor constructor for DifferentialRobotStatus_WBFunctor_T */
    DifferentialRobotStatus_WBFunctor(DifferentialRobotStatus_WBFunctor_T* obj, void (DifferentialRobotStatus_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::DifferentialRobotControlStatus &), guWhiteboard::WBTypes t): WBFunctor<DifferentialRobotStatus_WBFunctor_T >(obj, (void (DifferentialRobotStatus_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class DifferentialRobotStatus_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::DifferentialRobotControlStatus result = guWhiteboard::DifferentialRobotStatus_t().get_from(m);
        DifferentialRobotStatus_function_t funct((void (DifferentialRobotStatus_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::DifferentialRobotControlStatus &))WBFunctor<DifferentialRobotStatus_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<DifferentialRobotStatus_WBFunctor_T >::fObject->*funct)(WBFunctor<DifferentialRobotStatus_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (DifferentialRobotStatus_WBFunctor_T::*DifferentialRobotStatus_function_t) (guWhiteboard::WBTypes, guWhiteboard::DifferentialRobotControlStatus &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(DifferentialRobotStatus_WBFunctor_T *obj, void (DifferentialRobotStatus_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::DifferentialRobotControlStatus &), guWhiteboard::WBTypes t) { return new DifferentialRobotStatus_WBFunctor<DifferentialRobotStatus_WBFunctor_T >(obj, f, t); }
}; 
#endif //DifferentialRobotControlStatus_DEFINED

#ifdef DifferentialRobotControlStatus_DEFINED
/** WBFunctor definition for DifferentialRobotControl_WBFunctor_T */ 
template <typename DifferentialRobotControl_WBFunctor_T >
class DifferentialRobotControl_WBFunctor: public WBFunctor<DifferentialRobotControl_WBFunctor_T > {
public:
    /** WBFunctor constructor for DifferentialRobotControl_WBFunctor_T */
    DifferentialRobotControl_WBFunctor(DifferentialRobotControl_WBFunctor_T* obj, void (DifferentialRobotControl_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::DifferentialRobotControlStatus &), guWhiteboard::WBTypes t): WBFunctor<DifferentialRobotControl_WBFunctor_T >(obj, (void (DifferentialRobotControl_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class DifferentialRobotControl_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::DifferentialRobotControlStatus result = guWhiteboard::DifferentialRobotControl_t().get_from(m);
        DifferentialRobotControl_function_t funct((void (DifferentialRobotControl_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::DifferentialRobotControlStatus &))WBFunctor<DifferentialRobotControl_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<DifferentialRobotControl_WBFunctor_T >::fObject->*funct)(WBFunctor<DifferentialRobotControl_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (DifferentialRobotControl_WBFunctor_T::*DifferentialRobotControl_function_t) (guWhiteboard::WBTypes, guWhiteboard::DifferentialRobotControlStatus &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(DifferentialRobotControl_WBFunctor_T *obj, void (DifferentialRobotControl_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::DifferentialRobotControlStatus &), guWhiteboard::WBTypes t) { return new DifferentialRobotControl_WBFunctor<DifferentialRobotControl_WBFunctor_T >(obj, f, t); }
}; 
#endif //DifferentialRobotControlStatus_DEFINED

#ifdef Point2D_DEFINED
/** WBFunctor definition for XEyesPos_WBFunctor_T */ 
template <typename XEyesPos_WBFunctor_T >
class XEyesPos_WBFunctor: public WBFunctor<XEyesPos_WBFunctor_T > {
public:
    /** WBFunctor constructor for XEyesPos_WBFunctor_T */
    XEyesPos_WBFunctor(XEyesPos_WBFunctor_T* obj, void (XEyesPos_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::Point2D &), guWhiteboard::WBTypes t): WBFunctor<XEyesPos_WBFunctor_T >(obj, (void (XEyesPos_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class XEyesPos_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::Point2D result = guWhiteboard::XEyesPos_t().get_from(m);
        XEyesPos_function_t funct((void (XEyesPos_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::Point2D &))WBFunctor<XEyesPos_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<XEyesPos_WBFunctor_T >::fObject->*funct)(WBFunctor<XEyesPos_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (XEyesPos_WBFunctor_T::*XEyesPos_function_t) (guWhiteboard::WBTypes, guWhiteboard::Point2D &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(XEyesPos_WBFunctor_T *obj, void (XEyesPos_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::Point2D &), guWhiteboard::WBTypes t) { return new XEyesPos_WBFunctor<XEyesPos_WBFunctor_T >(obj, f, t); }
}; 
#endif //Point2D_DEFINED


/** WBFunctor definition for VisionFace_WBFunctor_T */ 
template <typename VisionFace_WBFunctor_T >
class VisionFace_WBFunctor: public WBFunctor<VisionFace_WBFunctor_T > {
public:
    /** WBFunctor constructor for VisionFace_WBFunctor_T */
    VisionFace_WBFunctor(VisionFace_WBFunctor_T* obj, void (VisionFace_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, std::vector<int> &), guWhiteboard::WBTypes t): WBFunctor<VisionFace_WBFunctor_T >(obj, (void (VisionFace_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class VisionFace_WBFunctor */
    void call(gu_simple_message *m) {
        std::vector<int> result = guWhiteboard::VisionFace_t().get_from(m);
        VisionFace_function_t funct((void (VisionFace_WBFunctor_T::*)(guWhiteboard::WBTypes, std::vector<int> &))WBFunctor<VisionFace_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<VisionFace_WBFunctor_T >::fObject->*funct)(WBFunctor<VisionFace_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (VisionFace_WBFunctor_T::*VisionFace_function_t) (guWhiteboard::WBTypes, std::vector<int> &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(VisionFace_WBFunctor_T *obj, void (VisionFace_WBFunctor_T::*f)(guWhiteboard::WBTypes, std::vector<int> &), guWhiteboard::WBTypes t) { return new VisionFace_WBFunctor<VisionFace_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Draw_WBFunctor_T */ 
template <typename Draw_WBFunctor_T >
class Draw_WBFunctor: public WBFunctor<Draw_WBFunctor_T > {
public:
    /** WBFunctor constructor for Draw_WBFunctor_T */
    Draw_WBFunctor(Draw_WBFunctor_T* obj, void (Draw_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, std::string &), guWhiteboard::WBTypes t): WBFunctor<Draw_WBFunctor_T >(obj, (void (Draw_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Draw_WBFunctor */
    void call(gu_simple_message *m) {
        std::string result = guWhiteboard::Draw_t().get_from(m);
        Draw_function_t funct((void (Draw_WBFunctor_T::*)(guWhiteboard::WBTypes, std::string &))WBFunctor<Draw_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Draw_WBFunctor_T >::fObject->*funct)(WBFunctor<Draw_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Draw_WBFunctor_T::*Draw_function_t) (guWhiteboard::WBTypes, std::string &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Draw_WBFunctor_T *obj, void (Draw_WBFunctor_T::*f)(guWhiteboard::WBTypes, std::string &), guWhiteboard::WBTypes t) { return new Draw_WBFunctor<Draw_WBFunctor_T >(obj, f, t); }
}; 


#ifdef FSMState_DEFINED
/** WBFunctor definition for FSM_States_WBFunctor_T */ 
template <typename FSM_States_WBFunctor_T >
class FSM_States_WBFunctor: public WBFunctor<FSM_States_WBFunctor_T > {
public:
    /** WBFunctor constructor for FSM_States_WBFunctor_T */
    FSM_States_WBFunctor(FSM_States_WBFunctor_T* obj, void (FSM_States_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::FSMState &), guWhiteboard::WBTypes t): WBFunctor<FSM_States_WBFunctor_T >(obj, (void (FSM_States_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class FSM_States_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::FSMState result = guWhiteboard::FSM_States_t().get_from(m);
        FSM_States_function_t funct((void (FSM_States_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::FSMState &))WBFunctor<FSM_States_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<FSM_States_WBFunctor_T >::fObject->*funct)(WBFunctor<FSM_States_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (FSM_States_WBFunctor_T::*FSM_States_function_t) (guWhiteboard::WBTypes, guWhiteboard::FSMState &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(FSM_States_WBFunctor_T *obj, void (FSM_States_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::FSMState &), guWhiteboard::WBTypes t) { return new FSM_States_WBFunctor<FSM_States_WBFunctor_T >(obj, f, t); }
}; 
#endif //FSMState_DEFINED

#ifdef Giraff_MainSerialInterface_DEFINED
/** WBFunctor definition for Giraff_Interface_Status_WBFunctor_T */ 
template <typename Giraff_Interface_Status_WBFunctor_T >
class Giraff_Interface_Status_WBFunctor: public WBFunctor<Giraff_Interface_Status_WBFunctor_T > {
public:
    /** WBFunctor constructor for Giraff_Interface_Status_WBFunctor_T */
    Giraff_Interface_Status_WBFunctor(Giraff_Interface_Status_WBFunctor_T* obj, void (Giraff_Interface_Status_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::Giraff_MainSerialInterface &), guWhiteboard::WBTypes t): WBFunctor<Giraff_Interface_Status_WBFunctor_T >(obj, (void (Giraff_Interface_Status_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Giraff_Interface_Status_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::Giraff_MainSerialInterface result = guWhiteboard::Giraff_Interface_Status_t().get_from(m);
        Giraff_Interface_Status_function_t funct((void (Giraff_Interface_Status_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::Giraff_MainSerialInterface &))WBFunctor<Giraff_Interface_Status_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Giraff_Interface_Status_WBFunctor_T >::fObject->*funct)(WBFunctor<Giraff_Interface_Status_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Giraff_Interface_Status_WBFunctor_T::*Giraff_Interface_Status_function_t) (guWhiteboard::WBTypes, guWhiteboard::Giraff_MainSerialInterface &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Giraff_Interface_Status_WBFunctor_T *obj, void (Giraff_Interface_Status_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::Giraff_MainSerialInterface &), guWhiteboard::WBTypes t) { return new Giraff_Interface_Status_WBFunctor<Giraff_Interface_Status_WBFunctor_T >(obj, f, t); }
}; 
#endif //Giraff_MainSerialInterface_DEFINED

#ifdef Giraff_MainSerialInterface_DEFINED
/** WBFunctor definition for Giraff_Interface_Command_WBFunctor_T */ 
template <typename Giraff_Interface_Command_WBFunctor_T >
class Giraff_Interface_Command_WBFunctor: public WBFunctor<Giraff_Interface_Command_WBFunctor_T > {
public:
    /** WBFunctor constructor for Giraff_Interface_Command_WBFunctor_T */
    Giraff_Interface_Command_WBFunctor(Giraff_Interface_Command_WBFunctor_T* obj, void (Giraff_Interface_Command_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::Giraff_MainSerialInterface &), guWhiteboard::WBTypes t): WBFunctor<Giraff_Interface_Command_WBFunctor_T >(obj, (void (Giraff_Interface_Command_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Giraff_Interface_Command_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::Giraff_MainSerialInterface result = guWhiteboard::Giraff_Interface_Command_t().get_from(m);
        Giraff_Interface_Command_function_t funct((void (Giraff_Interface_Command_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::Giraff_MainSerialInterface &))WBFunctor<Giraff_Interface_Command_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Giraff_Interface_Command_WBFunctor_T >::fObject->*funct)(WBFunctor<Giraff_Interface_Command_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Giraff_Interface_Command_WBFunctor_T::*Giraff_Interface_Command_function_t) (guWhiteboard::WBTypes, guWhiteboard::Giraff_MainSerialInterface &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Giraff_Interface_Command_WBFunctor_T *obj, void (Giraff_Interface_Command_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::Giraff_MainSerialInterface &), guWhiteboard::WBTypes t) { return new Giraff_Interface_Command_WBFunctor<Giraff_Interface_Command_WBFunctor_T >(obj, f, t); }
}; 
#endif //Giraff_MainSerialInterface_DEFINED

#ifdef NXT_Interface_DEFINED
/** WBFunctor definition for NXT_Status_WBFunctor_T */ 
template <typename NXT_Status_WBFunctor_T >
class NXT_Status_WBFunctor: public WBFunctor<NXT_Status_WBFunctor_T > {
public:
    /** WBFunctor constructor for NXT_Status_WBFunctor_T */
    NXT_Status_WBFunctor(NXT_Status_WBFunctor_T* obj, void (NXT_Status_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::NXT_Interface &), guWhiteboard::WBTypes t): WBFunctor<NXT_Status_WBFunctor_T >(obj, (void (NXT_Status_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class NXT_Status_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::NXT_Interface result = guWhiteboard::NXT_Status_t().get_from(m);
        NXT_Status_function_t funct((void (NXT_Status_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::NXT_Interface &))WBFunctor<NXT_Status_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<NXT_Status_WBFunctor_T >::fObject->*funct)(WBFunctor<NXT_Status_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (NXT_Status_WBFunctor_T::*NXT_Status_function_t) (guWhiteboard::WBTypes, guWhiteboard::NXT_Interface &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(NXT_Status_WBFunctor_T *obj, void (NXT_Status_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::NXT_Interface &), guWhiteboard::WBTypes t) { return new NXT_Status_WBFunctor<NXT_Status_WBFunctor_T >(obj, f, t); }
}; 
#endif //NXT_Interface_DEFINED

#ifdef NXT_Interface_DEFINED
/** WBFunctor definition for NXT_Command_WBFunctor_T */ 
template <typename NXT_Command_WBFunctor_T >
class NXT_Command_WBFunctor: public WBFunctor<NXT_Command_WBFunctor_T > {
public:
    /** WBFunctor constructor for NXT_Command_WBFunctor_T */
    NXT_Command_WBFunctor(NXT_Command_WBFunctor_T* obj, void (NXT_Command_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::NXT_Interface &), guWhiteboard::WBTypes t): WBFunctor<NXT_Command_WBFunctor_T >(obj, (void (NXT_Command_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class NXT_Command_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::NXT_Interface result = guWhiteboard::NXT_Command_t().get_from(m);
        NXT_Command_function_t funct((void (NXT_Command_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::NXT_Interface &))WBFunctor<NXT_Command_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<NXT_Command_WBFunctor_T >::fObject->*funct)(WBFunctor<NXT_Command_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (NXT_Command_WBFunctor_T::*NXT_Command_function_t) (guWhiteboard::WBTypes, guWhiteboard::NXT_Interface &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(NXT_Command_WBFunctor_T *obj, void (NXT_Command_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::NXT_Interface &), guWhiteboard::WBTypes t) { return new NXT_Command_WBFunctor<NXT_Command_WBFunctor_T >(obj, f, t); }
}; 
#endif //NXT_Interface_DEFINED

#ifdef APM_Interface_DEFINED
/** WBFunctor definition for APM_Status_WBFunctor_T */ 
template <typename APM_Status_WBFunctor_T >
class APM_Status_WBFunctor: public WBFunctor<APM_Status_WBFunctor_T > {
public:
    /** WBFunctor constructor for APM_Status_WBFunctor_T */
    APM_Status_WBFunctor(APM_Status_WBFunctor_T* obj, void (APM_Status_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::APM_Interface &), guWhiteboard::WBTypes t): WBFunctor<APM_Status_WBFunctor_T >(obj, (void (APM_Status_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class APM_Status_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::APM_Interface result = guWhiteboard::APM_Status_t().get_from(m);
        APM_Status_function_t funct((void (APM_Status_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::APM_Interface &))WBFunctor<APM_Status_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<APM_Status_WBFunctor_T >::fObject->*funct)(WBFunctor<APM_Status_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (APM_Status_WBFunctor_T::*APM_Status_function_t) (guWhiteboard::WBTypes, guWhiteboard::APM_Interface &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(APM_Status_WBFunctor_T *obj, void (APM_Status_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::APM_Interface &), guWhiteboard::WBTypes t) { return new APM_Status_WBFunctor<APM_Status_WBFunctor_T >(obj, f, t); }
}; 
#endif //APM_Interface_DEFINED

#ifdef APM_Interface_DEFINED
/** WBFunctor definition for APM_Command_WBFunctor_T */ 
template <typename APM_Command_WBFunctor_T >
class APM_Command_WBFunctor: public WBFunctor<APM_Command_WBFunctor_T > {
public:
    /** WBFunctor constructor for APM_Command_WBFunctor_T */
    APM_Command_WBFunctor(APM_Command_WBFunctor_T* obj, void (APM_Command_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::APM_Interface &), guWhiteboard::WBTypes t): WBFunctor<APM_Command_WBFunctor_T >(obj, (void (APM_Command_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class APM_Command_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::APM_Interface result = guWhiteboard::APM_Command_t().get_from(m);
        APM_Command_function_t funct((void (APM_Command_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::APM_Interface &))WBFunctor<APM_Command_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<APM_Command_WBFunctor_T >::fObject->*funct)(WBFunctor<APM_Command_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (APM_Command_WBFunctor_T::*APM_Command_function_t) (guWhiteboard::WBTypes, guWhiteboard::APM_Interface &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(APM_Command_WBFunctor_T *obj, void (APM_Command_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::APM_Interface &), guWhiteboard::WBTypes t) { return new APM_Command_WBFunctor<APM_Command_WBFunctor_T >(obj, f, t); }
}; 
#endif //APM_Interface_DEFINED


/** WBFunctor definition for REMOVED3_WBFunctor_T */ 
template <typename REMOVED3_WBFunctor_T >
class REMOVED3_WBFunctor: public WBFunctor<REMOVED3_WBFunctor_T > {
public:
    /** WBFunctor constructor for REMOVED3_WBFunctor_T */
    REMOVED3_WBFunctor(REMOVED3_WBFunctor_T* obj, void (REMOVED3_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<REMOVED3_WBFunctor_T >(obj, (void (REMOVED3_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class REMOVED3_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::REMOVED3_t().get_from(m);
        REMOVED3_function_t funct((void (REMOVED3_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<REMOVED3_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<REMOVED3_WBFunctor_T >::fObject->*funct)(WBFunctor<REMOVED3_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (REMOVED3_WBFunctor_T::*REMOVED3_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(REMOVED3_WBFunctor_T *obj, void (REMOVED3_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new REMOVED3_WBFunctor<REMOVED3_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for REMOVED4_WBFunctor_T */ 
template <typename REMOVED4_WBFunctor_T >
class REMOVED4_WBFunctor: public WBFunctor<REMOVED4_WBFunctor_T > {
public:
    /** WBFunctor constructor for REMOVED4_WBFunctor_T */
    REMOVED4_WBFunctor(REMOVED4_WBFunctor_T* obj, void (REMOVED4_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<REMOVED4_WBFunctor_T >(obj, (void (REMOVED4_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class REMOVED4_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::REMOVED4_t().get_from(m);
        REMOVED4_function_t funct((void (REMOVED4_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<REMOVED4_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<REMOVED4_WBFunctor_T >::fObject->*funct)(WBFunctor<REMOVED4_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (REMOVED4_WBFunctor_T::*REMOVED4_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(REMOVED4_WBFunctor_T *obj, void (REMOVED4_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new REMOVED4_WBFunctor<REMOVED4_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for CBall_WBFunctor_T */ 
template <typename CBall_WBFunctor_T >
class CBall_WBFunctor: public WBFunctor<CBall_WBFunctor_T > {
public:
    /** WBFunctor constructor for CBall_WBFunctor_T */
    CBall_WBFunctor(CBall_WBFunctor_T* obj, void (CBall_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, int8_t &), guWhiteboard::WBTypes t): WBFunctor<CBall_WBFunctor_T >(obj, (void (CBall_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class CBall_WBFunctor */
    void call(gu_simple_message *m) {
        int8_t result = guWhiteboard::CBall_t().get_from(m);
        CBall_function_t funct((void (CBall_WBFunctor_T::*)(guWhiteboard::WBTypes, int8_t &))WBFunctor<CBall_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<CBall_WBFunctor_T >::fObject->*funct)(WBFunctor<CBall_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (CBall_WBFunctor_T::*CBall_function_t) (guWhiteboard::WBTypes, int8_t &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(CBall_WBFunctor_T *obj, void (CBall_WBFunctor_T::*f)(guWhiteboard::WBTypes, int8_t &), guWhiteboard::WBTypes t) { return new CBall_WBFunctor<CBall_WBFunctor_T >(obj, f, t); }
}; 


#ifdef OculusPrimeInterface_DEFINED
/** WBFunctor definition for OculusPrime_Command_WBFunctor_T */ 
template <typename OculusPrime_Command_WBFunctor_T >
class OculusPrime_Command_WBFunctor: public WBFunctor<OculusPrime_Command_WBFunctor_T > {
public:
    /** WBFunctor constructor for OculusPrime_Command_WBFunctor_T */
    OculusPrime_Command_WBFunctor(OculusPrime_Command_WBFunctor_T* obj, void (OculusPrime_Command_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::OculusPrimeInterface &), guWhiteboard::WBTypes t): WBFunctor<OculusPrime_Command_WBFunctor_T >(obj, (void (OculusPrime_Command_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class OculusPrime_Command_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::OculusPrimeInterface result = guWhiteboard::OculusPrime_Command_t().get_from(m);
        OculusPrime_Command_function_t funct((void (OculusPrime_Command_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::OculusPrimeInterface &))WBFunctor<OculusPrime_Command_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<OculusPrime_Command_WBFunctor_T >::fObject->*funct)(WBFunctor<OculusPrime_Command_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (OculusPrime_Command_WBFunctor_T::*OculusPrime_Command_function_t) (guWhiteboard::WBTypes, guWhiteboard::OculusPrimeInterface &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(OculusPrime_Command_WBFunctor_T *obj, void (OculusPrime_Command_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::OculusPrimeInterface &), guWhiteboard::WBTypes t) { return new OculusPrime_Command_WBFunctor<OculusPrime_Command_WBFunctor_T >(obj, f, t); }
}; 
#endif //OculusPrimeInterface_DEFINED

#ifdef Input3D_DEFINED
/** WBFunctor definition for Input3D_WBFunctor_T */ 
template <typename Input3D_WBFunctor_T >
class Input3D_WBFunctor: public WBFunctor<Input3D_WBFunctor_T > {
public:
    /** WBFunctor constructor for Input3D_WBFunctor_T */
    Input3D_WBFunctor(Input3D_WBFunctor_T* obj, void (Input3D_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::Input3D &), guWhiteboard::WBTypes t): WBFunctor<Input3D_WBFunctor_T >(obj, (void (Input3D_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Input3D_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::Input3D result = guWhiteboard::Input3D_t().get_from(m);
        Input3D_function_t funct((void (Input3D_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::Input3D &))WBFunctor<Input3D_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Input3D_WBFunctor_T >::fObject->*funct)(WBFunctor<Input3D_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Input3D_WBFunctor_T::*Input3D_function_t) (guWhiteboard::WBTypes, guWhiteboard::Input3D &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Input3D_WBFunctor_T *obj, void (Input3D_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::Input3D &), guWhiteboard::WBTypes t) { return new Input3D_WBFunctor<Input3D_WBFunctor_T >(obj, f, t); }
}; 
#endif //Input3D_DEFINED

#ifdef Oculus_PrimeSerialInterface_DEFINED
/** WBFunctor definition for Oculus_Prime_Command_WBFunctor_T */ 
template <typename Oculus_Prime_Command_WBFunctor_T >
class Oculus_Prime_Command_WBFunctor: public WBFunctor<Oculus_Prime_Command_WBFunctor_T > {
public:
    /** WBFunctor constructor for Oculus_Prime_Command_WBFunctor_T */
    Oculus_Prime_Command_WBFunctor(Oculus_Prime_Command_WBFunctor_T* obj, void (Oculus_Prime_Command_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::Oculus_PrimeSerialInterface &), guWhiteboard::WBTypes t): WBFunctor<Oculus_Prime_Command_WBFunctor_T >(obj, (void (Oculus_Prime_Command_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Oculus_Prime_Command_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::Oculus_PrimeSerialInterface result = guWhiteboard::Oculus_Prime_Command_t().get_from(m);
        Oculus_Prime_Command_function_t funct((void (Oculus_Prime_Command_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::Oculus_PrimeSerialInterface &))WBFunctor<Oculus_Prime_Command_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Oculus_Prime_Command_WBFunctor_T >::fObject->*funct)(WBFunctor<Oculus_Prime_Command_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Oculus_Prime_Command_WBFunctor_T::*Oculus_Prime_Command_function_t) (guWhiteboard::WBTypes, guWhiteboard::Oculus_PrimeSerialInterface &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Oculus_Prime_Command_WBFunctor_T *obj, void (Oculus_Prime_Command_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::Oculus_PrimeSerialInterface &), guWhiteboard::WBTypes t) { return new Oculus_Prime_Command_WBFunctor<Oculus_Prime_Command_WBFunctor_T >(obj, f, t); }
}; 
#endif //Oculus_PrimeSerialInterface_DEFINED

#ifdef IOPins_DEFINED
/** WBFunctor definition for IOPins_WBFunctor_T */ 
template <typename IOPins_WBFunctor_T >
class IOPins_WBFunctor: public WBFunctor<IOPins_WBFunctor_T > {
public:
    /** WBFunctor constructor for IOPins_WBFunctor_T */
    IOPins_WBFunctor(IOPins_WBFunctor_T* obj, void (IOPins_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::IOPins &), guWhiteboard::WBTypes t): WBFunctor<IOPins_WBFunctor_T >(obj, (void (IOPins_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class IOPins_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::IOPins result = guWhiteboard::IOPins_t().get_from(m);
        IOPins_function_t funct((void (IOPins_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::IOPins &))WBFunctor<IOPins_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<IOPins_WBFunctor_T >::fObject->*funct)(WBFunctor<IOPins_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (IOPins_WBFunctor_T::*IOPins_function_t) (guWhiteboard::WBTypes, guWhiteboard::IOPins &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(IOPins_WBFunctor_T *obj, void (IOPins_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::IOPins &), guWhiteboard::WBTypes t) { return new IOPins_WBFunctor<IOPins_WBFunctor_T >(obj, f, t); }
}; 
#endif //IOPins_DEFINED

#ifdef NXT_Two_Touch_Status_DEFINED
/** WBFunctor definition for NXT_Two_Touch_Status_WBFunctor_T */ 
template <typename NXT_Two_Touch_Status_WBFunctor_T >
class NXT_Two_Touch_Status_WBFunctor: public WBFunctor<NXT_Two_Touch_Status_WBFunctor_T > {
public:
    /** WBFunctor constructor for NXT_Two_Touch_Status_WBFunctor_T */
    NXT_Two_Touch_Status_WBFunctor(NXT_Two_Touch_Status_WBFunctor_T* obj, void (NXT_Two_Touch_Status_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::NXT_Two_Touch_Status &), guWhiteboard::WBTypes t): WBFunctor<NXT_Two_Touch_Status_WBFunctor_T >(obj, (void (NXT_Two_Touch_Status_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class NXT_Two_Touch_Status_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::NXT_Two_Touch_Status result = guWhiteboard::NXT_Two_Touch_Status_t().get_from(m);
        NXT_Two_Touch_Status_function_t funct((void (NXT_Two_Touch_Status_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::NXT_Two_Touch_Status &))WBFunctor<NXT_Two_Touch_Status_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<NXT_Two_Touch_Status_WBFunctor_T >::fObject->*funct)(WBFunctor<NXT_Two_Touch_Status_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (NXT_Two_Touch_Status_WBFunctor_T::*NXT_Two_Touch_Status_function_t) (guWhiteboard::WBTypes, guWhiteboard::NXT_Two_Touch_Status &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(NXT_Two_Touch_Status_WBFunctor_T *obj, void (NXT_Two_Touch_Status_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::NXT_Two_Touch_Status &), guWhiteboard::WBTypes t) { return new NXT_Two_Touch_Status_WBFunctor<NXT_Two_Touch_Status_WBFunctor_T >(obj, f, t); }
}; 
#endif //NXT_Two_Touch_Status_DEFINED

#ifdef NXT_Sound_Control_DEFINED
/** WBFunctor definition for NXT_Sound_Control_WBFunctor_T */ 
template <typename NXT_Sound_Control_WBFunctor_T >
class NXT_Sound_Control_WBFunctor: public WBFunctor<NXT_Sound_Control_WBFunctor_T > {
public:
    /** WBFunctor constructor for NXT_Sound_Control_WBFunctor_T */
    NXT_Sound_Control_WBFunctor(NXT_Sound_Control_WBFunctor_T* obj, void (NXT_Sound_Control_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::NXT_Sound_Control &), guWhiteboard::WBTypes t): WBFunctor<NXT_Sound_Control_WBFunctor_T >(obj, (void (NXT_Sound_Control_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class NXT_Sound_Control_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::NXT_Sound_Control result = guWhiteboard::NXT_Sound_Control_t().get_from(m);
        NXT_Sound_Control_function_t funct((void (NXT_Sound_Control_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::NXT_Sound_Control &))WBFunctor<NXT_Sound_Control_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<NXT_Sound_Control_WBFunctor_T >::fObject->*funct)(WBFunctor<NXT_Sound_Control_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (NXT_Sound_Control_WBFunctor_T::*NXT_Sound_Control_function_t) (guWhiteboard::WBTypes, guWhiteboard::NXT_Sound_Control &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(NXT_Sound_Control_WBFunctor_T *obj, void (NXT_Sound_Control_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::NXT_Sound_Control &), guWhiteboard::WBTypes t) { return new NXT_Sound_Control_WBFunctor<NXT_Sound_Control_WBFunctor_T >(obj, f, t); }
}; 
#endif //NXT_Sound_Control_DEFINED

#ifdef NXT_Lights_Control_DEFINED
/** WBFunctor definition for NXT_Lights_Control_WBFunctor_T */ 
template <typename NXT_Lights_Control_WBFunctor_T >
class NXT_Lights_Control_WBFunctor: public WBFunctor<NXT_Lights_Control_WBFunctor_T > {
public:
    /** WBFunctor constructor for NXT_Lights_Control_WBFunctor_T */
    NXT_Lights_Control_WBFunctor(NXT_Lights_Control_WBFunctor_T* obj, void (NXT_Lights_Control_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::NXT_Lights_Control &), guWhiteboard::WBTypes t): WBFunctor<NXT_Lights_Control_WBFunctor_T >(obj, (void (NXT_Lights_Control_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class NXT_Lights_Control_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::NXT_Lights_Control result = guWhiteboard::NXT_Lights_Control_t().get_from(m);
        NXT_Lights_Control_function_t funct((void (NXT_Lights_Control_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::NXT_Lights_Control &))WBFunctor<NXT_Lights_Control_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<NXT_Lights_Control_WBFunctor_T >::fObject->*funct)(WBFunctor<NXT_Lights_Control_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (NXT_Lights_Control_WBFunctor_T::*NXT_Lights_Control_function_t) (guWhiteboard::WBTypes, guWhiteboard::NXT_Lights_Control &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(NXT_Lights_Control_WBFunctor_T *obj, void (NXT_Lights_Control_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::NXT_Lights_Control &), guWhiteboard::WBTypes t) { return new NXT_Lights_Control_WBFunctor<NXT_Lights_Control_WBFunctor_T >(obj, f, t); }
}; 
#endif //NXT_Lights_Control_DEFINED

#ifdef Clocks_DEFINED
/** WBFunctor definition for Clocks_WBFunctor_T */ 
template <typename Clocks_WBFunctor_T >
class Clocks_WBFunctor: public WBFunctor<Clocks_WBFunctor_T > {
public:
    /** WBFunctor constructor for Clocks_WBFunctor_T */
    Clocks_WBFunctor(Clocks_WBFunctor_T* obj, void (Clocks_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::Clocks &), guWhiteboard::WBTypes t): WBFunctor<Clocks_WBFunctor_T >(obj, (void (Clocks_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Clocks_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::Clocks result = guWhiteboard::Clocks_t().get_from(m);
        Clocks_function_t funct((void (Clocks_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::Clocks &))WBFunctor<Clocks_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Clocks_WBFunctor_T >::fObject->*funct)(WBFunctor<Clocks_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Clocks_WBFunctor_T::*Clocks_function_t) (guWhiteboard::WBTypes, guWhiteboard::Clocks &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Clocks_WBFunctor_T *obj, void (Clocks_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::Clocks &), guWhiteboard::WBTypes t) { return new Clocks_WBFunctor<Clocks_WBFunctor_T >(obj, f, t); }
}; 
#endif //Clocks_DEFINED

#ifdef Channels_DEFINED
/** WBFunctor definition for Channels_WBFunctor_T */ 
template <typename Channels_WBFunctor_T >
class Channels_WBFunctor: public WBFunctor<Channels_WBFunctor_T > {
public:
    /** WBFunctor constructor for Channels_WBFunctor_T */
    Channels_WBFunctor(Channels_WBFunctor_T* obj, void (Channels_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::Channels &), guWhiteboard::WBTypes t): WBFunctor<Channels_WBFunctor_T >(obj, (void (Channels_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Channels_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::Channels result = guWhiteboard::Channels_t().get_from(m);
        Channels_function_t funct((void (Channels_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::Channels &))WBFunctor<Channels_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Channels_WBFunctor_T >::fObject->*funct)(WBFunctor<Channels_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Channels_WBFunctor_T::*Channels_function_t) (guWhiteboard::WBTypes, guWhiteboard::Channels &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Channels_WBFunctor_T *obj, void (Channels_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::Channels &), guWhiteboard::WBTypes t) { return new Channels_WBFunctor<Channels_WBFunctor_T >(obj, f, t); }
}; 
#endif //Channels_DEFINED

#ifdef SwitchSubsumption_DEFINED
/** WBFunctor definition for SwitchSubsumption_WBFunctor_T */ 
template <typename SwitchSubsumption_WBFunctor_T >
class SwitchSubsumption_WBFunctor: public WBFunctor<SwitchSubsumption_WBFunctor_T > {
public:
    /** WBFunctor constructor for SwitchSubsumption_WBFunctor_T */
    SwitchSubsumption_WBFunctor(SwitchSubsumption_WBFunctor_T* obj, void (SwitchSubsumption_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::SwitchSubsumption &), guWhiteboard::WBTypes t): WBFunctor<SwitchSubsumption_WBFunctor_T >(obj, (void (SwitchSubsumption_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class SwitchSubsumption_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::SwitchSubsumption result = guWhiteboard::SwitchSubsumption_t().get_from(m);
        SwitchSubsumption_function_t funct((void (SwitchSubsumption_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::SwitchSubsumption &))WBFunctor<SwitchSubsumption_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<SwitchSubsumption_WBFunctor_T >::fObject->*funct)(WBFunctor<SwitchSubsumption_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (SwitchSubsumption_WBFunctor_T::*SwitchSubsumption_function_t) (guWhiteboard::WBTypes, guWhiteboard::SwitchSubsumption &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(SwitchSubsumption_WBFunctor_T *obj, void (SwitchSubsumption_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::SwitchSubsumption &), guWhiteboard::WBTypes t) { return new SwitchSubsumption_WBFunctor<SwitchSubsumption_WBFunctor_T >(obj, f, t); }
}; 
#endif //SwitchSubsumption_DEFINED

#ifdef TotoDoingMotion_DEFINED
/** WBFunctor definition for TotoDoingMotion_WBFunctor_T */ 
template <typename TotoDoingMotion_WBFunctor_T >
class TotoDoingMotion_WBFunctor: public WBFunctor<TotoDoingMotion_WBFunctor_T > {
public:
    /** WBFunctor constructor for TotoDoingMotion_WBFunctor_T */
    TotoDoingMotion_WBFunctor(TotoDoingMotion_WBFunctor_T* obj, void (TotoDoingMotion_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::TotoDoingMotion &), guWhiteboard::WBTypes t): WBFunctor<TotoDoingMotion_WBFunctor_T >(obj, (void (TotoDoingMotion_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class TotoDoingMotion_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::TotoDoingMotion result = guWhiteboard::TotoDoingMotion_t().get_from(m);
        TotoDoingMotion_function_t funct((void (TotoDoingMotion_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::TotoDoingMotion &))WBFunctor<TotoDoingMotion_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<TotoDoingMotion_WBFunctor_T >::fObject->*funct)(WBFunctor<TotoDoingMotion_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (TotoDoingMotion_WBFunctor_T::*TotoDoingMotion_function_t) (guWhiteboard::WBTypes, guWhiteboard::TotoDoingMotion &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(TotoDoingMotion_WBFunctor_T *obj, void (TotoDoingMotion_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::TotoDoingMotion &), guWhiteboard::WBTypes t) { return new TotoDoingMotion_WBFunctor<TotoDoingMotion_WBFunctor_T >(obj, f, t); }
}; 
#endif //TotoDoingMotion_DEFINED

#ifdef Count_DEFINED
/** WBFunctor definition for Count_WBFunctor_T */ 
template <typename Count_WBFunctor_T >
class Count_WBFunctor: public WBFunctor<Count_WBFunctor_T > {
public:
    /** WBFunctor constructor for Count_WBFunctor_T */
    Count_WBFunctor(Count_WBFunctor_T* obj, void (Count_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::Count &), guWhiteboard::WBTypes t): WBFunctor<Count_WBFunctor_T >(obj, (void (Count_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Count_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::Count result = guWhiteboard::Count_t().get_from(m);
        Count_function_t funct((void (Count_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::Count &))WBFunctor<Count_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Count_WBFunctor_T >::fObject->*funct)(WBFunctor<Count_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Count_WBFunctor_T::*Count_function_t) (guWhiteboard::WBTypes, guWhiteboard::Count &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Count_WBFunctor_T *obj, void (Count_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::Count &), guWhiteboard::WBTypes t) { return new Count_WBFunctor<Count_WBFunctor_T >(obj, f, t); }
}; 
#endif //Count_DEFINED


/** WBFunctor definition for GreenEWon_WBFunctor_T */ 
template <typename GreenEWon_WBFunctor_T >
class GreenEWon_WBFunctor: public WBFunctor<GreenEWon_WBFunctor_T > {
public:
    /** WBFunctor constructor for GreenEWon_WBFunctor_T */
    GreenEWon_WBFunctor(GreenEWon_WBFunctor_T* obj, void (GreenEWon_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<GreenEWon_WBFunctor_T >(obj, (void (GreenEWon_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class GreenEWon_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::GreenEWon_t().get_from(m);
        GreenEWon_function_t funct((void (GreenEWon_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<GreenEWon_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<GreenEWon_WBFunctor_T >::fObject->*funct)(WBFunctor<GreenEWon_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (GreenEWon_WBFunctor_T::*GreenEWon_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(GreenEWon_WBFunctor_T *obj, void (GreenEWon_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new GreenEWon_WBFunctor<GreenEWon_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for WarnEW_WBFunctor_T */ 
template <typename WarnEW_WBFunctor_T >
class WarnEW_WBFunctor: public WBFunctor<WarnEW_WBFunctor_T > {
public:
    /** WBFunctor constructor for WarnEW_WBFunctor_T */
    WarnEW_WBFunctor(WarnEW_WBFunctor_T* obj, void (WarnEW_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<WarnEW_WBFunctor_T >(obj, (void (WarnEW_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class WarnEW_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::WarnEW_t().get_from(m);
        WarnEW_function_t funct((void (WarnEW_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<WarnEW_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<WarnEW_WBFunctor_T >::fObject->*funct)(WBFunctor<WarnEW_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (WarnEW_WBFunctor_T::*WarnEW_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(WarnEW_WBFunctor_T *obj, void (WarnEW_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new WarnEW_WBFunctor<WarnEW_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for TimeGTthirty_WBFunctor_T */ 
template <typename TimeGTthirty_WBFunctor_T >
class TimeGTthirty_WBFunctor: public WBFunctor<TimeGTthirty_WBFunctor_T > {
public:
    /** WBFunctor constructor for TimeGTthirty_WBFunctor_T */
    TimeGTthirty_WBFunctor(TimeGTthirty_WBFunctor_T* obj, void (TimeGTthirty_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<TimeGTthirty_WBFunctor_T >(obj, (void (TimeGTthirty_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class TimeGTthirty_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::TimeGTthirty_t().get_from(m);
        TimeGTthirty_function_t funct((void (TimeGTthirty_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<TimeGTthirty_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<TimeGTthirty_WBFunctor_T >::fObject->*funct)(WBFunctor<TimeGTthirty_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (TimeGTthirty_WBFunctor_T::*TimeGTthirty_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(TimeGTthirty_WBFunctor_T *obj, void (TimeGTthirty_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new TimeGTthirty_WBFunctor<TimeGTthirty_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for AmberEWon_WBFunctor_T */ 
template <typename AmberEWon_WBFunctor_T >
class AmberEWon_WBFunctor: public WBFunctor<AmberEWon_WBFunctor_T > {
public:
    /** WBFunctor constructor for AmberEWon_WBFunctor_T */
    AmberEWon_WBFunctor(AmberEWon_WBFunctor_T* obj, void (AmberEWon_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<AmberEWon_WBFunctor_T >(obj, (void (AmberEWon_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class AmberEWon_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::AmberEWon_t().get_from(m);
        AmberEWon_function_t funct((void (AmberEWon_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<AmberEWon_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<AmberEWon_WBFunctor_T >::fObject->*funct)(WBFunctor<AmberEWon_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (AmberEWon_WBFunctor_T::*AmberEWon_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(AmberEWon_WBFunctor_T *obj, void (AmberEWon_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new AmberEWon_WBFunctor<AmberEWon_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for TurnRedEW_WBFunctor_T */ 
template <typename TurnRedEW_WBFunctor_T >
class TurnRedEW_WBFunctor: public WBFunctor<TurnRedEW_WBFunctor_T > {
public:
    /** WBFunctor constructor for TurnRedEW_WBFunctor_T */
    TurnRedEW_WBFunctor(TurnRedEW_WBFunctor_T* obj, void (TurnRedEW_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<TurnRedEW_WBFunctor_T >(obj, (void (TurnRedEW_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class TurnRedEW_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::TurnRedEW_t().get_from(m);
        TurnRedEW_function_t funct((void (TurnRedEW_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<TurnRedEW_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<TurnRedEW_WBFunctor_T >::fObject->*funct)(WBFunctor<TurnRedEW_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (TurnRedEW_WBFunctor_T::*TurnRedEW_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(TurnRedEW_WBFunctor_T *obj, void (TurnRedEW_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new TurnRedEW_WBFunctor<TurnRedEW_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for TimeGTfive_WBFunctor_T */ 
template <typename TimeGTfive_WBFunctor_T >
class TimeGTfive_WBFunctor: public WBFunctor<TimeGTfive_WBFunctor_T > {
public:
    /** WBFunctor constructor for TimeGTfive_WBFunctor_T */
    TimeGTfive_WBFunctor(TimeGTfive_WBFunctor_T* obj, void (TimeGTfive_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<TimeGTfive_WBFunctor_T >(obj, (void (TimeGTfive_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class TimeGTfive_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::TimeGTfive_t().get_from(m);
        TimeGTfive_function_t funct((void (TimeGTfive_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<TimeGTfive_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<TimeGTfive_WBFunctor_T >::fObject->*funct)(WBFunctor<TimeGTfive_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (TimeGTfive_WBFunctor_T::*TimeGTfive_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(TimeGTfive_WBFunctor_T *obj, void (TimeGTfive_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new TimeGTfive_WBFunctor<TimeGTfive_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for RedEWon_WBFunctor_T */ 
template <typename RedEWon_WBFunctor_T >
class RedEWon_WBFunctor: public WBFunctor<RedEWon_WBFunctor_T > {
public:
    /** WBFunctor constructor for RedEWon_WBFunctor_T */
    RedEWon_WBFunctor(RedEWon_WBFunctor_T* obj, void (RedEWon_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<RedEWon_WBFunctor_T >(obj, (void (RedEWon_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class RedEWon_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::RedEWon_t().get_from(m);
        RedEWon_function_t funct((void (RedEWon_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<RedEWon_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<RedEWon_WBFunctor_T >::fObject->*funct)(WBFunctor<RedEWon_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (RedEWon_WBFunctor_T::*RedEWon_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(RedEWon_WBFunctor_T *obj, void (RedEWon_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new RedEWon_WBFunctor<RedEWon_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for GreenNSon_WBFunctor_T */ 
template <typename GreenNSon_WBFunctor_T >
class GreenNSon_WBFunctor: public WBFunctor<GreenNSon_WBFunctor_T > {
public:
    /** WBFunctor constructor for GreenNSon_WBFunctor_T */
    GreenNSon_WBFunctor(GreenNSon_WBFunctor_T* obj, void (GreenNSon_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<GreenNSon_WBFunctor_T >(obj, (void (GreenNSon_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class GreenNSon_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::GreenNSon_t().get_from(m);
        GreenNSon_function_t funct((void (GreenNSon_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<GreenNSon_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<GreenNSon_WBFunctor_T >::fObject->*funct)(WBFunctor<GreenNSon_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (GreenNSon_WBFunctor_T::*GreenNSon_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(GreenNSon_WBFunctor_T *obj, void (GreenNSon_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new GreenNSon_WBFunctor<GreenNSon_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for WarnNS_WBFunctor_T */ 
template <typename WarnNS_WBFunctor_T >
class WarnNS_WBFunctor: public WBFunctor<WarnNS_WBFunctor_T > {
public:
    /** WBFunctor constructor for WarnNS_WBFunctor_T */
    WarnNS_WBFunctor(WarnNS_WBFunctor_T* obj, void (WarnNS_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<WarnNS_WBFunctor_T >(obj, (void (WarnNS_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class WarnNS_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::WarnNS_t().get_from(m);
        WarnNS_function_t funct((void (WarnNS_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<WarnNS_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<WarnNS_WBFunctor_T >::fObject->*funct)(WBFunctor<WarnNS_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (WarnNS_WBFunctor_T::*WarnNS_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(WarnNS_WBFunctor_T *obj, void (WarnNS_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new WarnNS_WBFunctor<WarnNS_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for AmberNSon_WBFunctor_T */ 
template <typename AmberNSon_WBFunctor_T >
class AmberNSon_WBFunctor: public WBFunctor<AmberNSon_WBFunctor_T > {
public:
    /** WBFunctor constructor for AmberNSon_WBFunctor_T */
    AmberNSon_WBFunctor(AmberNSon_WBFunctor_T* obj, void (AmberNSon_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<AmberNSon_WBFunctor_T >(obj, (void (AmberNSon_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class AmberNSon_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::AmberNSon_t().get_from(m);
        AmberNSon_function_t funct((void (AmberNSon_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<AmberNSon_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<AmberNSon_WBFunctor_T >::fObject->*funct)(WBFunctor<AmberNSon_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (AmberNSon_WBFunctor_T::*AmberNSon_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(AmberNSon_WBFunctor_T *obj, void (AmberNSon_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new AmberNSon_WBFunctor<AmberNSon_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for TurnRedNS_WBFunctor_T */ 
template <typename TurnRedNS_WBFunctor_T >
class TurnRedNS_WBFunctor: public WBFunctor<TurnRedNS_WBFunctor_T > {
public:
    /** WBFunctor constructor for TurnRedNS_WBFunctor_T */
    TurnRedNS_WBFunctor(TurnRedNS_WBFunctor_T* obj, void (TurnRedNS_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<TurnRedNS_WBFunctor_T >(obj, (void (TurnRedNS_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class TurnRedNS_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::TurnRedNS_t().get_from(m);
        TurnRedNS_function_t funct((void (TurnRedNS_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<TurnRedNS_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<TurnRedNS_WBFunctor_T >::fObject->*funct)(WBFunctor<TurnRedNS_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (TurnRedNS_WBFunctor_T::*TurnRedNS_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(TurnRedNS_WBFunctor_T *obj, void (TurnRedNS_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new TurnRedNS_WBFunctor<TurnRedNS_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for RedNSon_WBFunctor_T */ 
template <typename RedNSon_WBFunctor_T >
class RedNSon_WBFunctor: public WBFunctor<RedNSon_WBFunctor_T > {
public:
    /** WBFunctor constructor for RedNSon_WBFunctor_T */
    RedNSon_WBFunctor(RedNSon_WBFunctor_T* obj, void (RedNSon_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<RedNSon_WBFunctor_T >(obj, (void (RedNSon_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class RedNSon_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::RedNSon_t().get_from(m);
        RedNSon_function_t funct((void (RedNSon_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<RedNSon_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<RedNSon_WBFunctor_T >::fObject->*funct)(WBFunctor<RedNSon_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (RedNSon_WBFunctor_T::*RedNSon_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(RedNSon_WBFunctor_T *obj, void (RedNSon_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new RedNSon_WBFunctor<RedNSon_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for TimerReset_WBFunctor_T */ 
template <typename TimerReset_WBFunctor_T >
class TimerReset_WBFunctor: public WBFunctor<TimerReset_WBFunctor_T > {
public:
    /** WBFunctor constructor for TimerReset_WBFunctor_T */
    TimerReset_WBFunctor(TimerReset_WBFunctor_T* obj, void (TimerReset_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<TimerReset_WBFunctor_T >(obj, (void (TimerReset_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class TimerReset_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::TimerReset_t().get_from(m);
        TimerReset_function_t funct((void (TimerReset_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<TimerReset_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<TimerReset_WBFunctor_T >::fObject->*funct)(WBFunctor<TimerReset_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (TimerReset_WBFunctor_T::*TimerReset_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(TimerReset_WBFunctor_T *obj, void (TimerReset_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new TimerReset_WBFunctor<TimerReset_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for SLOT_UNUSED_WBFunctor_T */ 
template <typename SLOT_UNUSED_WBFunctor_T >
class SLOT_UNUSED_WBFunctor: public WBFunctor<SLOT_UNUSED_WBFunctor_T > {
public:
    /** WBFunctor constructor for SLOT_UNUSED_WBFunctor_T */
    SLOT_UNUSED_WBFunctor(SLOT_UNUSED_WBFunctor_T* obj, void (SLOT_UNUSED_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<SLOT_UNUSED_WBFunctor_T >(obj, (void (SLOT_UNUSED_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class SLOT_UNUSED_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::SLOT_UNUSED_t().get_from(m);
        SLOT_UNUSED_function_t funct((void (SLOT_UNUSED_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<SLOT_UNUSED_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<SLOT_UNUSED_WBFunctor_T >::fObject->*funct)(WBFunctor<SLOT_UNUSED_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (SLOT_UNUSED_WBFunctor_T::*SLOT_UNUSED_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(SLOT_UNUSED_WBFunctor_T *obj, void (SLOT_UNUSED_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new SLOT_UNUSED_WBFunctor<SLOT_UNUSED_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for CarSensorPressed_WBFunctor_T */ 
template <typename CarSensorPressed_WBFunctor_T >
class CarSensorPressed_WBFunctor: public WBFunctor<CarSensorPressed_WBFunctor_T > {
public:
    /** WBFunctor constructor for CarSensorPressed_WBFunctor_T */
    CarSensorPressed_WBFunctor(CarSensorPressed_WBFunctor_T* obj, void (CarSensorPressed_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<CarSensorPressed_WBFunctor_T >(obj, (void (CarSensorPressed_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class CarSensorPressed_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::CarSensorPressed_t().get_from(m);
        CarSensorPressed_function_t funct((void (CarSensorPressed_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<CarSensorPressed_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<CarSensorPressed_WBFunctor_T >::fObject->*funct)(WBFunctor<CarSensorPressed_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (CarSensorPressed_WBFunctor_T::*CarSensorPressed_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(CarSensorPressed_WBFunctor_T *obj, void (CarSensorPressed_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new CarSensorPressed_WBFunctor<CarSensorPressed_WBFunctor_T >(obj, f, t); }
}; 


#ifdef SwitchSubsumptionTrafficLights_DEFINED
/** WBFunctor definition for SwitchSubsumptionTrafficLights_WBFunctor_T */ 
template <typename SwitchSubsumptionTrafficLights_WBFunctor_T >
class SwitchSubsumptionTrafficLights_WBFunctor: public WBFunctor<SwitchSubsumptionTrafficLights_WBFunctor_T > {
public:
    /** WBFunctor constructor for SwitchSubsumptionTrafficLights_WBFunctor_T */
    SwitchSubsumptionTrafficLights_WBFunctor(SwitchSubsumptionTrafficLights_WBFunctor_T* obj, void (SwitchSubsumptionTrafficLights_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::SwitchSubsumptionTrafficLights &), guWhiteboard::WBTypes t): WBFunctor<SwitchSubsumptionTrafficLights_WBFunctor_T >(obj, (void (SwitchSubsumptionTrafficLights_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class SwitchSubsumptionTrafficLights_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::SwitchSubsumptionTrafficLights result = guWhiteboard::SwitchSubsumptionTrafficLights_t().get_from(m);
        SwitchSubsumptionTrafficLights_function_t funct((void (SwitchSubsumptionTrafficLights_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::SwitchSubsumptionTrafficLights &))WBFunctor<SwitchSubsumptionTrafficLights_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<SwitchSubsumptionTrafficLights_WBFunctor_T >::fObject->*funct)(WBFunctor<SwitchSubsumptionTrafficLights_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (SwitchSubsumptionTrafficLights_WBFunctor_T::*SwitchSubsumptionTrafficLights_function_t) (guWhiteboard::WBTypes, guWhiteboard::SwitchSubsumptionTrafficLights &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(SwitchSubsumptionTrafficLights_WBFunctor_T *obj, void (SwitchSubsumptionTrafficLights_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::SwitchSubsumptionTrafficLights &), guWhiteboard::WBTypes t) { return new SwitchSubsumptionTrafficLights_WBFunctor<SwitchSubsumptionTrafficLights_WBFunctor_T >(obj, f, t); }
}; 
#endif //SwitchSubsumptionTrafficLights_DEFINED


/** WBFunctor definition for Ball_Found_WBFunctor_T */ 
template <typename Ball_Found_WBFunctor_T >
class Ball_Found_WBFunctor: public WBFunctor<Ball_Found_WBFunctor_T > {
public:
    /** WBFunctor constructor for Ball_Found_WBFunctor_T */
    Ball_Found_WBFunctor(Ball_Found_WBFunctor_T* obj, void (Ball_Found_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<Ball_Found_WBFunctor_T >(obj, (void (Ball_Found_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Ball_Found_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::Ball_Found_t().get_from(m);
        Ball_Found_function_t funct((void (Ball_Found_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<Ball_Found_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Ball_Found_WBFunctor_T >::fObject->*funct)(WBFunctor<Ball_Found_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Ball_Found_WBFunctor_T::*Ball_Found_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Ball_Found_WBFunctor_T *obj, void (Ball_Found_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new Ball_Found_WBFunctor<Ball_Found_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Ball_Calibration_File_WBFunctor_T */ 
template <typename Ball_Calibration_File_WBFunctor_T >
class Ball_Calibration_File_WBFunctor: public WBFunctor<Ball_Calibration_File_WBFunctor_T > {
public:
    /** WBFunctor constructor for Ball_Calibration_File_WBFunctor_T */
    Ball_Calibration_File_WBFunctor(Ball_Calibration_File_WBFunctor_T* obj, void (Ball_Calibration_File_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, std::string &), guWhiteboard::WBTypes t): WBFunctor<Ball_Calibration_File_WBFunctor_T >(obj, (void (Ball_Calibration_File_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Ball_Calibration_File_WBFunctor */
    void call(gu_simple_message *m) {
        std::string result = guWhiteboard::Ball_Calibration_File_t().get_from(m);
        Ball_Calibration_File_function_t funct((void (Ball_Calibration_File_WBFunctor_T::*)(guWhiteboard::WBTypes, std::string &))WBFunctor<Ball_Calibration_File_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Ball_Calibration_File_WBFunctor_T >::fObject->*funct)(WBFunctor<Ball_Calibration_File_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Ball_Calibration_File_WBFunctor_T::*Ball_Calibration_File_function_t) (guWhiteboard::WBTypes, std::string &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Ball_Calibration_File_WBFunctor_T *obj, void (Ball_Calibration_File_WBFunctor_T::*f)(guWhiteboard::WBTypes, std::string &), guWhiteboard::WBTypes t) { return new Ball_Calibration_File_WBFunctor<Ball_Calibration_File_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Ball_Calibration_Num_WBFunctor_T */ 
template <typename Ball_Calibration_Num_WBFunctor_T >
class Ball_Calibration_Num_WBFunctor: public WBFunctor<Ball_Calibration_Num_WBFunctor_T > {
public:
    /** WBFunctor constructor for Ball_Calibration_Num_WBFunctor_T */
    Ball_Calibration_Num_WBFunctor(Ball_Calibration_Num_WBFunctor_T* obj, void (Ball_Calibration_Num_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, int32_t &), guWhiteboard::WBTypes t): WBFunctor<Ball_Calibration_Num_WBFunctor_T >(obj, (void (Ball_Calibration_Num_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Ball_Calibration_Num_WBFunctor */
    void call(gu_simple_message *m) {
        int32_t result = guWhiteboard::Ball_Calibration_Num_t().get_from(m);
        Ball_Calibration_Num_function_t funct((void (Ball_Calibration_Num_WBFunctor_T::*)(guWhiteboard::WBTypes, int32_t &))WBFunctor<Ball_Calibration_Num_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Ball_Calibration_Num_WBFunctor_T >::fObject->*funct)(WBFunctor<Ball_Calibration_Num_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Ball_Calibration_Num_WBFunctor_T::*Ball_Calibration_Num_function_t) (guWhiteboard::WBTypes, int32_t &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Ball_Calibration_Num_WBFunctor_T *obj, void (Ball_Calibration_Num_WBFunctor_T::*f)(guWhiteboard::WBTypes, int32_t &), guWhiteboard::WBTypes t) { return new Ball_Calibration_Num_WBFunctor<Ball_Calibration_Num_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Ball_Color_Num_WBFunctor_T */ 
template <typename Ball_Color_Num_WBFunctor_T >
class Ball_Color_Num_WBFunctor: public WBFunctor<Ball_Color_Num_WBFunctor_T > {
public:
    /** WBFunctor constructor for Ball_Color_Num_WBFunctor_T */
    Ball_Color_Num_WBFunctor(Ball_Color_Num_WBFunctor_T* obj, void (Ball_Color_Num_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, int32_t &), guWhiteboard::WBTypes t): WBFunctor<Ball_Color_Num_WBFunctor_T >(obj, (void (Ball_Color_Num_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Ball_Color_Num_WBFunctor */
    void call(gu_simple_message *m) {
        int32_t result = guWhiteboard::Ball_Color_Num_t().get_from(m);
        Ball_Color_Num_function_t funct((void (Ball_Color_Num_WBFunctor_T::*)(guWhiteboard::WBTypes, int32_t &))WBFunctor<Ball_Color_Num_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Ball_Color_Num_WBFunctor_T >::fObject->*funct)(WBFunctor<Ball_Color_Num_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Ball_Color_Num_WBFunctor_T::*Ball_Color_Num_function_t) (guWhiteboard::WBTypes, int32_t &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Ball_Color_Num_WBFunctor_T *obj, void (Ball_Color_Num_WBFunctor_T::*f)(guWhiteboard::WBTypes, int32_t &), guWhiteboard::WBTypes t) { return new Ball_Color_Num_WBFunctor<Ball_Color_Num_WBFunctor_T >(obj, f, t); }
}; 


#ifdef HalArmTarget_DEFINED
/** WBFunctor definition for HAL_LArmTarget_Ctrl_WBFunctor_T */ 
template <typename HAL_LArmTarget_Ctrl_WBFunctor_T >
class HAL_LArmTarget_Ctrl_WBFunctor: public WBFunctor<HAL_LArmTarget_Ctrl_WBFunctor_T > {
public:
    /** WBFunctor constructor for HAL_LArmTarget_Ctrl_WBFunctor_T */
    HAL_LArmTarget_Ctrl_WBFunctor(HAL_LArmTarget_Ctrl_WBFunctor_T* obj, void (HAL_LArmTarget_Ctrl_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &), guWhiteboard::WBTypes t): WBFunctor<HAL_LArmTarget_Ctrl_WBFunctor_T >(obj, (void (HAL_LArmTarget_Ctrl_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class HAL_LArmTarget_Ctrl_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::HalArmTarget result = guWhiteboard::HAL_LArmTarget_Ctrl_t().get_from(m);
        HAL_LArmTarget_Ctrl_function_t funct((void (HAL_LArmTarget_Ctrl_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &))WBFunctor<HAL_LArmTarget_Ctrl_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<HAL_LArmTarget_Ctrl_WBFunctor_T >::fObject->*funct)(WBFunctor<HAL_LArmTarget_Ctrl_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (HAL_LArmTarget_Ctrl_WBFunctor_T::*HAL_LArmTarget_Ctrl_function_t) (guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(HAL_LArmTarget_Ctrl_WBFunctor_T *obj, void (HAL_LArmTarget_Ctrl_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &), guWhiteboard::WBTypes t) { return new HAL_LArmTarget_Ctrl_WBFunctor<HAL_LArmTarget_Ctrl_WBFunctor_T >(obj, f, t); }
}; 
#endif //HalArmTarget_DEFINED

#ifdef HalArmTarget_DEFINED
/** WBFunctor definition for HAL_LArmTarget_Stat_WBFunctor_T */ 
template <typename HAL_LArmTarget_Stat_WBFunctor_T >
class HAL_LArmTarget_Stat_WBFunctor: public WBFunctor<HAL_LArmTarget_Stat_WBFunctor_T > {
public:
    /** WBFunctor constructor for HAL_LArmTarget_Stat_WBFunctor_T */
    HAL_LArmTarget_Stat_WBFunctor(HAL_LArmTarget_Stat_WBFunctor_T* obj, void (HAL_LArmTarget_Stat_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &), guWhiteboard::WBTypes t): WBFunctor<HAL_LArmTarget_Stat_WBFunctor_T >(obj, (void (HAL_LArmTarget_Stat_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class HAL_LArmTarget_Stat_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::HalArmTarget result = guWhiteboard::HAL_LArmTarget_Stat_t().get_from(m);
        HAL_LArmTarget_Stat_function_t funct((void (HAL_LArmTarget_Stat_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &))WBFunctor<HAL_LArmTarget_Stat_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<HAL_LArmTarget_Stat_WBFunctor_T >::fObject->*funct)(WBFunctor<HAL_LArmTarget_Stat_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (HAL_LArmTarget_Stat_WBFunctor_T::*HAL_LArmTarget_Stat_function_t) (guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(HAL_LArmTarget_Stat_WBFunctor_T *obj, void (HAL_LArmTarget_Stat_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &), guWhiteboard::WBTypes t) { return new HAL_LArmTarget_Stat_WBFunctor<HAL_LArmTarget_Stat_WBFunctor_T >(obj, f, t); }
}; 
#endif //HalArmTarget_DEFINED

#ifdef HalArmTarget_DEFINED
/** WBFunctor definition for HAL_LArmTarget_Tolr_WBFunctor_T */ 
template <typename HAL_LArmTarget_Tolr_WBFunctor_T >
class HAL_LArmTarget_Tolr_WBFunctor: public WBFunctor<HAL_LArmTarget_Tolr_WBFunctor_T > {
public:
    /** WBFunctor constructor for HAL_LArmTarget_Tolr_WBFunctor_T */
    HAL_LArmTarget_Tolr_WBFunctor(HAL_LArmTarget_Tolr_WBFunctor_T* obj, void (HAL_LArmTarget_Tolr_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &), guWhiteboard::WBTypes t): WBFunctor<HAL_LArmTarget_Tolr_WBFunctor_T >(obj, (void (HAL_LArmTarget_Tolr_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class HAL_LArmTarget_Tolr_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::HalArmTarget result = guWhiteboard::HAL_LArmTarget_Tolr_t().get_from(m);
        HAL_LArmTarget_Tolr_function_t funct((void (HAL_LArmTarget_Tolr_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &))WBFunctor<HAL_LArmTarget_Tolr_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<HAL_LArmTarget_Tolr_WBFunctor_T >::fObject->*funct)(WBFunctor<HAL_LArmTarget_Tolr_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (HAL_LArmTarget_Tolr_WBFunctor_T::*HAL_LArmTarget_Tolr_function_t) (guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(HAL_LArmTarget_Tolr_WBFunctor_T *obj, void (HAL_LArmTarget_Tolr_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &), guWhiteboard::WBTypes t) { return new HAL_LArmTarget_Tolr_WBFunctor<HAL_LArmTarget_Tolr_WBFunctor_T >(obj, f, t); }
}; 
#endif //HalArmTarget_DEFINED

#ifdef HalArmTarget_DEFINED
/** WBFunctor definition for HAL_RArmTarget_Ctrl_WBFunctor_T */ 
template <typename HAL_RArmTarget_Ctrl_WBFunctor_T >
class HAL_RArmTarget_Ctrl_WBFunctor: public WBFunctor<HAL_RArmTarget_Ctrl_WBFunctor_T > {
public:
    /** WBFunctor constructor for HAL_RArmTarget_Ctrl_WBFunctor_T */
    HAL_RArmTarget_Ctrl_WBFunctor(HAL_RArmTarget_Ctrl_WBFunctor_T* obj, void (HAL_RArmTarget_Ctrl_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &), guWhiteboard::WBTypes t): WBFunctor<HAL_RArmTarget_Ctrl_WBFunctor_T >(obj, (void (HAL_RArmTarget_Ctrl_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class HAL_RArmTarget_Ctrl_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::HalArmTarget result = guWhiteboard::HAL_RArmTarget_Ctrl_t().get_from(m);
        HAL_RArmTarget_Ctrl_function_t funct((void (HAL_RArmTarget_Ctrl_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &))WBFunctor<HAL_RArmTarget_Ctrl_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<HAL_RArmTarget_Ctrl_WBFunctor_T >::fObject->*funct)(WBFunctor<HAL_RArmTarget_Ctrl_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (HAL_RArmTarget_Ctrl_WBFunctor_T::*HAL_RArmTarget_Ctrl_function_t) (guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(HAL_RArmTarget_Ctrl_WBFunctor_T *obj, void (HAL_RArmTarget_Ctrl_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &), guWhiteboard::WBTypes t) { return new HAL_RArmTarget_Ctrl_WBFunctor<HAL_RArmTarget_Ctrl_WBFunctor_T >(obj, f, t); }
}; 
#endif //HalArmTarget_DEFINED

#ifdef HalArmTarget_DEFINED
/** WBFunctor definition for HAL_RArmTarget_Stat_WBFunctor_T */ 
template <typename HAL_RArmTarget_Stat_WBFunctor_T >
class HAL_RArmTarget_Stat_WBFunctor: public WBFunctor<HAL_RArmTarget_Stat_WBFunctor_T > {
public:
    /** WBFunctor constructor for HAL_RArmTarget_Stat_WBFunctor_T */
    HAL_RArmTarget_Stat_WBFunctor(HAL_RArmTarget_Stat_WBFunctor_T* obj, void (HAL_RArmTarget_Stat_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &), guWhiteboard::WBTypes t): WBFunctor<HAL_RArmTarget_Stat_WBFunctor_T >(obj, (void (HAL_RArmTarget_Stat_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class HAL_RArmTarget_Stat_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::HalArmTarget result = guWhiteboard::HAL_RArmTarget_Stat_t().get_from(m);
        HAL_RArmTarget_Stat_function_t funct((void (HAL_RArmTarget_Stat_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &))WBFunctor<HAL_RArmTarget_Stat_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<HAL_RArmTarget_Stat_WBFunctor_T >::fObject->*funct)(WBFunctor<HAL_RArmTarget_Stat_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (HAL_RArmTarget_Stat_WBFunctor_T::*HAL_RArmTarget_Stat_function_t) (guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(HAL_RArmTarget_Stat_WBFunctor_T *obj, void (HAL_RArmTarget_Stat_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &), guWhiteboard::WBTypes t) { return new HAL_RArmTarget_Stat_WBFunctor<HAL_RArmTarget_Stat_WBFunctor_T >(obj, f, t); }
}; 
#endif //HalArmTarget_DEFINED

#ifdef HalArmTarget_DEFINED
/** WBFunctor definition for HAL_RArmTarget_Tolr_WBFunctor_T */ 
template <typename HAL_RArmTarget_Tolr_WBFunctor_T >
class HAL_RArmTarget_Tolr_WBFunctor: public WBFunctor<HAL_RArmTarget_Tolr_WBFunctor_T > {
public:
    /** WBFunctor constructor for HAL_RArmTarget_Tolr_WBFunctor_T */
    HAL_RArmTarget_Tolr_WBFunctor(HAL_RArmTarget_Tolr_WBFunctor_T* obj, void (HAL_RArmTarget_Tolr_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &), guWhiteboard::WBTypes t): WBFunctor<HAL_RArmTarget_Tolr_WBFunctor_T >(obj, (void (HAL_RArmTarget_Tolr_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class HAL_RArmTarget_Tolr_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::HalArmTarget result = guWhiteboard::HAL_RArmTarget_Tolr_t().get_from(m);
        HAL_RArmTarget_Tolr_function_t funct((void (HAL_RArmTarget_Tolr_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &))WBFunctor<HAL_RArmTarget_Tolr_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<HAL_RArmTarget_Tolr_WBFunctor_T >::fObject->*funct)(WBFunctor<HAL_RArmTarget_Tolr_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (HAL_RArmTarget_Tolr_WBFunctor_T::*HAL_RArmTarget_Tolr_function_t) (guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(HAL_RArmTarget_Tolr_WBFunctor_T *obj, void (HAL_RArmTarget_Tolr_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::HalArmTarget &), guWhiteboard::WBTypes t) { return new HAL_RArmTarget_Tolr_WBFunctor<HAL_RArmTarget_Tolr_WBFunctor_T >(obj, f, t); }
}; 
#endif //HalArmTarget_DEFINED

#ifdef VisionFieldFeatures_DEFINED
/** WBFunctor definition for VisionFieldFeatures_WBFunctor_T */ 
template <typename VisionFieldFeatures_WBFunctor_T >
class VisionFieldFeatures_WBFunctor: public WBFunctor<VisionFieldFeatures_WBFunctor_T > {
public:
    /** WBFunctor constructor for VisionFieldFeatures_WBFunctor_T */
    VisionFieldFeatures_WBFunctor(VisionFieldFeatures_WBFunctor_T* obj, void (VisionFieldFeatures_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::VisionFieldFeatures &), guWhiteboard::WBTypes t): WBFunctor<VisionFieldFeatures_WBFunctor_T >(obj, (void (VisionFieldFeatures_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class VisionFieldFeatures_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::VisionFieldFeatures result = guWhiteboard::VisionFieldFeatures_t().get_from(m);
        VisionFieldFeatures_function_t funct((void (VisionFieldFeatures_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::VisionFieldFeatures &))WBFunctor<VisionFieldFeatures_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<VisionFieldFeatures_WBFunctor_T >::fObject->*funct)(WBFunctor<VisionFieldFeatures_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (VisionFieldFeatures_WBFunctor_T::*VisionFieldFeatures_function_t) (guWhiteboard::WBTypes, guWhiteboard::VisionFieldFeatures &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(VisionFieldFeatures_WBFunctor_T *obj, void (VisionFieldFeatures_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::VisionFieldFeatures &), guWhiteboard::WBTypes t) { return new VisionFieldFeatures_WBFunctor<VisionFieldFeatures_WBFunctor_T >(obj, f, t); }
}; 
#endif //VisionFieldFeatures_DEFINED


/** WBFunctor definition for WhistleBlown_WBFunctor_T */ 
template <typename WhistleBlown_WBFunctor_T >
class WhistleBlown_WBFunctor: public WBFunctor<WhistleBlown_WBFunctor_T > {
public:
    /** WBFunctor constructor for WhistleBlown_WBFunctor_T */
    WhistleBlown_WBFunctor(WhistleBlown_WBFunctor_T* obj, void (WhistleBlown_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<WhistleBlown_WBFunctor_T >(obj, (void (WhistleBlown_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class WhistleBlown_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::WhistleBlown_t().get_from(m);
        WhistleBlown_function_t funct((void (WhistleBlown_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<WhistleBlown_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<WhistleBlown_WBFunctor_T >::fObject->*funct)(WBFunctor<WhistleBlown_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (WhistleBlown_WBFunctor_T::*WhistleBlown_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(WhistleBlown_WBFunctor_T *obj, void (WhistleBlown_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new WhistleBlown_WBFunctor<WhistleBlown_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for VolumeControl_WBFunctor_T */ 
template <typename VolumeControl_WBFunctor_T >
class VolumeControl_WBFunctor: public WBFunctor<VolumeControl_WBFunctor_T > {
public:
    /** WBFunctor constructor for VolumeControl_WBFunctor_T */
    VolumeControl_WBFunctor(VolumeControl_WBFunctor_T* obj, void (VolumeControl_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, uint8_t &), guWhiteboard::WBTypes t): WBFunctor<VolumeControl_WBFunctor_T >(obj, (void (VolumeControl_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class VolumeControl_WBFunctor */
    void call(gu_simple_message *m) {
        uint8_t result = guWhiteboard::VolumeControl_t().get_from(m);
        VolumeControl_function_t funct((void (VolumeControl_WBFunctor_T::*)(guWhiteboard::WBTypes, uint8_t &))WBFunctor<VolumeControl_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<VolumeControl_WBFunctor_T >::fObject->*funct)(WBFunctor<VolumeControl_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (VolumeControl_WBFunctor_T::*VolumeControl_function_t) (guWhiteboard::WBTypes, uint8_t &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(VolumeControl_WBFunctor_T *obj, void (VolumeControl_WBFunctor_T::*f)(guWhiteboard::WBTypes, uint8_t &), guWhiteboard::WBTypes t) { return new VolumeControl_WBFunctor<VolumeControl_WBFunctor_T >(obj, f, t); }
}; 


#ifdef VisionRobots_DEFINED
/** WBFunctor definition for VisionRobots_WBFunctor_T */ 
template <typename VisionRobots_WBFunctor_T >
class VisionRobots_WBFunctor: public WBFunctor<VisionRobots_WBFunctor_T > {
public:
    /** WBFunctor constructor for VisionRobots_WBFunctor_T */
    VisionRobots_WBFunctor(VisionRobots_WBFunctor_T* obj, void (VisionRobots_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::VisionRobots &), guWhiteboard::WBTypes t): WBFunctor<VisionRobots_WBFunctor_T >(obj, (void (VisionRobots_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class VisionRobots_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::VisionRobots result = guWhiteboard::VisionRobots_t().get_from(m);
        VisionRobots_function_t funct((void (VisionRobots_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::VisionRobots &))WBFunctor<VisionRobots_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<VisionRobots_WBFunctor_T >::fObject->*funct)(WBFunctor<VisionRobots_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (VisionRobots_WBFunctor_T::*VisionRobots_function_t) (guWhiteboard::WBTypes, guWhiteboard::VisionRobots &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(VisionRobots_WBFunctor_T *obj, void (VisionRobots_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::VisionRobots &), guWhiteboard::WBTypes t) { return new VisionRobots_WBFunctor<VisionRobots_WBFunctor_T >(obj, f, t); }
}; 
#endif //VisionRobots_DEFINED

#ifdef VisionDetectionHorizons_DEFINED
/** WBFunctor definition for VisionDetectionHorizons_WBFunctor_T */ 
template <typename VisionDetectionHorizons_WBFunctor_T >
class VisionDetectionHorizons_WBFunctor: public WBFunctor<VisionDetectionHorizons_WBFunctor_T > {
public:
    /** WBFunctor constructor for VisionDetectionHorizons_WBFunctor_T */
    VisionDetectionHorizons_WBFunctor(VisionDetectionHorizons_WBFunctor_T* obj, void (VisionDetectionHorizons_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::VisionDetectionHorizons &), guWhiteboard::WBTypes t): WBFunctor<VisionDetectionHorizons_WBFunctor_T >(obj, (void (VisionDetectionHorizons_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class VisionDetectionHorizons_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::VisionDetectionHorizons result = guWhiteboard::VisionDetectionHorizons_t().get_from(m);
        VisionDetectionHorizons_function_t funct((void (VisionDetectionHorizons_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::VisionDetectionHorizons &))WBFunctor<VisionDetectionHorizons_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<VisionDetectionHorizons_WBFunctor_T >::fObject->*funct)(WBFunctor<VisionDetectionHorizons_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (VisionDetectionHorizons_WBFunctor_T::*VisionDetectionHorizons_function_t) (guWhiteboard::WBTypes, guWhiteboard::VisionDetectionHorizons &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(VisionDetectionHorizons_WBFunctor_T *obj, void (VisionDetectionHorizons_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::VisionDetectionHorizons &), guWhiteboard::WBTypes t) { return new VisionDetectionHorizons_WBFunctor<VisionDetectionHorizons_WBFunctor_T >(obj, f, t); }
}; 
#endif //VisionDetectionHorizons_DEFINED

#ifdef NaoWalkCommand_DEFINED
/** WBFunctor definition for NaoWalkCommand_WBFunctor_T */ 
template <typename NaoWalkCommand_WBFunctor_T >
class NaoWalkCommand_WBFunctor: public WBFunctor<NaoWalkCommand_WBFunctor_T > {
public:
    /** WBFunctor constructor for NaoWalkCommand_WBFunctor_T */
    NaoWalkCommand_WBFunctor(NaoWalkCommand_WBFunctor_T* obj, void (NaoWalkCommand_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::NaoWalkCommand &), guWhiteboard::WBTypes t): WBFunctor<NaoWalkCommand_WBFunctor_T >(obj, (void (NaoWalkCommand_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class NaoWalkCommand_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::NaoWalkCommand result = guWhiteboard::NaoWalkCommand_t().get_from(m);
        NaoWalkCommand_function_t funct((void (NaoWalkCommand_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::NaoWalkCommand &))WBFunctor<NaoWalkCommand_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<NaoWalkCommand_WBFunctor_T >::fObject->*funct)(WBFunctor<NaoWalkCommand_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (NaoWalkCommand_WBFunctor_T::*NaoWalkCommand_function_t) (guWhiteboard::WBTypes, guWhiteboard::NaoWalkCommand &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(NaoWalkCommand_WBFunctor_T *obj, void (NaoWalkCommand_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::NaoWalkCommand &), guWhiteboard::WBTypes t) { return new NaoWalkCommand_WBFunctor<NaoWalkCommand_WBFunctor_T >(obj, f, t); }
}; 
#endif //NaoWalkCommand_DEFINED

#ifdef NaoWalkStatus_DEFINED
/** WBFunctor definition for NaoWalkStatus_WBFunctor_T */ 
template <typename NaoWalkStatus_WBFunctor_T >
class NaoWalkStatus_WBFunctor: public WBFunctor<NaoWalkStatus_WBFunctor_T > {
public:
    /** WBFunctor constructor for NaoWalkStatus_WBFunctor_T */
    NaoWalkStatus_WBFunctor(NaoWalkStatus_WBFunctor_T* obj, void (NaoWalkStatus_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::NaoWalkStatus &), guWhiteboard::WBTypes t): WBFunctor<NaoWalkStatus_WBFunctor_T >(obj, (void (NaoWalkStatus_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class NaoWalkStatus_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::NaoWalkStatus result = guWhiteboard::NaoWalkStatus_t().get_from(m);
        NaoWalkStatus_function_t funct((void (NaoWalkStatus_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::NaoWalkStatus &))WBFunctor<NaoWalkStatus_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<NaoWalkStatus_WBFunctor_T >::fObject->*funct)(WBFunctor<NaoWalkStatus_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (NaoWalkStatus_WBFunctor_T::*NaoWalkStatus_function_t) (guWhiteboard::WBTypes, guWhiteboard::NaoWalkStatus &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(NaoWalkStatus_WBFunctor_T *obj, void (NaoWalkStatus_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::NaoWalkStatus &), guWhiteboard::WBTypes t) { return new NaoWalkStatus_WBFunctor<NaoWalkStatus_WBFunctor_T >(obj, f, t); }
}; 
#endif //NaoWalkStatus_DEFINED

#ifdef HalLegTarget_DEFINED
/** WBFunctor definition for HAL_LLegTarget_Ctrl_WBFunctor_T */ 
template <typename HAL_LLegTarget_Ctrl_WBFunctor_T >
class HAL_LLegTarget_Ctrl_WBFunctor: public WBFunctor<HAL_LLegTarget_Ctrl_WBFunctor_T > {
public:
    /** WBFunctor constructor for HAL_LLegTarget_Ctrl_WBFunctor_T */
    HAL_LLegTarget_Ctrl_WBFunctor(HAL_LLegTarget_Ctrl_WBFunctor_T* obj, void (HAL_LLegTarget_Ctrl_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &), guWhiteboard::WBTypes t): WBFunctor<HAL_LLegTarget_Ctrl_WBFunctor_T >(obj, (void (HAL_LLegTarget_Ctrl_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class HAL_LLegTarget_Ctrl_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::HalLegTarget result = guWhiteboard::HAL_LLegTarget_Ctrl_t().get_from(m);
        HAL_LLegTarget_Ctrl_function_t funct((void (HAL_LLegTarget_Ctrl_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &))WBFunctor<HAL_LLegTarget_Ctrl_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<HAL_LLegTarget_Ctrl_WBFunctor_T >::fObject->*funct)(WBFunctor<HAL_LLegTarget_Ctrl_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (HAL_LLegTarget_Ctrl_WBFunctor_T::*HAL_LLegTarget_Ctrl_function_t) (guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(HAL_LLegTarget_Ctrl_WBFunctor_T *obj, void (HAL_LLegTarget_Ctrl_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &), guWhiteboard::WBTypes t) { return new HAL_LLegTarget_Ctrl_WBFunctor<HAL_LLegTarget_Ctrl_WBFunctor_T >(obj, f, t); }
}; 
#endif //HalLegTarget_DEFINED

#ifdef HalLegTarget_DEFINED
/** WBFunctor definition for HAL_LLegTarget_Stat_WBFunctor_T */ 
template <typename HAL_LLegTarget_Stat_WBFunctor_T >
class HAL_LLegTarget_Stat_WBFunctor: public WBFunctor<HAL_LLegTarget_Stat_WBFunctor_T > {
public:
    /** WBFunctor constructor for HAL_LLegTarget_Stat_WBFunctor_T */
    HAL_LLegTarget_Stat_WBFunctor(HAL_LLegTarget_Stat_WBFunctor_T* obj, void (HAL_LLegTarget_Stat_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &), guWhiteboard::WBTypes t): WBFunctor<HAL_LLegTarget_Stat_WBFunctor_T >(obj, (void (HAL_LLegTarget_Stat_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class HAL_LLegTarget_Stat_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::HalLegTarget result = guWhiteboard::HAL_LLegTarget_Stat_t().get_from(m);
        HAL_LLegTarget_Stat_function_t funct((void (HAL_LLegTarget_Stat_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &))WBFunctor<HAL_LLegTarget_Stat_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<HAL_LLegTarget_Stat_WBFunctor_T >::fObject->*funct)(WBFunctor<HAL_LLegTarget_Stat_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (HAL_LLegTarget_Stat_WBFunctor_T::*HAL_LLegTarget_Stat_function_t) (guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(HAL_LLegTarget_Stat_WBFunctor_T *obj, void (HAL_LLegTarget_Stat_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &), guWhiteboard::WBTypes t) { return new HAL_LLegTarget_Stat_WBFunctor<HAL_LLegTarget_Stat_WBFunctor_T >(obj, f, t); }
}; 
#endif //HalLegTarget_DEFINED

#ifdef HalLegTarget_DEFINED
/** WBFunctor definition for HAL_LLegTarget_Tolr_WBFunctor_T */ 
template <typename HAL_LLegTarget_Tolr_WBFunctor_T >
class HAL_LLegTarget_Tolr_WBFunctor: public WBFunctor<HAL_LLegTarget_Tolr_WBFunctor_T > {
public:
    /** WBFunctor constructor for HAL_LLegTarget_Tolr_WBFunctor_T */
    HAL_LLegTarget_Tolr_WBFunctor(HAL_LLegTarget_Tolr_WBFunctor_T* obj, void (HAL_LLegTarget_Tolr_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &), guWhiteboard::WBTypes t): WBFunctor<HAL_LLegTarget_Tolr_WBFunctor_T >(obj, (void (HAL_LLegTarget_Tolr_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class HAL_LLegTarget_Tolr_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::HalLegTarget result = guWhiteboard::HAL_LLegTarget_Tolr_t().get_from(m);
        HAL_LLegTarget_Tolr_function_t funct((void (HAL_LLegTarget_Tolr_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &))WBFunctor<HAL_LLegTarget_Tolr_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<HAL_LLegTarget_Tolr_WBFunctor_T >::fObject->*funct)(WBFunctor<HAL_LLegTarget_Tolr_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (HAL_LLegTarget_Tolr_WBFunctor_T::*HAL_LLegTarget_Tolr_function_t) (guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(HAL_LLegTarget_Tolr_WBFunctor_T *obj, void (HAL_LLegTarget_Tolr_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &), guWhiteboard::WBTypes t) { return new HAL_LLegTarget_Tolr_WBFunctor<HAL_LLegTarget_Tolr_WBFunctor_T >(obj, f, t); }
}; 
#endif //HalLegTarget_DEFINED

#ifdef HalLegTarget_DEFINED
/** WBFunctor definition for HAL_RLegTarget_Ctrl_WBFunctor_T */ 
template <typename HAL_RLegTarget_Ctrl_WBFunctor_T >
class HAL_RLegTarget_Ctrl_WBFunctor: public WBFunctor<HAL_RLegTarget_Ctrl_WBFunctor_T > {
public:
    /** WBFunctor constructor for HAL_RLegTarget_Ctrl_WBFunctor_T */
    HAL_RLegTarget_Ctrl_WBFunctor(HAL_RLegTarget_Ctrl_WBFunctor_T* obj, void (HAL_RLegTarget_Ctrl_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &), guWhiteboard::WBTypes t): WBFunctor<HAL_RLegTarget_Ctrl_WBFunctor_T >(obj, (void (HAL_RLegTarget_Ctrl_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class HAL_RLegTarget_Ctrl_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::HalLegTarget result = guWhiteboard::HAL_RLegTarget_Ctrl_t().get_from(m);
        HAL_RLegTarget_Ctrl_function_t funct((void (HAL_RLegTarget_Ctrl_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &))WBFunctor<HAL_RLegTarget_Ctrl_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<HAL_RLegTarget_Ctrl_WBFunctor_T >::fObject->*funct)(WBFunctor<HAL_RLegTarget_Ctrl_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (HAL_RLegTarget_Ctrl_WBFunctor_T::*HAL_RLegTarget_Ctrl_function_t) (guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(HAL_RLegTarget_Ctrl_WBFunctor_T *obj, void (HAL_RLegTarget_Ctrl_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &), guWhiteboard::WBTypes t) { return new HAL_RLegTarget_Ctrl_WBFunctor<HAL_RLegTarget_Ctrl_WBFunctor_T >(obj, f, t); }
}; 
#endif //HalLegTarget_DEFINED

#ifdef HalLegTarget_DEFINED
/** WBFunctor definition for HAL_RLegTarget_Stat_WBFunctor_T */ 
template <typename HAL_RLegTarget_Stat_WBFunctor_T >
class HAL_RLegTarget_Stat_WBFunctor: public WBFunctor<HAL_RLegTarget_Stat_WBFunctor_T > {
public:
    /** WBFunctor constructor for HAL_RLegTarget_Stat_WBFunctor_T */
    HAL_RLegTarget_Stat_WBFunctor(HAL_RLegTarget_Stat_WBFunctor_T* obj, void (HAL_RLegTarget_Stat_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &), guWhiteboard::WBTypes t): WBFunctor<HAL_RLegTarget_Stat_WBFunctor_T >(obj, (void (HAL_RLegTarget_Stat_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class HAL_RLegTarget_Stat_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::HalLegTarget result = guWhiteboard::HAL_RLegTarget_Stat_t().get_from(m);
        HAL_RLegTarget_Stat_function_t funct((void (HAL_RLegTarget_Stat_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &))WBFunctor<HAL_RLegTarget_Stat_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<HAL_RLegTarget_Stat_WBFunctor_T >::fObject->*funct)(WBFunctor<HAL_RLegTarget_Stat_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (HAL_RLegTarget_Stat_WBFunctor_T::*HAL_RLegTarget_Stat_function_t) (guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(HAL_RLegTarget_Stat_WBFunctor_T *obj, void (HAL_RLegTarget_Stat_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &), guWhiteboard::WBTypes t) { return new HAL_RLegTarget_Stat_WBFunctor<HAL_RLegTarget_Stat_WBFunctor_T >(obj, f, t); }
}; 
#endif //HalLegTarget_DEFINED

#ifdef HalLegTarget_DEFINED
/** WBFunctor definition for HAL_RLegTarget_Tolr_WBFunctor_T */ 
template <typename HAL_RLegTarget_Tolr_WBFunctor_T >
class HAL_RLegTarget_Tolr_WBFunctor: public WBFunctor<HAL_RLegTarget_Tolr_WBFunctor_T > {
public:
    /** WBFunctor constructor for HAL_RLegTarget_Tolr_WBFunctor_T */
    HAL_RLegTarget_Tolr_WBFunctor(HAL_RLegTarget_Tolr_WBFunctor_T* obj, void (HAL_RLegTarget_Tolr_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &), guWhiteboard::WBTypes t): WBFunctor<HAL_RLegTarget_Tolr_WBFunctor_T >(obj, (void (HAL_RLegTarget_Tolr_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class HAL_RLegTarget_Tolr_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::HalLegTarget result = guWhiteboard::HAL_RLegTarget_Tolr_t().get_from(m);
        HAL_RLegTarget_Tolr_function_t funct((void (HAL_RLegTarget_Tolr_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &))WBFunctor<HAL_RLegTarget_Tolr_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<HAL_RLegTarget_Tolr_WBFunctor_T >::fObject->*funct)(WBFunctor<HAL_RLegTarget_Tolr_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (HAL_RLegTarget_Tolr_WBFunctor_T::*HAL_RLegTarget_Tolr_function_t) (guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(HAL_RLegTarget_Tolr_WBFunctor_T *obj, void (HAL_RLegTarget_Tolr_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::HalLegTarget &), guWhiteboard::WBTypes t) { return new HAL_RLegTarget_Tolr_WBFunctor<HAL_RLegTarget_Tolr_WBFunctor_T >(obj, f, t); }
}; 
#endif //HalLegTarget_DEFINED

#ifdef VisionDetectionGoals_DEFINED
/** WBFunctor definition for VisionDetectionGoals_WBFunctor_T */ 
template <typename VisionDetectionGoals_WBFunctor_T >
class VisionDetectionGoals_WBFunctor: public WBFunctor<VisionDetectionGoals_WBFunctor_T > {
public:
    /** WBFunctor constructor for VisionDetectionGoals_WBFunctor_T */
    VisionDetectionGoals_WBFunctor(VisionDetectionGoals_WBFunctor_T* obj, void (VisionDetectionGoals_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::VisionDetectionGoals &), guWhiteboard::WBTypes t): WBFunctor<VisionDetectionGoals_WBFunctor_T >(obj, (void (VisionDetectionGoals_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class VisionDetectionGoals_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::VisionDetectionGoals result = guWhiteboard::VisionDetectionGoals_t().get_from(m);
        VisionDetectionGoals_function_t funct((void (VisionDetectionGoals_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::VisionDetectionGoals &))WBFunctor<VisionDetectionGoals_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<VisionDetectionGoals_WBFunctor_T >::fObject->*funct)(WBFunctor<VisionDetectionGoals_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (VisionDetectionGoals_WBFunctor_T::*VisionDetectionGoals_function_t) (guWhiteboard::WBTypes, guWhiteboard::VisionDetectionGoals &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(VisionDetectionGoals_WBFunctor_T *obj, void (VisionDetectionGoals_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::VisionDetectionGoals &), guWhiteboard::WBTypes t) { return new VisionDetectionGoals_WBFunctor<VisionDetectionGoals_WBFunctor_T >(obj, f, t); }
}; 
#endif //VisionDetectionGoals_DEFINED

#ifdef TeleoperationControl_DEFINED
/** WBFunctor definition for TeleoperationControl_WBFunctor_T */ 
template <typename TeleoperationControl_WBFunctor_T >
class TeleoperationControl_WBFunctor: public WBFunctor<TeleoperationControl_WBFunctor_T > {
public:
    /** WBFunctor constructor for TeleoperationControl_WBFunctor_T */
    TeleoperationControl_WBFunctor(TeleoperationControl_WBFunctor_T* obj, void (TeleoperationControl_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::TeleoperationControl &), guWhiteboard::WBTypes t): WBFunctor<TeleoperationControl_WBFunctor_T >(obj, (void (TeleoperationControl_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class TeleoperationControl_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::TeleoperationControl result = guWhiteboard::TeleoperationControl_t().get_from(m);
        TeleoperationControl_function_t funct((void (TeleoperationControl_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::TeleoperationControl &))WBFunctor<TeleoperationControl_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<TeleoperationControl_WBFunctor_T >::fObject->*funct)(WBFunctor<TeleoperationControl_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (TeleoperationControl_WBFunctor_T::*TeleoperationControl_function_t) (guWhiteboard::WBTypes, guWhiteboard::TeleoperationControl &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(TeleoperationControl_WBFunctor_T *obj, void (TeleoperationControl_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::TeleoperationControl &), guWhiteboard::WBTypes t) { return new TeleoperationControl_WBFunctor<TeleoperationControl_WBFunctor_T >(obj, f, t); }
}; 
#endif //TeleoperationControl_DEFINED

#ifdef TeleoperationStatus_DEFINED
/** WBFunctor definition for TeleoperationStatus_WBFunctor_T */ 
template <typename TeleoperationStatus_WBFunctor_T >
class TeleoperationStatus_WBFunctor: public WBFunctor<TeleoperationStatus_WBFunctor_T > {
public:
    /** WBFunctor constructor for TeleoperationStatus_WBFunctor_T */
    TeleoperationStatus_WBFunctor(TeleoperationStatus_WBFunctor_T* obj, void (TeleoperationStatus_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::TeleoperationStatus &), guWhiteboard::WBTypes t): WBFunctor<TeleoperationStatus_WBFunctor_T >(obj, (void (TeleoperationStatus_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class TeleoperationStatus_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::TeleoperationStatus result = guWhiteboard::TeleoperationStatus_t().get_from(m);
        TeleoperationStatus_function_t funct((void (TeleoperationStatus_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::TeleoperationStatus &))WBFunctor<TeleoperationStatus_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<TeleoperationStatus_WBFunctor_T >::fObject->*funct)(WBFunctor<TeleoperationStatus_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (TeleoperationStatus_WBFunctor_T::*TeleoperationStatus_function_t) (guWhiteboard::WBTypes, guWhiteboard::TeleoperationStatus &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(TeleoperationStatus_WBFunctor_T *obj, void (TeleoperationStatus_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::TeleoperationStatus &), guWhiteboard::WBTypes t) { return new TeleoperationStatus_WBFunctor<TeleoperationStatus_WBFunctor_T >(obj, f, t); }
}; 
#endif //TeleoperationStatus_DEFINED

#ifdef VisionDetectionBalls_DEFINED
/** WBFunctor definition for VisionDetectionBalls_WBFunctor_T */ 
template <typename VisionDetectionBalls_WBFunctor_T >
class VisionDetectionBalls_WBFunctor: public WBFunctor<VisionDetectionBalls_WBFunctor_T > {
public:
    /** WBFunctor constructor for VisionDetectionBalls_WBFunctor_T */
    VisionDetectionBalls_WBFunctor(VisionDetectionBalls_WBFunctor_T* obj, void (VisionDetectionBalls_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::VisionDetectionBalls &), guWhiteboard::WBTypes t): WBFunctor<VisionDetectionBalls_WBFunctor_T >(obj, (void (VisionDetectionBalls_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class VisionDetectionBalls_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::VisionDetectionBalls result = guWhiteboard::VisionDetectionBalls_t().get_from(m);
        VisionDetectionBalls_function_t funct((void (VisionDetectionBalls_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::VisionDetectionBalls &))WBFunctor<VisionDetectionBalls_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<VisionDetectionBalls_WBFunctor_T >::fObject->*funct)(WBFunctor<VisionDetectionBalls_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (VisionDetectionBalls_WBFunctor_T::*VisionDetectionBalls_function_t) (guWhiteboard::WBTypes, guWhiteboard::VisionDetectionBalls &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(VisionDetectionBalls_WBFunctor_T *obj, void (VisionDetectionBalls_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::VisionDetectionBalls &), guWhiteboard::WBTypes t) { return new VisionDetectionBalls_WBFunctor<VisionDetectionBalls_WBFunctor_T >(obj, f, t); }
}; 
#endif //VisionDetectionBalls_DEFINED

#ifdef TeleoperationControlVR_DEFINED
/** WBFunctor definition for TeleoperationControlVR_WBFunctor_T */ 
template <typename TeleoperationControlVR_WBFunctor_T >
class TeleoperationControlVR_WBFunctor: public WBFunctor<TeleoperationControlVR_WBFunctor_T > {
public:
    /** WBFunctor constructor for TeleoperationControlVR_WBFunctor_T */
    TeleoperationControlVR_WBFunctor(TeleoperationControlVR_WBFunctor_T* obj, void (TeleoperationControlVR_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::TeleoperationControlVR &), guWhiteboard::WBTypes t): WBFunctor<TeleoperationControlVR_WBFunctor_T >(obj, (void (TeleoperationControlVR_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class TeleoperationControlVR_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::TeleoperationControlVR result = guWhiteboard::TeleoperationControlVR_t().get_from(m);
        TeleoperationControlVR_function_t funct((void (TeleoperationControlVR_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::TeleoperationControlVR &))WBFunctor<TeleoperationControlVR_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<TeleoperationControlVR_WBFunctor_T >::fObject->*funct)(WBFunctor<TeleoperationControlVR_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (TeleoperationControlVR_WBFunctor_T::*TeleoperationControlVR_function_t) (guWhiteboard::WBTypes, guWhiteboard::TeleoperationControlVR &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(TeleoperationControlVR_WBFunctor_T *obj, void (TeleoperationControlVR_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::TeleoperationControlVR &), guWhiteboard::WBTypes t) { return new TeleoperationControlVR_WBFunctor<TeleoperationControlVR_WBFunctor_T >(obj, f, t); }
}; 
#endif //TeleoperationControlVR_DEFINED


/** WBFunctor definition for ParticleOutputMap_WBFunctor_T */ 
template <typename ParticleOutputMap_WBFunctor_T >
class ParticleOutputMap_WBFunctor: public WBFunctor<ParticleOutputMap_WBFunctor_T > {
public:
    /** WBFunctor constructor for ParticleOutputMap_WBFunctor_T */
    ParticleOutputMap_WBFunctor(ParticleOutputMap_WBFunctor_T* obj, void (ParticleOutputMap_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, uint64_t &), guWhiteboard::WBTypes t): WBFunctor<ParticleOutputMap_WBFunctor_T >(obj, (void (ParticleOutputMap_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class ParticleOutputMap_WBFunctor */
    void call(gu_simple_message *m) {
        uint64_t result = guWhiteboard::ParticleOutputMap_t().get_from(m);
        ParticleOutputMap_function_t funct((void (ParticleOutputMap_WBFunctor_T::*)(guWhiteboard::WBTypes, uint64_t &))WBFunctor<ParticleOutputMap_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<ParticleOutputMap_WBFunctor_T >::fObject->*funct)(WBFunctor<ParticleOutputMap_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (ParticleOutputMap_WBFunctor_T::*ParticleOutputMap_function_t) (guWhiteboard::WBTypes, uint64_t &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(ParticleOutputMap_WBFunctor_T *obj, void (ParticleOutputMap_WBFunctor_T::*f)(guWhiteboard::WBTypes, uint64_t &), guWhiteboard::WBTypes t) { return new ParticleOutputMap_WBFunctor<ParticleOutputMap_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for ParticleOutputMapControl_WBFunctor_T */ 
template <typename ParticleOutputMapControl_WBFunctor_T >
class ParticleOutputMapControl_WBFunctor: public WBFunctor<ParticleOutputMapControl_WBFunctor_T > {
public:
    /** WBFunctor constructor for ParticleOutputMapControl_WBFunctor_T */
    ParticleOutputMapControl_WBFunctor(ParticleOutputMapControl_WBFunctor_T* obj, void (ParticleOutputMapControl_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<ParticleOutputMapControl_WBFunctor_T >(obj, (void (ParticleOutputMapControl_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class ParticleOutputMapControl_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::ParticleOutputMapControl_t().get_from(m);
        ParticleOutputMapControl_function_t funct((void (ParticleOutputMapControl_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<ParticleOutputMapControl_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<ParticleOutputMapControl_WBFunctor_T >::fObject->*funct)(WBFunctor<ParticleOutputMapControl_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (ParticleOutputMapControl_WBFunctor_T::*ParticleOutputMapControl_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(ParticleOutputMapControl_WBFunctor_T *obj, void (ParticleOutputMapControl_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new ParticleOutputMapControl_WBFunctor<ParticleOutputMapControl_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for FFTControl_WBFunctor_T */ 
template <typename FFTControl_WBFunctor_T >
class FFTControl_WBFunctor: public WBFunctor<FFTControl_WBFunctor_T > {
public:
    /** WBFunctor constructor for FFTControl_WBFunctor_T */
    FFTControl_WBFunctor(FFTControl_WBFunctor_T* obj, void (FFTControl_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<FFTControl_WBFunctor_T >(obj, (void (FFTControl_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class FFTControl_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::FFTControl_t().get_from(m);
        FFTControl_function_t funct((void (FFTControl_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<FFTControl_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<FFTControl_WBFunctor_T >::fObject->*funct)(WBFunctor<FFTControl_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (FFTControl_WBFunctor_T::*FFTControl_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(FFTControl_WBFunctor_T *obj, void (FFTControl_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new FFTControl_WBFunctor<FFTControl_WBFunctor_T >(obj, f, t); }
}; 


#ifdef MachineFilteredVision_DEFINED
/** WBFunctor definition for MachineFilteredNaoVision_WBFunctor_T */ 
template <typename MachineFilteredNaoVision_WBFunctor_T >
class MachineFilteredNaoVision_WBFunctor: public WBFunctor<MachineFilteredNaoVision_WBFunctor_T > {
public:
    /** WBFunctor constructor for MachineFilteredNaoVision_WBFunctor_T */
    MachineFilteredNaoVision_WBFunctor(MachineFilteredNaoVision_WBFunctor_T* obj, void (MachineFilteredNaoVision_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::MachineFilteredVision &), guWhiteboard::WBTypes t): WBFunctor<MachineFilteredNaoVision_WBFunctor_T >(obj, (void (MachineFilteredNaoVision_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class MachineFilteredNaoVision_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::MachineFilteredVision result = guWhiteboard::MachineFilteredNaoVision_t().get_from(m);
        MachineFilteredNaoVision_function_t funct((void (MachineFilteredNaoVision_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::MachineFilteredVision &))WBFunctor<MachineFilteredNaoVision_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<MachineFilteredNaoVision_WBFunctor_T >::fObject->*funct)(WBFunctor<MachineFilteredNaoVision_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (MachineFilteredNaoVision_WBFunctor_T::*MachineFilteredNaoVision_function_t) (guWhiteboard::WBTypes, guWhiteboard::MachineFilteredVision &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(MachineFilteredNaoVision_WBFunctor_T *obj, void (MachineFilteredNaoVision_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::MachineFilteredVision &), guWhiteboard::WBTypes t) { return new MachineFilteredNaoVision_WBFunctor<MachineFilteredNaoVision_WBFunctor_T >(obj, f, t); }
}; 
#endif //MachineFilteredVision_DEFINED

#ifdef MicrowaveStatus_DEFINED
/** WBFunctor definition for MicrowaveStatus_WBFunctor_T */ 
template <typename MicrowaveStatus_WBFunctor_T >
class MicrowaveStatus_WBFunctor: public WBFunctor<MicrowaveStatus_WBFunctor_T > {
public:
    /** WBFunctor constructor for MicrowaveStatus_WBFunctor_T */
    MicrowaveStatus_WBFunctor(MicrowaveStatus_WBFunctor_T* obj, void (MicrowaveStatus_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::MicrowaveStatus &), guWhiteboard::WBTypes t): WBFunctor<MicrowaveStatus_WBFunctor_T >(obj, (void (MicrowaveStatus_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class MicrowaveStatus_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::MicrowaveStatus result = guWhiteboard::MicrowaveStatus_t().get_from(m);
        MicrowaveStatus_function_t funct((void (MicrowaveStatus_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::MicrowaveStatus &))WBFunctor<MicrowaveStatus_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<MicrowaveStatus_WBFunctor_T >::fObject->*funct)(WBFunctor<MicrowaveStatus_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (MicrowaveStatus_WBFunctor_T::*MicrowaveStatus_function_t) (guWhiteboard::WBTypes, guWhiteboard::MicrowaveStatus &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(MicrowaveStatus_WBFunctor_T *obj, void (MicrowaveStatus_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::MicrowaveStatus &), guWhiteboard::WBTypes t) { return new MicrowaveStatus_WBFunctor<MicrowaveStatus_WBFunctor_T >(obj, f, t); }
}; 
#endif //MicrowaveStatus_DEFINED

#ifdef Buttons_DEFINED
/** WBFunctor definition for Buttons_WBFunctor_T */ 
template <typename Buttons_WBFunctor_T >
class Buttons_WBFunctor: public WBFunctor<Buttons_WBFunctor_T > {
public:
    /** WBFunctor constructor for Buttons_WBFunctor_T */
    Buttons_WBFunctor(Buttons_WBFunctor_T* obj, void (Buttons_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::Buttons &), guWhiteboard::WBTypes t): WBFunctor<Buttons_WBFunctor_T >(obj, (void (Buttons_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Buttons_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::Buttons result = guWhiteboard::Buttons_t().get_from(m);
        Buttons_function_t funct((void (Buttons_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::Buttons &))WBFunctor<Buttons_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Buttons_WBFunctor_T >::fObject->*funct)(WBFunctor<Buttons_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Buttons_WBFunctor_T::*Buttons_function_t) (guWhiteboard::WBTypes, guWhiteboard::Buttons &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Buttons_WBFunctor_T *obj, void (Buttons_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::Buttons &), guWhiteboard::WBTypes t) { return new Buttons_WBFunctor<Buttons_WBFunctor_T >(obj, f, t); }
}; 
#endif //Buttons_DEFINED

#ifdef MachineFilteredLocalisationVision_DEFINED
/** WBFunctor definition for MachineFilteredLocalisationVision_WBFunctor_T */ 
template <typename MachineFilteredLocalisationVision_WBFunctor_T >
class MachineFilteredLocalisationVision_WBFunctor: public WBFunctor<MachineFilteredLocalisationVision_WBFunctor_T > {
public:
    /** WBFunctor constructor for MachineFilteredLocalisationVision_WBFunctor_T */
    MachineFilteredLocalisationVision_WBFunctor(MachineFilteredLocalisationVision_WBFunctor_T* obj, void (MachineFilteredLocalisationVision_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::MachineFilteredLocalisationVision &), guWhiteboard::WBTypes t): WBFunctor<MachineFilteredLocalisationVision_WBFunctor_T >(obj, (void (MachineFilteredLocalisationVision_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class MachineFilteredLocalisationVision_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::MachineFilteredLocalisationVision result = guWhiteboard::MachineFilteredLocalisationVision_t().get_from(m);
        MachineFilteredLocalisationVision_function_t funct((void (MachineFilteredLocalisationVision_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::MachineFilteredLocalisationVision &))WBFunctor<MachineFilteredLocalisationVision_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<MachineFilteredLocalisationVision_WBFunctor_T >::fObject->*funct)(WBFunctor<MachineFilteredLocalisationVision_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (MachineFilteredLocalisationVision_WBFunctor_T::*MachineFilteredLocalisationVision_function_t) (guWhiteboard::WBTypes, guWhiteboard::MachineFilteredLocalisationVision &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(MachineFilteredLocalisationVision_WBFunctor_T *obj, void (MachineFilteredLocalisationVision_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::MachineFilteredLocalisationVision &), guWhiteboard::WBTypes t) { return new MachineFilteredLocalisationVision_WBFunctor<MachineFilteredLocalisationVision_WBFunctor_T >(obj, f, t); }
}; 
#endif //MachineFilteredLocalisationVision_DEFINED

#ifdef NaoJointListFloat_DEFINED
/** WBFunctor definition for SensorsJointCurrent_WBFunctor_T */ 
template <typename SensorsJointCurrent_WBFunctor_T >
class SensorsJointCurrent_WBFunctor: public WBFunctor<SensorsJointCurrent_WBFunctor_T > {
public:
    /** WBFunctor constructor for SensorsJointCurrent_WBFunctor_T */
    SensorsJointCurrent_WBFunctor(SensorsJointCurrent_WBFunctor_T* obj, void (SensorsJointCurrent_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::NaoJointListFloat &), guWhiteboard::WBTypes t): WBFunctor<SensorsJointCurrent_WBFunctor_T >(obj, (void (SensorsJointCurrent_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class SensorsJointCurrent_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::NaoJointListFloat result = guWhiteboard::SensorsJointCurrent_t().get_from(m);
        SensorsJointCurrent_function_t funct((void (SensorsJointCurrent_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::NaoJointListFloat &))WBFunctor<SensorsJointCurrent_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<SensorsJointCurrent_WBFunctor_T >::fObject->*funct)(WBFunctor<SensorsJointCurrent_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (SensorsJointCurrent_WBFunctor_T::*SensorsJointCurrent_function_t) (guWhiteboard::WBTypes, guWhiteboard::NaoJointListFloat &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(SensorsJointCurrent_WBFunctor_T *obj, void (SensorsJointCurrent_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::NaoJointListFloat &), guWhiteboard::WBTypes t) { return new SensorsJointCurrent_WBFunctor<SensorsJointCurrent_WBFunctor_T >(obj, f, t); }
}; 
#endif //NaoJointListFloat_DEFINED

#ifdef DataLogger_DEFINED
/** WBFunctor definition for DataLogger_WBFunctor_T */ 
template <typename DataLogger_WBFunctor_T >
class DataLogger_WBFunctor: public WBFunctor<DataLogger_WBFunctor_T > {
public:
    /** WBFunctor constructor for DataLogger_WBFunctor_T */
    DataLogger_WBFunctor(DataLogger_WBFunctor_T* obj, void (DataLogger_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::DataLogger &), guWhiteboard::WBTypes t): WBFunctor<DataLogger_WBFunctor_T >(obj, (void (DataLogger_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class DataLogger_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::DataLogger result = guWhiteboard::DataLogger_t().get_from(m);
        DataLogger_function_t funct((void (DataLogger_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::DataLogger &))WBFunctor<DataLogger_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<DataLogger_WBFunctor_T >::fObject->*funct)(WBFunctor<DataLogger_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (DataLogger_WBFunctor_T::*DataLogger_function_t) (guWhiteboard::WBTypes, guWhiteboard::DataLogger &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(DataLogger_WBFunctor_T *obj, void (DataLogger_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::DataLogger &), guWhiteboard::WBTypes t) { return new DataLogger_WBFunctor<DataLogger_WBFunctor_T >(obj, f, t); }
}; 
#endif //DataLogger_DEFINED

#ifdef MachineFilteredLines_DEFINED
/** WBFunctor definition for MachineFilteredLines_WBFunctor_T */ 
template <typename MachineFilteredLines_WBFunctor_T >
class MachineFilteredLines_WBFunctor: public WBFunctor<MachineFilteredLines_WBFunctor_T > {
public:
    /** WBFunctor constructor for MachineFilteredLines_WBFunctor_T */
    MachineFilteredLines_WBFunctor(MachineFilteredLines_WBFunctor_T* obj, void (MachineFilteredLines_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::MachineFilteredLines &), guWhiteboard::WBTypes t): WBFunctor<MachineFilteredLines_WBFunctor_T >(obj, (void (MachineFilteredLines_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class MachineFilteredLines_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::MachineFilteredLines result = guWhiteboard::MachineFilteredLines_t().get_from(m);
        MachineFilteredLines_function_t funct((void (MachineFilteredLines_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::MachineFilteredLines &))WBFunctor<MachineFilteredLines_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<MachineFilteredLines_WBFunctor_T >::fObject->*funct)(WBFunctor<MachineFilteredLines_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (MachineFilteredLines_WBFunctor_T::*MachineFilteredLines_function_t) (guWhiteboard::WBTypes, guWhiteboard::MachineFilteredLines &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(MachineFilteredLines_WBFunctor_T *obj, void (MachineFilteredLines_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::MachineFilteredLines &), guWhiteboard::WBTypes t) { return new MachineFilteredLines_WBFunctor<MachineFilteredLines_WBFunctor_T >(obj, f, t); }
}; 
#endif //MachineFilteredLines_DEFINED

#ifdef Location_DEFINED
/** WBFunctor definition for BallLocation_WBFunctor_T */ 
template <typename BallLocation_WBFunctor_T >
class BallLocation_WBFunctor: public WBFunctor<BallLocation_WBFunctor_T > {
public:
    /** WBFunctor constructor for BallLocation_WBFunctor_T */
    BallLocation_WBFunctor(BallLocation_WBFunctor_T* obj, void (BallLocation_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::Location &), guWhiteboard::WBTypes t): WBFunctor<BallLocation_WBFunctor_T >(obj, (void (BallLocation_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class BallLocation_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::Location result = guWhiteboard::BallLocation_t().get_from(m);
        BallLocation_function_t funct((void (BallLocation_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::Location &))WBFunctor<BallLocation_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<BallLocation_WBFunctor_T >::fObject->*funct)(WBFunctor<BallLocation_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (BallLocation_WBFunctor_T::*BallLocation_function_t) (guWhiteboard::WBTypes, guWhiteboard::Location &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(BallLocation_WBFunctor_T *obj, void (BallLocation_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::Location &), guWhiteboard::WBTypes t) { return new BallLocation_WBFunctor<BallLocation_WBFunctor_T >(obj, f, t); }
}; 
#endif //Location_DEFINED

#ifdef Location_DEFINED
/** WBFunctor definition for LeftGoalPostLocation_WBFunctor_T */ 
template <typename LeftGoalPostLocation_WBFunctor_T >
class LeftGoalPostLocation_WBFunctor: public WBFunctor<LeftGoalPostLocation_WBFunctor_T > {
public:
    /** WBFunctor constructor for LeftGoalPostLocation_WBFunctor_T */
    LeftGoalPostLocation_WBFunctor(LeftGoalPostLocation_WBFunctor_T* obj, void (LeftGoalPostLocation_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::Location &), guWhiteboard::WBTypes t): WBFunctor<LeftGoalPostLocation_WBFunctor_T >(obj, (void (LeftGoalPostLocation_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class LeftGoalPostLocation_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::Location result = guWhiteboard::LeftGoalPostLocation_t().get_from(m);
        LeftGoalPostLocation_function_t funct((void (LeftGoalPostLocation_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::Location &))WBFunctor<LeftGoalPostLocation_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<LeftGoalPostLocation_WBFunctor_T >::fObject->*funct)(WBFunctor<LeftGoalPostLocation_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (LeftGoalPostLocation_WBFunctor_T::*LeftGoalPostLocation_function_t) (guWhiteboard::WBTypes, guWhiteboard::Location &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(LeftGoalPostLocation_WBFunctor_T *obj, void (LeftGoalPostLocation_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::Location &), guWhiteboard::WBTypes t) { return new LeftGoalPostLocation_WBFunctor<LeftGoalPostLocation_WBFunctor_T >(obj, f, t); }
}; 
#endif //Location_DEFINED

#ifdef Location_DEFINED
/** WBFunctor definition for RightGoalPostLocation_WBFunctor_T */ 
template <typename RightGoalPostLocation_WBFunctor_T >
class RightGoalPostLocation_WBFunctor: public WBFunctor<RightGoalPostLocation_WBFunctor_T > {
public:
    /** WBFunctor constructor for RightGoalPostLocation_WBFunctor_T */
    RightGoalPostLocation_WBFunctor(RightGoalPostLocation_WBFunctor_T* obj, void (RightGoalPostLocation_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::Location &), guWhiteboard::WBTypes t): WBFunctor<RightGoalPostLocation_WBFunctor_T >(obj, (void (RightGoalPostLocation_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class RightGoalPostLocation_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::Location result = guWhiteboard::RightGoalPostLocation_t().get_from(m);
        RightGoalPostLocation_function_t funct((void (RightGoalPostLocation_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::Location &))WBFunctor<RightGoalPostLocation_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<RightGoalPostLocation_WBFunctor_T >::fObject->*funct)(WBFunctor<RightGoalPostLocation_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (RightGoalPostLocation_WBFunctor_T::*RightGoalPostLocation_function_t) (guWhiteboard::WBTypes, guWhiteboard::Location &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(RightGoalPostLocation_WBFunctor_T *obj, void (RightGoalPostLocation_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::Location &), guWhiteboard::WBTypes t) { return new RightGoalPostLocation_WBFunctor<RightGoalPostLocation_WBFunctor_T >(obj, f, t); }
}; 
#endif //Location_DEFINED

#ifdef Location_DEFINED
/** WBFunctor definition for GoalLocation_WBFunctor_T */ 
template <typename GoalLocation_WBFunctor_T >
class GoalLocation_WBFunctor: public WBFunctor<GoalLocation_WBFunctor_T > {
public:
    /** WBFunctor constructor for GoalLocation_WBFunctor_T */
    GoalLocation_WBFunctor(GoalLocation_WBFunctor_T* obj, void (GoalLocation_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::Location &), guWhiteboard::WBTypes t): WBFunctor<GoalLocation_WBFunctor_T >(obj, (void (GoalLocation_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class GoalLocation_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::Location result = guWhiteboard::GoalLocation_t().get_from(m);
        GoalLocation_function_t funct((void (GoalLocation_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::Location &))WBFunctor<GoalLocation_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<GoalLocation_WBFunctor_T >::fObject->*funct)(WBFunctor<GoalLocation_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (GoalLocation_WBFunctor_T::*GoalLocation_function_t) (guWhiteboard::WBTypes, guWhiteboard::Location &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(GoalLocation_WBFunctor_T *obj, void (GoalLocation_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::Location &), guWhiteboard::WBTypes t) { return new GoalLocation_WBFunctor<GoalLocation_WBFunctor_T >(obj, f, t); }
}; 
#endif //Location_DEFINED

#ifdef NaoSonarProtectedWalkCommand_DEFINED
/** WBFunctor definition for NaoSonarProtectedWalkCommand_WBFunctor_T */ 
template <typename NaoSonarProtectedWalkCommand_WBFunctor_T >
class NaoSonarProtectedWalkCommand_WBFunctor: public WBFunctor<NaoSonarProtectedWalkCommand_WBFunctor_T > {
public:
    /** WBFunctor constructor for NaoSonarProtectedWalkCommand_WBFunctor_T */
    NaoSonarProtectedWalkCommand_WBFunctor(NaoSonarProtectedWalkCommand_WBFunctor_T* obj, void (NaoSonarProtectedWalkCommand_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::NaoSonarProtectedWalkCommand &), guWhiteboard::WBTypes t): WBFunctor<NaoSonarProtectedWalkCommand_WBFunctor_T >(obj, (void (NaoSonarProtectedWalkCommand_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class NaoSonarProtectedWalkCommand_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::NaoSonarProtectedWalkCommand result = guWhiteboard::NaoSonarProtectedWalkCommand_t().get_from(m);
        NaoSonarProtectedWalkCommand_function_t funct((void (NaoSonarProtectedWalkCommand_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::NaoSonarProtectedWalkCommand &))WBFunctor<NaoSonarProtectedWalkCommand_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<NaoSonarProtectedWalkCommand_WBFunctor_T >::fObject->*funct)(WBFunctor<NaoSonarProtectedWalkCommand_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (NaoSonarProtectedWalkCommand_WBFunctor_T::*NaoSonarProtectedWalkCommand_function_t) (guWhiteboard::WBTypes, guWhiteboard::NaoSonarProtectedWalkCommand &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(NaoSonarProtectedWalkCommand_WBFunctor_T *obj, void (NaoSonarProtectedWalkCommand_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::NaoSonarProtectedWalkCommand &), guWhiteboard::WBTypes t) { return new NaoSonarProtectedWalkCommand_WBFunctor<NaoSonarProtectedWalkCommand_WBFunctor_T >(obj, f, t); }
}; 
#endif //NaoSonarProtectedWalkCommand_DEFINED

#ifdef NaoObstacleDirection_DEFINED
/** WBFunctor definition for NaoObstacleDirection_WBFunctor_T */ 
template <typename NaoObstacleDirection_WBFunctor_T >
class NaoObstacleDirection_WBFunctor: public WBFunctor<NaoObstacleDirection_WBFunctor_T > {
public:
    /** WBFunctor constructor for NaoObstacleDirection_WBFunctor_T */
    NaoObstacleDirection_WBFunctor(NaoObstacleDirection_WBFunctor_T* obj, void (NaoObstacleDirection_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::NaoObstacleDirection &), guWhiteboard::WBTypes t): WBFunctor<NaoObstacleDirection_WBFunctor_T >(obj, (void (NaoObstacleDirection_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class NaoObstacleDirection_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::NaoObstacleDirection result = guWhiteboard::NaoObstacleDirection_t().get_from(m);
        NaoObstacleDirection_function_t funct((void (NaoObstacleDirection_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::NaoObstacleDirection &))WBFunctor<NaoObstacleDirection_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<NaoObstacleDirection_WBFunctor_T >::fObject->*funct)(WBFunctor<NaoObstacleDirection_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (NaoObstacleDirection_WBFunctor_T::*NaoObstacleDirection_function_t) (guWhiteboard::WBTypes, guWhiteboard::NaoObstacleDirection &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(NaoObstacleDirection_WBFunctor_T *obj, void (NaoObstacleDirection_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::NaoObstacleDirection &), guWhiteboard::WBTypes t) { return new NaoObstacleDirection_WBFunctor<NaoObstacleDirection_WBFunctor_T >(obj, f, t); }
}; 
#endif //NaoObstacleDirection_DEFINED

#ifdef DominantFrequencies_DEFINED
/** WBFunctor definition for DominantFrequencies_WBFunctor_T */ 
template <typename DominantFrequencies_WBFunctor_T >
class DominantFrequencies_WBFunctor: public WBFunctor<DominantFrequencies_WBFunctor_T > {
public:
    /** WBFunctor constructor for DominantFrequencies_WBFunctor_T */
    DominantFrequencies_WBFunctor(DominantFrequencies_WBFunctor_T* obj, void (DominantFrequencies_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::DominantFrequencies &), guWhiteboard::WBTypes t): WBFunctor<DominantFrequencies_WBFunctor_T >(obj, (void (DominantFrequencies_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class DominantFrequencies_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::DominantFrequencies result = guWhiteboard::DominantFrequencies_t().get_from(m);
        DominantFrequencies_function_t funct((void (DominantFrequencies_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::DominantFrequencies &))WBFunctor<DominantFrequencies_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<DominantFrequencies_WBFunctor_T >::fObject->*funct)(WBFunctor<DominantFrequencies_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (DominantFrequencies_WBFunctor_T::*DominantFrequencies_function_t) (guWhiteboard::WBTypes, guWhiteboard::DominantFrequencies &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(DominantFrequencies_WBFunctor_T *obj, void (DominantFrequencies_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::DominantFrequencies &), guWhiteboard::WBTypes t) { return new DominantFrequencies_WBFunctor<DominantFrequencies_WBFunctor_T >(obj, f, t); }
}; 
#endif //DominantFrequencies_DEFINED

#ifdef MissionPriorityForObstacles_DEFINED
/** WBFunctor definition for MissionPriorityForObstacles_WBFunctor_T */ 
template <typename MissionPriorityForObstacles_WBFunctor_T >
class MissionPriorityForObstacles_WBFunctor: public WBFunctor<MissionPriorityForObstacles_WBFunctor_T > {
public:
    /** WBFunctor constructor for MissionPriorityForObstacles_WBFunctor_T */
    MissionPriorityForObstacles_WBFunctor(MissionPriorityForObstacles_WBFunctor_T* obj, void (MissionPriorityForObstacles_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::MissionPriorityForObstacles &), guWhiteboard::WBTypes t): WBFunctor<MissionPriorityForObstacles_WBFunctor_T >(obj, (void (MissionPriorityForObstacles_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class MissionPriorityForObstacles_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::MissionPriorityForObstacles result = guWhiteboard::MissionPriorityForObstacles_t().get_from(m);
        MissionPriorityForObstacles_function_t funct((void (MissionPriorityForObstacles_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::MissionPriorityForObstacles &))WBFunctor<MissionPriorityForObstacles_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<MissionPriorityForObstacles_WBFunctor_T >::fObject->*funct)(WBFunctor<MissionPriorityForObstacles_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (MissionPriorityForObstacles_WBFunctor_T::*MissionPriorityForObstacles_function_t) (guWhiteboard::WBTypes, guWhiteboard::MissionPriorityForObstacles &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(MissionPriorityForObstacles_WBFunctor_T *obj, void (MissionPriorityForObstacles_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::MissionPriorityForObstacles &), guWhiteboard::WBTypes t) { return new MissionPriorityForObstacles_WBFunctor<MissionPriorityForObstacles_WBFunctor_T >(obj, f, t); }
}; 
#endif //MissionPriorityForObstacles_DEFINED


/** WBFunctor definition for WavLoad_WBFunctor_T */ 
template <typename WavLoad_WBFunctor_T >
class WavLoad_WBFunctor: public WBFunctor<WavLoad_WBFunctor_T > {
public:
    /** WBFunctor constructor for WavLoad_WBFunctor_T */
    WavLoad_WBFunctor(WavLoad_WBFunctor_T* obj, void (WavLoad_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, std::string &), guWhiteboard::WBTypes t): WBFunctor<WavLoad_WBFunctor_T >(obj, (void (WavLoad_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class WavLoad_WBFunctor */
    void call(gu_simple_message *m) {
        std::string result = guWhiteboard::WavLoad_t().get_from(m);
        WavLoad_function_t funct((void (WavLoad_WBFunctor_T::*)(guWhiteboard::WBTypes, std::string &))WBFunctor<WavLoad_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<WavLoad_WBFunctor_T >::fObject->*funct)(WBFunctor<WavLoad_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (WavLoad_WBFunctor_T::*WavLoad_function_t) (guWhiteboard::WBTypes, std::string &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(WavLoad_WBFunctor_T *obj, void (WavLoad_WBFunctor_T::*f)(guWhiteboard::WBTypes, std::string &), guWhiteboard::WBTypes t) { return new WavLoad_WBFunctor<WavLoad_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for WavPlay_WBFunctor_T */ 
template <typename WavPlay_WBFunctor_T >
class WavPlay_WBFunctor: public WBFunctor<WavPlay_WBFunctor_T > {
public:
    /** WBFunctor constructor for WavPlay_WBFunctor_T */
    WavPlay_WBFunctor(WavPlay_WBFunctor_T* obj, void (WavPlay_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<WavPlay_WBFunctor_T >(obj, (void (WavPlay_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class WavPlay_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::WavPlay_t().get_from(m);
        WavPlay_function_t funct((void (WavPlay_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<WavPlay_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<WavPlay_WBFunctor_T >::fObject->*funct)(WBFunctor<WavPlay_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (WavPlay_WBFunctor_T::*WavPlay_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(WavPlay_WBFunctor_T *obj, void (WavPlay_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new WavPlay_WBFunctor<WavPlay_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for ReproduceWavNotSilent_WBFunctor_T */ 
template <typename ReproduceWavNotSilent_WBFunctor_T >
class ReproduceWavNotSilent_WBFunctor: public WBFunctor<ReproduceWavNotSilent_WBFunctor_T > {
public:
    /** WBFunctor constructor for ReproduceWavNotSilent_WBFunctor_T */
    ReproduceWavNotSilent_WBFunctor(ReproduceWavNotSilent_WBFunctor_T* obj, void (ReproduceWavNotSilent_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<ReproduceWavNotSilent_WBFunctor_T >(obj, (void (ReproduceWavNotSilent_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class ReproduceWavNotSilent_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::ReproduceWavNotSilent_t().get_from(m);
        ReproduceWavNotSilent_function_t funct((void (ReproduceWavNotSilent_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<ReproduceWavNotSilent_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<ReproduceWavNotSilent_WBFunctor_T >::fObject->*funct)(WBFunctor<ReproduceWavNotSilent_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (ReproduceWavNotSilent_WBFunctor_T::*ReproduceWavNotSilent_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(ReproduceWavNotSilent_WBFunctor_T *obj, void (ReproduceWavNotSilent_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new ReproduceWavNotSilent_WBFunctor<ReproduceWavNotSilent_WBFunctor_T >(obj, f, t); }
}; 


#ifdef FrequencyLimits_DEFINED
/** WBFunctor definition for FrequencyControl_WBFunctor_T */ 
template <typename FrequencyControl_WBFunctor_T >
class FrequencyControl_WBFunctor: public WBFunctor<FrequencyControl_WBFunctor_T > {
public:
    /** WBFunctor constructor for FrequencyControl_WBFunctor_T */
    FrequencyControl_WBFunctor(FrequencyControl_WBFunctor_T* obj, void (FrequencyControl_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::FrequencyLimits &), guWhiteboard::WBTypes t): WBFunctor<FrequencyControl_WBFunctor_T >(obj, (void (FrequencyControl_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class FrequencyControl_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::FrequencyLimits result = guWhiteboard::FrequencyControl_t().get_from(m);
        FrequencyControl_function_t funct((void (FrequencyControl_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::FrequencyLimits &))WBFunctor<FrequencyControl_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<FrequencyControl_WBFunctor_T >::fObject->*funct)(WBFunctor<FrequencyControl_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (FrequencyControl_WBFunctor_T::*FrequencyControl_function_t) (guWhiteboard::WBTypes, guWhiteboard::FrequencyLimits &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(FrequencyControl_WBFunctor_T *obj, void (FrequencyControl_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::FrequencyLimits &), guWhiteboard::WBTypes t) { return new FrequencyControl_WBFunctor<FrequencyControl_WBFunctor_T >(obj, f, t); }
}; 
#endif //FrequencyLimits_DEFINED

#ifdef FrequencyLimits_DEFINED
/** WBFunctor definition for FrequencyStatus_WBFunctor_T */ 
template <typename FrequencyStatus_WBFunctor_T >
class FrequencyStatus_WBFunctor: public WBFunctor<FrequencyStatus_WBFunctor_T > {
public:
    /** WBFunctor constructor for FrequencyStatus_WBFunctor_T */
    FrequencyStatus_WBFunctor(FrequencyStatus_WBFunctor_T* obj, void (FrequencyStatus_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::FrequencyLimits &), guWhiteboard::WBTypes t): WBFunctor<FrequencyStatus_WBFunctor_T >(obj, (void (FrequencyStatus_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class FrequencyStatus_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::FrequencyLimits result = guWhiteboard::FrequencyStatus_t().get_from(m);
        FrequencyStatus_function_t funct((void (FrequencyStatus_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::FrequencyLimits &))WBFunctor<FrequencyStatus_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<FrequencyStatus_WBFunctor_T >::fObject->*funct)(WBFunctor<FrequencyStatus_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (FrequencyStatus_WBFunctor_T::*FrequencyStatus_function_t) (guWhiteboard::WBTypes, guWhiteboard::FrequencyLimits &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(FrequencyStatus_WBFunctor_T *obj, void (FrequencyStatus_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::FrequencyLimits &), guWhiteboard::WBTypes t) { return new FrequencyStatus_WBFunctor<FrequencyStatus_WBFunctor_T >(obj, f, t); }
}; 
#endif //FrequencyLimits_DEFINED

#ifdef HeadJointSensors_DEFINED
/** WBFunctor definition for HeadJointSensors_WBFunctor_T */ 
template <typename HeadJointSensors_WBFunctor_T >
class HeadJointSensors_WBFunctor: public WBFunctor<HeadJointSensors_WBFunctor_T > {
public:
    /** WBFunctor constructor for HeadJointSensors_WBFunctor_T */
    HeadJointSensors_WBFunctor(HeadJointSensors_WBFunctor_T* obj, void (HeadJointSensors_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::HeadJointSensors &), guWhiteboard::WBTypes t): WBFunctor<HeadJointSensors_WBFunctor_T >(obj, (void (HeadJointSensors_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class HeadJointSensors_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::HeadJointSensors result = guWhiteboard::HeadJointSensors_t().get_from(m);
        HeadJointSensors_function_t funct((void (HeadJointSensors_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::HeadJointSensors &))WBFunctor<HeadJointSensors_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<HeadJointSensors_WBFunctor_T >::fObject->*funct)(WBFunctor<HeadJointSensors_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (HeadJointSensors_WBFunctor_T::*HeadJointSensors_function_t) (guWhiteboard::WBTypes, guWhiteboard::HeadJointSensors &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(HeadJointSensors_WBFunctor_T *obj, void (HeadJointSensors_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::HeadJointSensors &), guWhiteboard::WBTypes t) { return new HeadJointSensors_WBFunctor<HeadJointSensors_WBFunctor_T >(obj, f, t); }
}; 
#endif //HeadJointSensors_DEFINED

#ifdef AdjustPositionConfidence_DEFINED
/** WBFunctor definition for AdjustPositionConfidence_WBFunctor_T */ 
template <typename AdjustPositionConfidence_WBFunctor_T >
class AdjustPositionConfidence_WBFunctor: public WBFunctor<AdjustPositionConfidence_WBFunctor_T > {
public:
    /** WBFunctor constructor for AdjustPositionConfidence_WBFunctor_T */
    AdjustPositionConfidence_WBFunctor(AdjustPositionConfidence_WBFunctor_T* obj, void (AdjustPositionConfidence_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::AdjustPositionConfidence &), guWhiteboard::WBTypes t): WBFunctor<AdjustPositionConfidence_WBFunctor_T >(obj, (void (AdjustPositionConfidence_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class AdjustPositionConfidence_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::AdjustPositionConfidence result = guWhiteboard::AdjustPositionConfidence_t().get_from(m);
        AdjustPositionConfidence_function_t funct((void (AdjustPositionConfidence_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::AdjustPositionConfidence &))WBFunctor<AdjustPositionConfidence_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<AdjustPositionConfidence_WBFunctor_T >::fObject->*funct)(WBFunctor<AdjustPositionConfidence_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (AdjustPositionConfidence_WBFunctor_T::*AdjustPositionConfidence_function_t) (guWhiteboard::WBTypes, guWhiteboard::AdjustPositionConfidence &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(AdjustPositionConfidence_WBFunctor_T *obj, void (AdjustPositionConfidence_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::AdjustPositionConfidence &), guWhiteboard::WBTypes t) { return new AdjustPositionConfidence_WBFunctor<AdjustPositionConfidence_WBFunctor_T >(obj, f, t); }
}; 
#endif //AdjustPositionConfidence_DEFINED

#ifdef GuVrTeleopVulkanControl_DEFINED
/** WBFunctor definition for GuVrTeleopVulkanControl_WBFunctor_T */ 
template <typename GuVrTeleopVulkanControl_WBFunctor_T >
class GuVrTeleopVulkanControl_WBFunctor: public WBFunctor<GuVrTeleopVulkanControl_WBFunctor_T > {
public:
    /** WBFunctor constructor for GuVrTeleopVulkanControl_WBFunctor_T */
    GuVrTeleopVulkanControl_WBFunctor(GuVrTeleopVulkanControl_WBFunctor_T* obj, void (GuVrTeleopVulkanControl_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::GuVrTeleopVulkanControl &), guWhiteboard::WBTypes t): WBFunctor<GuVrTeleopVulkanControl_WBFunctor_T >(obj, (void (GuVrTeleopVulkanControl_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class GuVrTeleopVulkanControl_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::GuVrTeleopVulkanControl result = guWhiteboard::GuVrTeleopVulkanControl_t().get_from(m);
        GuVrTeleopVulkanControl_function_t funct((void (GuVrTeleopVulkanControl_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::GuVrTeleopVulkanControl &))WBFunctor<GuVrTeleopVulkanControl_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<GuVrTeleopVulkanControl_WBFunctor_T >::fObject->*funct)(WBFunctor<GuVrTeleopVulkanControl_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (GuVrTeleopVulkanControl_WBFunctor_T::*GuVrTeleopVulkanControl_function_t) (guWhiteboard::WBTypes, guWhiteboard::GuVrTeleopVulkanControl &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(GuVrTeleopVulkanControl_WBFunctor_T *obj, void (GuVrTeleopVulkanControl_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::GuVrTeleopVulkanControl &), guWhiteboard::WBTypes t) { return new GuVrTeleopVulkanControl_WBFunctor<GuVrTeleopVulkanControl_WBFunctor_T >(obj, f, t); }
}; 
#endif //GuVrTeleopVulkanControl_DEFINED

#ifdef TemperatureSensors_DEFINED
/** WBFunctor definition for TemperatureSensors_WBFunctor_T */ 
template <typename TemperatureSensors_WBFunctor_T >
class TemperatureSensors_WBFunctor: public WBFunctor<TemperatureSensors_WBFunctor_T > {
public:
    /** WBFunctor constructor for TemperatureSensors_WBFunctor_T */
    TemperatureSensors_WBFunctor(TemperatureSensors_WBFunctor_T* obj, void (TemperatureSensors_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::TemperatureSensors &), guWhiteboard::WBTypes t): WBFunctor<TemperatureSensors_WBFunctor_T >(obj, (void (TemperatureSensors_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class TemperatureSensors_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::TemperatureSensors result = guWhiteboard::TemperatureSensors_t().get_from(m);
        TemperatureSensors_function_t funct((void (TemperatureSensors_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::TemperatureSensors &))WBFunctor<TemperatureSensors_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<TemperatureSensors_WBFunctor_T >::fObject->*funct)(WBFunctor<TemperatureSensors_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (TemperatureSensors_WBFunctor_T::*TemperatureSensors_function_t) (guWhiteboard::WBTypes, guWhiteboard::TemperatureSensors &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(TemperatureSensors_WBFunctor_T *obj, void (TemperatureSensors_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::TemperatureSensors &), guWhiteboard::WBTypes t) { return new TemperatureSensors_WBFunctor<TemperatureSensors_WBFunctor_T >(obj, f, t); }
}; 
#endif //TemperatureSensors_DEFINED

#ifdef Overheating_DEFINED
/** WBFunctor definition for Overheating_WBFunctor_T */ 
template <typename Overheating_WBFunctor_T >
class Overheating_WBFunctor: public WBFunctor<Overheating_WBFunctor_T > {
public:
    /** WBFunctor constructor for Overheating_WBFunctor_T */
    Overheating_WBFunctor(Overheating_WBFunctor_T* obj, void (Overheating_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, guWhiteboard::Overheating &), guWhiteboard::WBTypes t): WBFunctor<Overheating_WBFunctor_T >(obj, (void (Overheating_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Overheating_WBFunctor */
    void call(gu_simple_message *m) {
        guWhiteboard::Overheating result = guWhiteboard::Overheating_t().get_from(m);
        Overheating_function_t funct((void (Overheating_WBFunctor_T::*)(guWhiteboard::WBTypes, guWhiteboard::Overheating &))WBFunctor<Overheating_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Overheating_WBFunctor_T >::fObject->*funct)(WBFunctor<Overheating_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Overheating_WBFunctor_T::*Overheating_function_t) (guWhiteboard::WBTypes, guWhiteboard::Overheating &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Overheating_WBFunctor_T *obj, void (Overheating_WBFunctor_T::*f)(guWhiteboard::WBTypes, guWhiteboard::Overheating &), guWhiteboard::WBTypes t) { return new Overheating_WBFunctor<Overheating_WBFunctor_T >(obj, f, t); }
}; 
#endif //Overheating_DEFINED


/** WBFunctor definition for buttonPushed_WBFunctor_T */ 
template <typename buttonPushed_WBFunctor_T >
class buttonPushed_WBFunctor: public WBFunctor<buttonPushed_WBFunctor_T > {
public:
    /** WBFunctor constructor for buttonPushed_WBFunctor_T */
    buttonPushed_WBFunctor(buttonPushed_WBFunctor_T* obj, void (buttonPushed_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<buttonPushed_WBFunctor_T >(obj, (void (buttonPushed_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class buttonPushed_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::buttonPushed_t().get_from(m);
        buttonPushed_function_t funct((void (buttonPushed_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<buttonPushed_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<buttonPushed_WBFunctor_T >::fObject->*funct)(WBFunctor<buttonPushed_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (buttonPushed_WBFunctor_T::*buttonPushed_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(buttonPushed_WBFunctor_T *obj, void (buttonPushed_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new buttonPushed_WBFunctor<buttonPushed_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for doorOpen_WBFunctor_T */ 
template <typename doorOpen_WBFunctor_T >
class doorOpen_WBFunctor: public WBFunctor<doorOpen_WBFunctor_T > {
public:
    /** WBFunctor constructor for doorOpen_WBFunctor_T */
    doorOpen_WBFunctor(doorOpen_WBFunctor_T* obj, void (doorOpen_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<doorOpen_WBFunctor_T >(obj, (void (doorOpen_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class doorOpen_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::doorOpen_t().get_from(m);
        doorOpen_function_t funct((void (doorOpen_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<doorOpen_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<doorOpen_WBFunctor_T >::fObject->*funct)(WBFunctor<doorOpen_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (doorOpen_WBFunctor_T::*doorOpen_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(doorOpen_WBFunctor_T *obj, void (doorOpen_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new doorOpen_WBFunctor<doorOpen_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for timeLeft_WBFunctor_T */ 
template <typename timeLeft_WBFunctor_T >
class timeLeft_WBFunctor: public WBFunctor<timeLeft_WBFunctor_T > {
public:
    /** WBFunctor constructor for timeLeft_WBFunctor_T */
    timeLeft_WBFunctor(timeLeft_WBFunctor_T* obj, void (timeLeft_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<timeLeft_WBFunctor_T >(obj, (void (timeLeft_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class timeLeft_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::timeLeft_t().get_from(m);
        timeLeft_function_t funct((void (timeLeft_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<timeLeft_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<timeLeft_WBFunctor_T >::fObject->*funct)(WBFunctor<timeLeft_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (timeLeft_WBFunctor_T::*timeLeft_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(timeLeft_WBFunctor_T *obj, void (timeLeft_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new timeLeft_WBFunctor<timeLeft_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for motor_WBFunctor_T */ 
template <typename motor_WBFunctor_T >
class motor_WBFunctor: public WBFunctor<motor_WBFunctor_T > {
public:
    /** WBFunctor constructor for motor_WBFunctor_T */
    motor_WBFunctor(motor_WBFunctor_T* obj, void (motor_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<motor_WBFunctor_T >(obj, (void (motor_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class motor_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::motor_t().get_from(m);
        motor_function_t funct((void (motor_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<motor_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<motor_WBFunctor_T >::fObject->*funct)(WBFunctor<motor_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (motor_WBFunctor_T::*motor_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(motor_WBFunctor_T *obj, void (motor_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new motor_WBFunctor<motor_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for sound_WBFunctor_T */ 
template <typename sound_WBFunctor_T >
class sound_WBFunctor: public WBFunctor<sound_WBFunctor_T > {
public:
    /** WBFunctor constructor for sound_WBFunctor_T */
    sound_WBFunctor(sound_WBFunctor_T* obj, void (sound_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<sound_WBFunctor_T >(obj, (void (sound_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class sound_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::sound_t().get_from(m);
        sound_function_t funct((void (sound_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<sound_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<sound_WBFunctor_T >::fObject->*funct)(WBFunctor<sound_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (sound_WBFunctor_T::*sound_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(sound_WBFunctor_T *obj, void (sound_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new sound_WBFunctor<sound_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for light_WBFunctor_T */ 
template <typename light_WBFunctor_T >
class light_WBFunctor: public WBFunctor<light_WBFunctor_T > {
public:
    /** WBFunctor constructor for light_WBFunctor_T */
    light_WBFunctor(light_WBFunctor_T* obj, void (light_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<light_WBFunctor_T >(obj, (void (light_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class light_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::light_t().get_from(m);
        light_function_t funct((void (light_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<light_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<light_WBFunctor_T >::fObject->*funct)(WBFunctor<light_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (light_WBFunctor_T::*light_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(light_WBFunctor_T *obj, void (light_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new light_WBFunctor<light_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Arduino2Pin_WBFunctor_T */ 
template <typename Arduino2Pin_WBFunctor_T >
class Arduino2Pin_WBFunctor: public WBFunctor<Arduino2Pin_WBFunctor_T > {
public:
    /** WBFunctor constructor for Arduino2Pin_WBFunctor_T */
    Arduino2Pin_WBFunctor(Arduino2Pin_WBFunctor_T* obj, void (Arduino2Pin_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<Arduino2Pin_WBFunctor_T >(obj, (void (Arduino2Pin_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Arduino2Pin_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::Arduino2Pin_t().get_from(m);
        Arduino2Pin_function_t funct((void (Arduino2Pin_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<Arduino2Pin_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Arduino2Pin_WBFunctor_T >::fObject->*funct)(WBFunctor<Arduino2Pin_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Arduino2Pin_WBFunctor_T::*Arduino2Pin_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Arduino2Pin_WBFunctor_T *obj, void (Arduino2Pin_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new Arduino2Pin_WBFunctor<Arduino2Pin_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Arduino2PinValue_WBFunctor_T */ 
template <typename Arduino2PinValue_WBFunctor_T >
class Arduino2PinValue_WBFunctor: public WBFunctor<Arduino2PinValue_WBFunctor_T > {
public:
    /** WBFunctor constructor for Arduino2PinValue_WBFunctor_T */
    Arduino2PinValue_WBFunctor(Arduino2PinValue_WBFunctor_T* obj, void (Arduino2PinValue_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<Arduino2PinValue_WBFunctor_T >(obj, (void (Arduino2PinValue_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Arduino2PinValue_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::Arduino2PinValue_t().get_from(m);
        Arduino2PinValue_function_t funct((void (Arduino2PinValue_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<Arduino2PinValue_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Arduino2PinValue_WBFunctor_T >::fObject->*funct)(WBFunctor<Arduino2PinValue_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Arduino2PinValue_WBFunctor_T::*Arduino2PinValue_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Arduino2PinValue_WBFunctor_T *obj, void (Arduino2PinValue_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new Arduino2PinValue_WBFunctor<Arduino2PinValue_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Arduino3Pin_WBFunctor_T */ 
template <typename Arduino3Pin_WBFunctor_T >
class Arduino3Pin_WBFunctor: public WBFunctor<Arduino3Pin_WBFunctor_T > {
public:
    /** WBFunctor constructor for Arduino3Pin_WBFunctor_T */
    Arduino3Pin_WBFunctor(Arduino3Pin_WBFunctor_T* obj, void (Arduino3Pin_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<Arduino3Pin_WBFunctor_T >(obj, (void (Arduino3Pin_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Arduino3Pin_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::Arduino3Pin_t().get_from(m);
        Arduino3Pin_function_t funct((void (Arduino3Pin_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<Arduino3Pin_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Arduino3Pin_WBFunctor_T >::fObject->*funct)(WBFunctor<Arduino3Pin_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Arduino3Pin_WBFunctor_T::*Arduino3Pin_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Arduino3Pin_WBFunctor_T *obj, void (Arduino3Pin_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new Arduino3Pin_WBFunctor<Arduino3Pin_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Arduino3PinValue_WBFunctor_T */ 
template <typename Arduino3PinValue_WBFunctor_T >
class Arduino3PinValue_WBFunctor: public WBFunctor<Arduino3PinValue_WBFunctor_T > {
public:
    /** WBFunctor constructor for Arduino3PinValue_WBFunctor_T */
    Arduino3PinValue_WBFunctor(Arduino3PinValue_WBFunctor_T* obj, void (Arduino3PinValue_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<Arduino3PinValue_WBFunctor_T >(obj, (void (Arduino3PinValue_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Arduino3PinValue_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::Arduino3PinValue_t().get_from(m);
        Arduino3PinValue_function_t funct((void (Arduino3PinValue_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<Arduino3PinValue_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Arduino3PinValue_WBFunctor_T >::fObject->*funct)(WBFunctor<Arduino3PinValue_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Arduino3PinValue_WBFunctor_T::*Arduino3PinValue_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Arduino3PinValue_WBFunctor_T *obj, void (Arduino3PinValue_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new Arduino3PinValue_WBFunctor<Arduino3PinValue_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Arduino4Pin_WBFunctor_T */ 
template <typename Arduino4Pin_WBFunctor_T >
class Arduino4Pin_WBFunctor: public WBFunctor<Arduino4Pin_WBFunctor_T > {
public:
    /** WBFunctor constructor for Arduino4Pin_WBFunctor_T */
    Arduino4Pin_WBFunctor(Arduino4Pin_WBFunctor_T* obj, void (Arduino4Pin_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<Arduino4Pin_WBFunctor_T >(obj, (void (Arduino4Pin_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Arduino4Pin_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::Arduino4Pin_t().get_from(m);
        Arduino4Pin_function_t funct((void (Arduino4Pin_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<Arduino4Pin_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Arduino4Pin_WBFunctor_T >::fObject->*funct)(WBFunctor<Arduino4Pin_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Arduino4Pin_WBFunctor_T::*Arduino4Pin_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Arduino4Pin_WBFunctor_T *obj, void (Arduino4Pin_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new Arduino4Pin_WBFunctor<Arduino4Pin_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Arduino4PinValue_WBFunctor_T */ 
template <typename Arduino4PinValue_WBFunctor_T >
class Arduino4PinValue_WBFunctor: public WBFunctor<Arduino4PinValue_WBFunctor_T > {
public:
    /** WBFunctor constructor for Arduino4PinValue_WBFunctor_T */
    Arduino4PinValue_WBFunctor(Arduino4PinValue_WBFunctor_T* obj, void (Arduino4PinValue_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<Arduino4PinValue_WBFunctor_T >(obj, (void (Arduino4PinValue_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Arduino4PinValue_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::Arduino4PinValue_t().get_from(m);
        Arduino4PinValue_function_t funct((void (Arduino4PinValue_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<Arduino4PinValue_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Arduino4PinValue_WBFunctor_T >::fObject->*funct)(WBFunctor<Arduino4PinValue_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Arduino4PinValue_WBFunctor_T::*Arduino4PinValue_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Arduino4PinValue_WBFunctor_T *obj, void (Arduino4PinValue_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new Arduino4PinValue_WBFunctor<Arduino4PinValue_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Arduino5Pin_WBFunctor_T */ 
template <typename Arduino5Pin_WBFunctor_T >
class Arduino5Pin_WBFunctor: public WBFunctor<Arduino5Pin_WBFunctor_T > {
public:
    /** WBFunctor constructor for Arduino5Pin_WBFunctor_T */
    Arduino5Pin_WBFunctor(Arduino5Pin_WBFunctor_T* obj, void (Arduino5Pin_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<Arduino5Pin_WBFunctor_T >(obj, (void (Arduino5Pin_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Arduino5Pin_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::Arduino5Pin_t().get_from(m);
        Arduino5Pin_function_t funct((void (Arduino5Pin_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<Arduino5Pin_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Arduino5Pin_WBFunctor_T >::fObject->*funct)(WBFunctor<Arduino5Pin_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Arduino5Pin_WBFunctor_T::*Arduino5Pin_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Arduino5Pin_WBFunctor_T *obj, void (Arduino5Pin_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new Arduino5Pin_WBFunctor<Arduino5Pin_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Arduino5PinValue_WBFunctor_T */ 
template <typename Arduino5PinValue_WBFunctor_T >
class Arduino5PinValue_WBFunctor: public WBFunctor<Arduino5PinValue_WBFunctor_T > {
public:
    /** WBFunctor constructor for Arduino5PinValue_WBFunctor_T */
    Arduino5PinValue_WBFunctor(Arduino5PinValue_WBFunctor_T* obj, void (Arduino5PinValue_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<Arduino5PinValue_WBFunctor_T >(obj, (void (Arduino5PinValue_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Arduino5PinValue_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::Arduino5PinValue_t().get_from(m);
        Arduino5PinValue_function_t funct((void (Arduino5PinValue_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<Arduino5PinValue_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Arduino5PinValue_WBFunctor_T >::fObject->*funct)(WBFunctor<Arduino5PinValue_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Arduino5PinValue_WBFunctor_T::*Arduino5PinValue_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Arduino5PinValue_WBFunctor_T *obj, void (Arduino5PinValue_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new Arduino5PinValue_WBFunctor<Arduino5PinValue_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Arduino6Pin_WBFunctor_T */ 
template <typename Arduino6Pin_WBFunctor_T >
class Arduino6Pin_WBFunctor: public WBFunctor<Arduino6Pin_WBFunctor_T > {
public:
    /** WBFunctor constructor for Arduino6Pin_WBFunctor_T */
    Arduino6Pin_WBFunctor(Arduino6Pin_WBFunctor_T* obj, void (Arduino6Pin_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<Arduino6Pin_WBFunctor_T >(obj, (void (Arduino6Pin_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Arduino6Pin_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::Arduino6Pin_t().get_from(m);
        Arduino6Pin_function_t funct((void (Arduino6Pin_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<Arduino6Pin_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Arduino6Pin_WBFunctor_T >::fObject->*funct)(WBFunctor<Arduino6Pin_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Arduino6Pin_WBFunctor_T::*Arduino6Pin_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Arduino6Pin_WBFunctor_T *obj, void (Arduino6Pin_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new Arduino6Pin_WBFunctor<Arduino6Pin_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Arduino6PinValue_WBFunctor_T */ 
template <typename Arduino6PinValue_WBFunctor_T >
class Arduino6PinValue_WBFunctor: public WBFunctor<Arduino6PinValue_WBFunctor_T > {
public:
    /** WBFunctor constructor for Arduino6PinValue_WBFunctor_T */
    Arduino6PinValue_WBFunctor(Arduino6PinValue_WBFunctor_T* obj, void (Arduino6PinValue_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<Arduino6PinValue_WBFunctor_T >(obj, (void (Arduino6PinValue_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Arduino6PinValue_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::Arduino6PinValue_t().get_from(m);
        Arduino6PinValue_function_t funct((void (Arduino6PinValue_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<Arduino6PinValue_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Arduino6PinValue_WBFunctor_T >::fObject->*funct)(WBFunctor<Arduino6PinValue_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Arduino6PinValue_WBFunctor_T::*Arduino6PinValue_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Arduino6PinValue_WBFunctor_T *obj, void (Arduino6PinValue_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new Arduino6PinValue_WBFunctor<Arduino6PinValue_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Arduino7Pin_WBFunctor_T */ 
template <typename Arduino7Pin_WBFunctor_T >
class Arduino7Pin_WBFunctor: public WBFunctor<Arduino7Pin_WBFunctor_T > {
public:
    /** WBFunctor constructor for Arduino7Pin_WBFunctor_T */
    Arduino7Pin_WBFunctor(Arduino7Pin_WBFunctor_T* obj, void (Arduino7Pin_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<Arduino7Pin_WBFunctor_T >(obj, (void (Arduino7Pin_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Arduino7Pin_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::Arduino7Pin_t().get_from(m);
        Arduino7Pin_function_t funct((void (Arduino7Pin_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<Arduino7Pin_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Arduino7Pin_WBFunctor_T >::fObject->*funct)(WBFunctor<Arduino7Pin_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Arduino7Pin_WBFunctor_T::*Arduino7Pin_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Arduino7Pin_WBFunctor_T *obj, void (Arduino7Pin_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new Arduino7Pin_WBFunctor<Arduino7Pin_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Arduino7PinValue_WBFunctor_T */ 
template <typename Arduino7PinValue_WBFunctor_T >
class Arduino7PinValue_WBFunctor: public WBFunctor<Arduino7PinValue_WBFunctor_T > {
public:
    /** WBFunctor constructor for Arduino7PinValue_WBFunctor_T */
    Arduino7PinValue_WBFunctor(Arduino7PinValue_WBFunctor_T* obj, void (Arduino7PinValue_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<Arduino7PinValue_WBFunctor_T >(obj, (void (Arduino7PinValue_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Arduino7PinValue_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::Arduino7PinValue_t().get_from(m);
        Arduino7PinValue_function_t funct((void (Arduino7PinValue_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<Arduino7PinValue_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Arduino7PinValue_WBFunctor_T >::fObject->*funct)(WBFunctor<Arduino7PinValue_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Arduino7PinValue_WBFunctor_T::*Arduino7PinValue_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Arduino7PinValue_WBFunctor_T *obj, void (Arduino7PinValue_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new Arduino7PinValue_WBFunctor<Arduino7PinValue_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Arduino8Pin_WBFunctor_T */ 
template <typename Arduino8Pin_WBFunctor_T >
class Arduino8Pin_WBFunctor: public WBFunctor<Arduino8Pin_WBFunctor_T > {
public:
    /** WBFunctor constructor for Arduino8Pin_WBFunctor_T */
    Arduino8Pin_WBFunctor(Arduino8Pin_WBFunctor_T* obj, void (Arduino8Pin_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<Arduino8Pin_WBFunctor_T >(obj, (void (Arduino8Pin_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Arduino8Pin_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::Arduino8Pin_t().get_from(m);
        Arduino8Pin_function_t funct((void (Arduino8Pin_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<Arduino8Pin_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Arduino8Pin_WBFunctor_T >::fObject->*funct)(WBFunctor<Arduino8Pin_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Arduino8Pin_WBFunctor_T::*Arduino8Pin_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Arduino8Pin_WBFunctor_T *obj, void (Arduino8Pin_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new Arduino8Pin_WBFunctor<Arduino8Pin_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Arduino8PinValue_WBFunctor_T */ 
template <typename Arduino8PinValue_WBFunctor_T >
class Arduino8PinValue_WBFunctor: public WBFunctor<Arduino8PinValue_WBFunctor_T > {
public:
    /** WBFunctor constructor for Arduino8PinValue_WBFunctor_T */
    Arduino8PinValue_WBFunctor(Arduino8PinValue_WBFunctor_T* obj, void (Arduino8PinValue_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<Arduino8PinValue_WBFunctor_T >(obj, (void (Arduino8PinValue_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Arduino8PinValue_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::Arduino8PinValue_t().get_from(m);
        Arduino8PinValue_function_t funct((void (Arduino8PinValue_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<Arduino8PinValue_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Arduino8PinValue_WBFunctor_T >::fObject->*funct)(WBFunctor<Arduino8PinValue_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Arduino8PinValue_WBFunctor_T::*Arduino8PinValue_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Arduino8PinValue_WBFunctor_T *obj, void (Arduino8PinValue_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new Arduino8PinValue_WBFunctor<Arduino8PinValue_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Arduino9Pin_WBFunctor_T */ 
template <typename Arduino9Pin_WBFunctor_T >
class Arduino9Pin_WBFunctor: public WBFunctor<Arduino9Pin_WBFunctor_T > {
public:
    /** WBFunctor constructor for Arduino9Pin_WBFunctor_T */
    Arduino9Pin_WBFunctor(Arduino9Pin_WBFunctor_T* obj, void (Arduino9Pin_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<Arduino9Pin_WBFunctor_T >(obj, (void (Arduino9Pin_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Arduino9Pin_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::Arduino9Pin_t().get_from(m);
        Arduino9Pin_function_t funct((void (Arduino9Pin_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<Arduino9Pin_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Arduino9Pin_WBFunctor_T >::fObject->*funct)(WBFunctor<Arduino9Pin_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Arduino9Pin_WBFunctor_T::*Arduino9Pin_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Arduino9Pin_WBFunctor_T *obj, void (Arduino9Pin_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new Arduino9Pin_WBFunctor<Arduino9Pin_WBFunctor_T >(obj, f, t); }
}; 



/** WBFunctor definition for Arduino9PinValue_WBFunctor_T */ 
template <typename Arduino9PinValue_WBFunctor_T >
class Arduino9PinValue_WBFunctor: public WBFunctor<Arduino9PinValue_WBFunctor_T > {
public:
    /** WBFunctor constructor for Arduino9PinValue_WBFunctor_T */
    Arduino9PinValue_WBFunctor(Arduino9PinValue_WBFunctor_T* obj, void (Arduino9PinValue_WBFunctor_T::*pFunc) (guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t): WBFunctor<Arduino9PinValue_WBFunctor_T >(obj, (void (Arduino9PinValue_WBFunctor_T::*) (guWhiteboard::WBTypes, gu_simple_message*))pFunc, t) { }

    /** call method for callbacks, for class Arduino9PinValue_WBFunctor */
    void call(gu_simple_message *m) {
        bool result = guWhiteboard::Arduino9PinValue_t().get_from(m);
        Arduino9PinValue_function_t funct((void (Arduino9PinValue_WBFunctor_T::*)(guWhiteboard::WBTypes, bool &))WBFunctor<Arduino9PinValue_WBFunctor_T >::get_s_func_ptr());
        (WBFunctor<Arduino9PinValue_WBFunctor_T >::fObject->*funct)(WBFunctor<Arduino9PinValue_WBFunctor_T >::type_enum, result);
    }

    /** define callback signature */
    typedef void (Arduino9PinValue_WBFunctor_T::*Arduino9PinValue_function_t) (guWhiteboard::WBTypes, bool &);

    /** internal method of linking classes */
    static WBFunctorBase *bind(Arduino9PinValue_WBFunctor_T *obj, void (Arduino9PinValue_WBFunctor_T::*f)(guWhiteboard::WBTypes, bool &), guWhiteboard::WBTypes t) { return new Arduino9PinValue_WBFunctor<Arduino9PinValue_WBFunctor_T >(obj, f, t); }
}; 



#pragma clang diagnostic pop

#endif //WBFUNCTOR_TYPES_GENERATED_H
