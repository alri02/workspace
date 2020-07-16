// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.
#ifndef __Service_hh__
#define __Service_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_Service
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_Service
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_Service
#endif



#ifndef __StdException_hh_EXTERNAL_GUARD__
#define __StdException_hh_EXTERNAL_GUARD__
#include "StdExceptionC.h"
#endif
#ifndef __ConfigurationInterface_hh_EXTERNAL_GUARD__
#define __ConfigurationInterface_hh_EXTERNAL_GUARD__
#include "ConfigurationInterfaceC.h"
#endif
#ifndef __OperationInterface_hh_EXTERNAL_GUARD__
#define __OperationInterface_hh_EXTERNAL_GUARD__
#include "OperationInterfaceC.h"
#endif
#ifndef __DataFlow_hh_EXTERNAL_GUARD__
#define __DataFlow_hh_EXTERNAL_GUARD__
#include "DataFlowC.h"
#endif



#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif



_CORBA_MODULE RTT

_CORBA_MODULE_BEG

  _CORBA_MODULE corba

  _CORBA_MODULE_BEG

#ifndef __RTT_mcorba_mCService__
#define __RTT_mcorba_mCService__
    class CService;
    class _objref_CService;
    class _impl_CService;
    
    typedef _objref_CService* CService_ptr;
    typedef CService_ptr CServiceRef;

    class CService_Helper {
    public:
      typedef CService_ptr _ptr_type;

      static _ptr_type _nil();
      static _CORBA_Boolean is_nil(_ptr_type);
      static void release(_ptr_type);
      static void duplicate(_ptr_type);
      static void marshalObjRef(_ptr_type, cdrStream&);
      static _ptr_type unmarshalObjRef(cdrStream&);
    };

    typedef _CORBA_ObjRef_Var<_objref_CService, CService_Helper> CService_var;
    typedef _CORBA_ObjRef_OUT_arg<_objref_CService,CService_Helper > CService_out;

#endif

    // interface CService
    class CService {
    public:
      // Declarations for this interface type.
      typedef CService_ptr _ptr_type;
      typedef CService_var _var_type;

      static _ptr_type _duplicate(_ptr_type);
      static _ptr_type _narrow(::CORBA::Object_ptr);
      static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
      
      static _ptr_type _nil();

      static inline void _marshalObjRef(_ptr_type, cdrStream&);

      static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
        omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
        if (o)
          return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
        else
          return _nil();
      }

      static inline _ptr_type _fromObjRef(omniObjRef* o) {
        if (o)
          return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
        else
          return _nil();
      }

      static _core_attr const char* _PD_repoId;

      // Other IDL defined within this scope.
      static _dyn_attr const ::CORBA::TypeCode_ptr _tc_CProviderNames;

      class CProviderNames_var;

      class CProviderNames : public _CORBA_Unbounded_Sequence_String {
      public:
        typedef CProviderNames_var _var_type;
        inline CProviderNames() {}
        inline CProviderNames(const CProviderNames& _s)
          : _CORBA_Unbounded_Sequence_String(_s) {}

        inline CProviderNames(_CORBA_ULong _max)
          : _CORBA_Unbounded_Sequence_String(_max) {}
        inline CProviderNames(_CORBA_ULong _max, _CORBA_ULong _len, char** _val, _CORBA_Boolean _rel=0)
          : _CORBA_Unbounded_Sequence_String(_max, _len, _val, _rel) {}

      

        inline CProviderNames& operator = (const CProviderNames& _s) {
          _CORBA_Unbounded_Sequence_String::operator=(_s);
          return *this;
        }
      };

      class CProviderNames_out;

      class CProviderNames_var {
      public:
        inline CProviderNames_var() : _pd_seq(0) {}
        inline CProviderNames_var(CProviderNames* _s) : _pd_seq(_s) {}
        inline CProviderNames_var(const CProviderNames_var& _s) {
          if (_s._pd_seq)  _pd_seq = new CProviderNames(*_s._pd_seq);
          else             _pd_seq = 0;
        }
        inline ~CProviderNames_var() { if (_pd_seq)  delete _pd_seq; }
          
        inline CProviderNames_var& operator = (CProviderNames* _s) {
          if (_pd_seq)  delete _pd_seq;
          _pd_seq = _s;
          return *this;
        }
        inline CProviderNames_var& operator = (const CProviderNames_var& _s) {
          if (&_s != this) {
            if (_s._pd_seq) {
              if (!_pd_seq)  _pd_seq = new CProviderNames;
              *_pd_seq = *_s._pd_seq;
            }
            else if (_pd_seq) {
              delete _pd_seq;
              _pd_seq = 0;
            }
          }
          return *this;
        }
        inline _CORBA_String_element operator [] (_CORBA_ULong _s) {
          return (*_pd_seq)[_s];
        }

      

        inline CProviderNames* operator -> () { return _pd_seq; }
        inline const CProviderNames* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
        inline operator CProviderNames& () const { return *_pd_seq; }
#else
        inline operator const CProviderNames& () const { return *_pd_seq; }
        inline operator CProviderNames& () { return *_pd_seq; }
#endif
          
        inline const CProviderNames& in() const { return *_pd_seq; }
        inline CProviderNames&       inout()    { return *_pd_seq; }
        inline CProviderNames*&      out() {
          if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
          return _pd_seq;
        }
        inline CProviderNames* _retn() { CProviderNames* tmp = _pd_seq; _pd_seq = 0; return tmp; }
          
        friend class CProviderNames_out;
        
      private:
        CProviderNames* _pd_seq;
      };

      class CProviderNames_out {
      public:
        inline CProviderNames_out(CProviderNames*& _s) : _data(_s) { _data = 0; }
        inline CProviderNames_out(CProviderNames_var& _s)
          : _data(_s._pd_seq) { _s = (CProviderNames*) 0; }
        inline CProviderNames_out(const CProviderNames_out& _s) : _data(_s._data) {}
        inline CProviderNames_out& operator = (const CProviderNames_out& _s) {
          _data = _s._data;
          return *this;
        }
        inline CProviderNames_out& operator = (CProviderNames* _s) {
          _data = _s;
          return *this;
        }
        inline operator CProviderNames*&()  { return _data; }
        inline CProviderNames*& ptr()       { return _data; }
        inline CProviderNames* operator->() { return _data; }

        inline _CORBA_String_element operator [] (_CORBA_ULong _i) {
          return (*_data)[_i];
        }

      

        CProviderNames*& _data;

      private:
        CProviderNames_out();
        CProviderNames_out& operator=(const CProviderNames_var&);
      };

    
    };

    class _objref_CService :
      public virtual _objref_COperationInterface,
      public virtual _objref_CConfigurationInterface,
      public virtual _objref_CDataFlowInterface
    {
    public:
      // IDL operations
      char* getName();
      char* getServiceDescription();
      CService::CProviderNames* getProviderNames();
      CService_ptr getService(const char* name);
      ::CORBA::Boolean hasService(const char* name);

      // Constructors
      inline _objref_CService()  { _PR_setobj(0); }  // nil
      _objref_CService(omniIOR*, omniIdentity*);

    protected:
      virtual ~_objref_CService();

      
    private:
      virtual void* _ptrToObjRef(const char*);

      _objref_CService(const _objref_CService&);
      _objref_CService& operator = (const _objref_CService&);
      // not implemented

      friend class CService;
    };

    class _pof_CService : public _OMNI_NS(proxyObjectFactory) {
    public:
      inline _pof_CService() : _OMNI_NS(proxyObjectFactory)(CService::_PD_repoId) {}
      virtual ~_pof_CService();

      virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
      virtual _CORBA_Boolean is_a(const char*) const;
    };

    class _impl_CService :
      public virtual _impl_COperationInterface,
      public virtual _impl_CConfigurationInterface,
      public virtual _impl_CDataFlowInterface
    {
    public:
      virtual ~_impl_CService();

      virtual char* getName() = 0;
      virtual char* getServiceDescription() = 0;
      virtual CService::CProviderNames* getProviderNames() = 0;
      virtual CService_ptr getService(const char* name) = 0;
      virtual ::CORBA::Boolean hasService(const char* name) = 0;
      
    public:  // Really protected, workaround for xlC
      virtual _CORBA_Boolean _dispatch(omniCallHandle&);

    private:
      virtual void* _ptrToInterface(const char*);
      virtual const char* _mostDerivedRepoId();
      
    };


    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CService;

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE POA_RTT
_CORBA_MODULE_BEG

  _CORBA_MODULE corba
  _CORBA_MODULE_BEG

    class CService :
      public virtual RTT::corba::_impl_CService,
      public virtual COperationInterface,
        public virtual CConfigurationInterface,
        public virtual CDataFlowInterface
    {
    public:
      virtual ~CService();

      inline ::RTT::corba::CService_ptr _this() {
        return (::RTT::corba::CService_ptr) _do_this(::RTT::corba::CService::_PD_repoId);
      }
    };

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE OBV_RTT
_CORBA_MODULE_BEG

  _CORBA_MODULE corba
  _CORBA_MODULE_BEG

  _CORBA_MODULE_END

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, const RTT::corba::CService::CProviderNames& _s);
void operator<<=(::CORBA::Any& _a, RTT::corba::CService::CProviderNames* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, RTT::corba::CService::CProviderNames*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const RTT::corba::CService::CProviderNames*& _sp);

void operator<<=(::CORBA::Any& _a, RTT::corba::CService_ptr _s);
void operator<<=(::CORBA::Any& _a, RTT::corba::CService_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, RTT::corba::CService_ptr& _s);



inline void
RTT::corba::CService::_marshalObjRef(::RTT::corba::CService_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}



#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_Service
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_Service
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_Service
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_Service
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_Service
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_Service
#endif

#endif  // __Service_hh__
