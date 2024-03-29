// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.
#ifndef __OperationInterface_hh__
#define __OperationInterface_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_OperationInterface
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_OperationInterface
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_OperationInterface
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

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CAnyArguments;

    class CAnyArguments_var;

    class CAnyArguments : public _CORBA_Unbounded_Sequence< ::CORBA::Any >  {
    public:
      typedef CAnyArguments_var _var_type;
      inline CAnyArguments() {}
      inline CAnyArguments(const CAnyArguments& _s)
        : _CORBA_Unbounded_Sequence< ::CORBA::Any > (_s) {}

      inline CAnyArguments(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence< ::CORBA::Any > (_max) {}
      inline CAnyArguments(_CORBA_ULong _max, _CORBA_ULong _len, ::CORBA::Any* _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence< ::CORBA::Any > (_max, _len, _val, _rel) {}

    

      inline CAnyArguments& operator = (const CAnyArguments& _s) {
        _CORBA_Unbounded_Sequence< ::CORBA::Any > ::operator=(_s);
        return *this;
      }
    };

    class CAnyArguments_out;

    class CAnyArguments_var {
    public:
      inline CAnyArguments_var() : _pd_seq(0) {}
      inline CAnyArguments_var(CAnyArguments* _s) : _pd_seq(_s) {}
      inline CAnyArguments_var(const CAnyArguments_var& _s) {
        if (_s._pd_seq)  _pd_seq = new CAnyArguments(*_s._pd_seq);
        else             _pd_seq = 0;
      }
      inline ~CAnyArguments_var() { if (_pd_seq)  delete _pd_seq; }
        
      inline CAnyArguments_var& operator = (CAnyArguments* _s) {
        if (_pd_seq)  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline CAnyArguments_var& operator = (const CAnyArguments_var& _s) {
        if (&_s != this) {
          if (_s._pd_seq) {
            if (!_pd_seq)  _pd_seq = new CAnyArguments;
            *_pd_seq = *_s._pd_seq;
          }
          else if (_pd_seq) {
            delete _pd_seq;
            _pd_seq = 0;
          }
        }
        return *this;
      }
      inline ::CORBA::Any& operator [] (_CORBA_ULong _s) {
        return (*_pd_seq)[_s];
      }

    

      inline CAnyArguments* operator -> () { return _pd_seq; }
      inline const CAnyArguments* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator CAnyArguments& () const { return *_pd_seq; }
#else
      inline operator const CAnyArguments& () const { return *_pd_seq; }
      inline operator CAnyArguments& () { return *_pd_seq; }
#endif
        
      inline const CAnyArguments& in() const { return *_pd_seq; }
      inline CAnyArguments&       inout()    { return *_pd_seq; }
      inline CAnyArguments*&      out() {
        if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline CAnyArguments* _retn() { CAnyArguments* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class CAnyArguments_out;
      
    private:
      CAnyArguments* _pd_seq;
    };

    class CAnyArguments_out {
    public:
      inline CAnyArguments_out(CAnyArguments*& _s) : _data(_s) { _data = 0; }
      inline CAnyArguments_out(CAnyArguments_var& _s)
        : _data(_s._pd_seq) { _s = (CAnyArguments*) 0; }
      inline CAnyArguments_out(const CAnyArguments_out& _s) : _data(_s._data) {}
      inline CAnyArguments_out& operator = (const CAnyArguments_out& _s) {
        _data = _s._data;
        return *this;
      }
      inline CAnyArguments_out& operator = (CAnyArguments* _s) {
        _data = _s;
        return *this;
      }
      inline operator CAnyArguments*&()  { return _data; }
      inline CAnyArguments*& ptr()       { return _data; }
      inline CAnyArguments* operator->() { return _data; }

      inline ::CORBA::Any& operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      CAnyArguments*& _data;

    private:
      CAnyArguments_out();
      CAnyArguments_out& operator=(const CAnyArguments_var&);
    };

    struct CArgumentDescription {
      typedef _CORBA_ConstrType_Variable_Var<CArgumentDescription> _var_type;

      
      ::CORBA::String_member name;

      ::CORBA::String_member description;

      ::CORBA::String_member type;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef CArgumentDescription::_var_type CArgumentDescription_var;

    typedef _CORBA_ConstrType_Variable_OUT_arg< CArgumentDescription,CArgumentDescription_var > CArgumentDescription_out;

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CArgumentDescription;

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CDescriptions;

    class CDescriptions_var;

    class CDescriptions : public _CORBA_Unbounded_Sequence< CArgumentDescription >  {
    public:
      typedef CDescriptions_var _var_type;
      inline CDescriptions() {}
      inline CDescriptions(const CDescriptions& _s)
        : _CORBA_Unbounded_Sequence< CArgumentDescription > (_s) {}

      inline CDescriptions(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence< CArgumentDescription > (_max) {}
      inline CDescriptions(_CORBA_ULong _max, _CORBA_ULong _len, CArgumentDescription* _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence< CArgumentDescription > (_max, _len, _val, _rel) {}

    

      inline CDescriptions& operator = (const CDescriptions& _s) {
        _CORBA_Unbounded_Sequence< CArgumentDescription > ::operator=(_s);
        return *this;
      }
    };

    class CDescriptions_out;

    class CDescriptions_var {
    public:
      inline CDescriptions_var() : _pd_seq(0) {}
      inline CDescriptions_var(CDescriptions* _s) : _pd_seq(_s) {}
      inline CDescriptions_var(const CDescriptions_var& _s) {
        if (_s._pd_seq)  _pd_seq = new CDescriptions(*_s._pd_seq);
        else             _pd_seq = 0;
      }
      inline ~CDescriptions_var() { if (_pd_seq)  delete _pd_seq; }
        
      inline CDescriptions_var& operator = (CDescriptions* _s) {
        if (_pd_seq)  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline CDescriptions_var& operator = (const CDescriptions_var& _s) {
        if (&_s != this) {
          if (_s._pd_seq) {
            if (!_pd_seq)  _pd_seq = new CDescriptions;
            *_pd_seq = *_s._pd_seq;
          }
          else if (_pd_seq) {
            delete _pd_seq;
            _pd_seq = 0;
          }
        }
        return *this;
      }
      inline CArgumentDescription& operator [] (_CORBA_ULong _s) {
        return (*_pd_seq)[_s];
      }

    

      inline CDescriptions* operator -> () { return _pd_seq; }
      inline const CDescriptions* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator CDescriptions& () const { return *_pd_seq; }
#else
      inline operator const CDescriptions& () const { return *_pd_seq; }
      inline operator CDescriptions& () { return *_pd_seq; }
#endif
        
      inline const CDescriptions& in() const { return *_pd_seq; }
      inline CDescriptions&       inout()    { return *_pd_seq; }
      inline CDescriptions*&      out() {
        if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline CDescriptions* _retn() { CDescriptions* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class CDescriptions_out;
      
    private:
      CDescriptions* _pd_seq;
    };

    class CDescriptions_out {
    public:
      inline CDescriptions_out(CDescriptions*& _s) : _data(_s) { _data = 0; }
      inline CDescriptions_out(CDescriptions_var& _s)
        : _data(_s._pd_seq) { _s = (CDescriptions*) 0; }
      inline CDescriptions_out(const CDescriptions_out& _s) : _data(_s._data) {}
      inline CDescriptions_out& operator = (const CDescriptions_out& _s) {
        _data = _s._data;
        return *this;
      }
      inline CDescriptions_out& operator = (CDescriptions* _s) {
        _data = _s;
        return *this;
      }
      inline operator CDescriptions*&()  { return _data; }
      inline CDescriptions*& ptr()       { return _data; }
      inline CDescriptions* operator->() { return _data; }

      inline CArgumentDescription& operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      CDescriptions*& _data;

    private:
      CDescriptions_out();
      CDescriptions_out& operator=(const CDescriptions_var&);
    };

    class CWrongArgumentException : public ::CORBA::UserException {
    public:
      
      ::CORBA::Long which_arg;

      ::CORBA::Long max_arg;

    

      inline CWrongArgumentException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      CWrongArgumentException(const CWrongArgumentException&);
      CWrongArgumentException(::CORBA::Long i_which_arg, ::CORBA::Long i_max_arg);
      CWrongArgumentException& operator=(const CWrongArgumentException&);
      virtual ~CWrongArgumentException();
      virtual void _raise() const;
      static CWrongArgumentException* _downcast(::CORBA::Exception*);
      static const CWrongArgumentException* _downcast(const ::CORBA::Exception*);
      static inline CWrongArgumentException* _narrow(::CORBA::Exception* _e) {
        return _downcast(_e);
      }
      
      void operator>>=(cdrStream&) const ;
      void operator<<=(cdrStream&) ;

      static _core_attr insertExceptionToAny    insertToAnyFn;
      static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

      virtual ::CORBA::Exception* _NP_duplicate() const;

      static _core_attr const char* _PD_repoId;
      static _core_attr const char* _PD_typeId;

    private:
      virtual const char* _NP_typeId() const;
      virtual const char* _NP_repoId(int*) const;
      virtual void _NP_marshal(cdrStream&) const;
    };

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CWrongArgumentException;

    class CWrongNumbArgException : public ::CORBA::UserException {
    public:
      
      ::CORBA::Long wanted;

      ::CORBA::Long received;

    

      inline CWrongNumbArgException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      CWrongNumbArgException(const CWrongNumbArgException&);
      CWrongNumbArgException(::CORBA::Long i_wanted, ::CORBA::Long i_received);
      CWrongNumbArgException& operator=(const CWrongNumbArgException&);
      virtual ~CWrongNumbArgException();
      virtual void _raise() const;
      static CWrongNumbArgException* _downcast(::CORBA::Exception*);
      static const CWrongNumbArgException* _downcast(const ::CORBA::Exception*);
      static inline CWrongNumbArgException* _narrow(::CORBA::Exception* _e) {
        return _downcast(_e);
      }
      
      void operator>>=(cdrStream&) const ;
      void operator<<=(cdrStream&) ;

      static _core_attr insertExceptionToAny    insertToAnyFn;
      static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

      virtual ::CORBA::Exception* _NP_duplicate() const;

      static _core_attr const char* _PD_repoId;
      static _core_attr const char* _PD_typeId;

    private:
      virtual const char* _NP_typeId() const;
      virtual const char* _NP_repoId(int*) const;
      virtual void _NP_marshal(cdrStream&) const;
    };

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CWrongNumbArgException;

    class CWrongTypeArgException : public ::CORBA::UserException {
    public:
      
      ::CORBA::Long whicharg;

      ::CORBA::String_member expected;

      ::CORBA::String_member received;

    

      inline CWrongTypeArgException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      CWrongTypeArgException(const CWrongTypeArgException&);
      CWrongTypeArgException(::CORBA::Long i_whicharg, const char* i_expected, const char* i_received);
      CWrongTypeArgException& operator=(const CWrongTypeArgException&);
      virtual ~CWrongTypeArgException();
      virtual void _raise() const;
      static CWrongTypeArgException* _downcast(::CORBA::Exception*);
      static const CWrongTypeArgException* _downcast(const ::CORBA::Exception*);
      static inline CWrongTypeArgException* _narrow(::CORBA::Exception* _e) {
        return _downcast(_e);
      }
      
      void operator>>=(cdrStream&) const ;
      void operator<<=(cdrStream&) ;

      static _core_attr insertExceptionToAny    insertToAnyFn;
      static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

      virtual ::CORBA::Exception* _NP_duplicate() const;

      static _core_attr const char* _PD_repoId;
      static _core_attr const char* _PD_typeId;

    private:
      virtual const char* _NP_typeId() const;
      virtual const char* _NP_repoId(int*) const;
      virtual void _NP_marshal(cdrStream&) const;
    };

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CWrongTypeArgException;

    class CNoSuchNameException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member name;

    

      inline CNoSuchNameException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      CNoSuchNameException(const CNoSuchNameException&);
      CNoSuchNameException(const char* i_name);
      CNoSuchNameException& operator=(const CNoSuchNameException&);
      virtual ~CNoSuchNameException();
      virtual void _raise() const;
      static CNoSuchNameException* _downcast(::CORBA::Exception*);
      static const CNoSuchNameException* _downcast(const ::CORBA::Exception*);
      static inline CNoSuchNameException* _narrow(::CORBA::Exception* _e) {
        return _downcast(_e);
      }
      
      void operator>>=(cdrStream&) const ;
      void operator<<=(cdrStream&) ;

      static _core_attr insertExceptionToAny    insertToAnyFn;
      static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

      virtual ::CORBA::Exception* _NP_duplicate() const;

      static _core_attr const char* _PD_repoId;
      static _core_attr const char* _PD_typeId;

    private:
      virtual const char* _NP_typeId() const;
      virtual const char* _NP_repoId(int*) const;
      virtual void _NP_marshal(cdrStream&) const;
    };

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CNoSuchNameException;

    enum CSendStatus { CCollectFailure, CSendFailure, CSendNotReady, CSendSuccess /*, __max_CSendStatus=0xffffffff */ };
    typedef CSendStatus& CSendStatus_out;

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CSendStatus;

    class CCallInterrupted : public ::CORBA::UserException {
    public:
      
      

      inline CCallInterrupted() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      CCallInterrupted(const CCallInterrupted&);
      
      CCallInterrupted& operator=(const CCallInterrupted&);
      virtual ~CCallInterrupted();
      virtual void _raise() const;
      static CCallInterrupted* _downcast(::CORBA::Exception*);
      static const CCallInterrupted* _downcast(const ::CORBA::Exception*);
      static inline CCallInterrupted* _narrow(::CORBA::Exception* _e) {
        return _downcast(_e);
      }
      
      inline void operator>>=(cdrStream&) const { }
      inline void operator<<=(cdrStream&) { }

      static _core_attr insertExceptionToAny    insertToAnyFn;
      static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

      virtual ::CORBA::Exception* _NP_duplicate() const;

      static _core_attr const char* _PD_repoId;
      static _core_attr const char* _PD_typeId;

    private:
      virtual const char* _NP_typeId() const;
      virtual const char* _NP_repoId(int*) const;
      virtual void _NP_marshal(cdrStream&) const;
    };

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CCallInterrupted;

    class CCallError : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member what;

    

      inline CCallError() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      CCallError(const CCallError&);
      CCallError(const char* i_what);
      CCallError& operator=(const CCallError&);
      virtual ~CCallError();
      virtual void _raise() const;
      static CCallError* _downcast(::CORBA::Exception*);
      static const CCallError* _downcast(const ::CORBA::Exception*);
      static inline CCallError* _narrow(::CORBA::Exception* _e) {
        return _downcast(_e);
      }
      
      void operator>>=(cdrStream&) const ;
      void operator<<=(cdrStream&) ;

      static _core_attr insertExceptionToAny    insertToAnyFn;
      static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

      virtual ::CORBA::Exception* _NP_duplicate() const;

      static _core_attr const char* _PD_repoId;
      static _core_attr const char* _PD_typeId;

    private:
      virtual const char* _NP_typeId() const;
      virtual const char* _NP_repoId(int*) const;
      virtual void _NP_marshal(cdrStream&) const;
    };

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CCallError;

#ifndef __RTT_mcorba_mCSendHandle__
#define __RTT_mcorba_mCSendHandle__
    class CSendHandle;
    class _objref_CSendHandle;
    class _impl_CSendHandle;
    
    typedef _objref_CSendHandle* CSendHandle_ptr;
    typedef CSendHandle_ptr CSendHandleRef;

    class CSendHandle_Helper {
    public:
      typedef CSendHandle_ptr _ptr_type;

      static _ptr_type _nil();
      static _CORBA_Boolean is_nil(_ptr_type);
      static void release(_ptr_type);
      static void duplicate(_ptr_type);
      static void marshalObjRef(_ptr_type, cdrStream&);
      static _ptr_type unmarshalObjRef(cdrStream&);
    };

    typedef _CORBA_ObjRef_Var<_objref_CSendHandle, CSendHandle_Helper> CSendHandle_var;
    typedef _CORBA_ObjRef_OUT_arg<_objref_CSendHandle,CSendHandle_Helper > CSendHandle_out;

#endif

    // interface CSendHandle
    class CSendHandle {
    public:
      // Declarations for this interface type.
      typedef CSendHandle_ptr _ptr_type;
      typedef CSendHandle_var _var_type;

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
      
    };

    class _objref_CSendHandle :
      public virtual ::CORBA::Object,
      public virtual omniObjRef
    {
    public:
      // IDL operations
      CSendStatus collect(::RTT::corba::CAnyArguments_out args);
      CSendStatus collectIfDone(::RTT::corba::CAnyArguments_out args);
      CSendStatus checkStatus();
      ::CORBA::Any* ret();
      void checkArguments(const ::RTT::corba::CAnyArguments& args);
      void dispose();

      // Constructors
      inline _objref_CSendHandle()  { _PR_setobj(0); }  // nil
      _objref_CSendHandle(omniIOR*, omniIdentity*);

    protected:
      virtual ~_objref_CSendHandle();

      
    private:
      virtual void* _ptrToObjRef(const char*);

      _objref_CSendHandle(const _objref_CSendHandle&);
      _objref_CSendHandle& operator = (const _objref_CSendHandle&);
      // not implemented

      friend class CSendHandle;
    };

    class _pof_CSendHandle : public _OMNI_NS(proxyObjectFactory) {
    public:
      inline _pof_CSendHandle() : _OMNI_NS(proxyObjectFactory)(CSendHandle::_PD_repoId) {}
      virtual ~_pof_CSendHandle();

      virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
      virtual _CORBA_Boolean is_a(const char*) const;
    };

    class _impl_CSendHandle :
      public virtual omniServant
    {
    public:
      virtual ~_impl_CSendHandle();

      virtual CSendStatus collect(::RTT::corba::CAnyArguments_out args) = 0;
      virtual CSendStatus collectIfDone(::RTT::corba::CAnyArguments_out args) = 0;
      virtual CSendStatus checkStatus() = 0;
      virtual ::CORBA::Any* ret() = 0;
      virtual void checkArguments(const ::RTT::corba::CAnyArguments& args) = 0;
      virtual void dispose() = 0;
      
    public:  // Really protected, workaround for xlC
      virtual _CORBA_Boolean _dispatch(omniCallHandle&);

    private:
      virtual void* _ptrToInterface(const char*);
      virtual const char* _mostDerivedRepoId();
      
    };


    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CSendHandle;

#ifndef __RTT_mcorba_mCOperationInterface__
#define __RTT_mcorba_mCOperationInterface__
    class COperationInterface;
    class _objref_COperationInterface;
    class _impl_COperationInterface;
    
    typedef _objref_COperationInterface* COperationInterface_ptr;
    typedef COperationInterface_ptr COperationInterfaceRef;

    class COperationInterface_Helper {
    public:
      typedef COperationInterface_ptr _ptr_type;

      static _ptr_type _nil();
      static _CORBA_Boolean is_nil(_ptr_type);
      static void release(_ptr_type);
      static void duplicate(_ptr_type);
      static void marshalObjRef(_ptr_type, cdrStream&);
      static _ptr_type unmarshalObjRef(cdrStream&);
    };

    typedef _CORBA_ObjRef_Var<_objref_COperationInterface, COperationInterface_Helper> COperationInterface_var;
    typedef _CORBA_ObjRef_OUT_arg<_objref_COperationInterface,COperationInterface_Helper > COperationInterface_out;

#endif

    // interface COperationInterface
    class COperationInterface {
    public:
      // Declarations for this interface type.
      typedef COperationInterface_ptr _ptr_type;
      typedef COperationInterface_var _var_type;

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
      static _dyn_attr const ::CORBA::TypeCode_ptr _tc_COperationList;

      class COperationList_var;

      class COperationList : public _CORBA_Unbounded_Sequence_String {
      public:
        typedef COperationList_var _var_type;
        inline COperationList() {}
        inline COperationList(const COperationList& _s)
          : _CORBA_Unbounded_Sequence_String(_s) {}

        inline COperationList(_CORBA_ULong _max)
          : _CORBA_Unbounded_Sequence_String(_max) {}
        inline COperationList(_CORBA_ULong _max, _CORBA_ULong _len, char** _val, _CORBA_Boolean _rel=0)
          : _CORBA_Unbounded_Sequence_String(_max, _len, _val, _rel) {}

      

        inline COperationList& operator = (const COperationList& _s) {
          _CORBA_Unbounded_Sequence_String::operator=(_s);
          return *this;
        }
      };

      class COperationList_out;

      class COperationList_var {
      public:
        inline COperationList_var() : _pd_seq(0) {}
        inline COperationList_var(COperationList* _s) : _pd_seq(_s) {}
        inline COperationList_var(const COperationList_var& _s) {
          if (_s._pd_seq)  _pd_seq = new COperationList(*_s._pd_seq);
          else             _pd_seq = 0;
        }
        inline ~COperationList_var() { if (_pd_seq)  delete _pd_seq; }
          
        inline COperationList_var& operator = (COperationList* _s) {
          if (_pd_seq)  delete _pd_seq;
          _pd_seq = _s;
          return *this;
        }
        inline COperationList_var& operator = (const COperationList_var& _s) {
          if (&_s != this) {
            if (_s._pd_seq) {
              if (!_pd_seq)  _pd_seq = new COperationList;
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

      

        inline COperationList* operator -> () { return _pd_seq; }
        inline const COperationList* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
        inline operator COperationList& () const { return *_pd_seq; }
#else
        inline operator const COperationList& () const { return *_pd_seq; }
        inline operator COperationList& () { return *_pd_seq; }
#endif
          
        inline const COperationList& in() const { return *_pd_seq; }
        inline COperationList&       inout()    { return *_pd_seq; }
        inline COperationList*&      out() {
          if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
          return _pd_seq;
        }
        inline COperationList* _retn() { COperationList* tmp = _pd_seq; _pd_seq = 0; return tmp; }
          
        friend class COperationList_out;
        
      private:
        COperationList* _pd_seq;
      };

      class COperationList_out {
      public:
        inline COperationList_out(COperationList*& _s) : _data(_s) { _data = 0; }
        inline COperationList_out(COperationList_var& _s)
          : _data(_s._pd_seq) { _s = (COperationList*) 0; }
        inline COperationList_out(const COperationList_out& _s) : _data(_s._data) {}
        inline COperationList_out& operator = (const COperationList_out& _s) {
          _data = _s._data;
          return *this;
        }
        inline COperationList_out& operator = (COperationList* _s) {
          _data = _s;
          return *this;
        }
        inline operator COperationList*&()  { return _data; }
        inline COperationList*& ptr()       { return _data; }
        inline COperationList* operator->() { return _data; }

        inline _CORBA_String_element operator [] (_CORBA_ULong _i) {
          return (*_data)[_i];
        }

      

        COperationList*& _data;

      private:
        COperationList_out();
        COperationList_out& operator=(const COperationList_var&);
      };

    
    };

    class _objref_COperationInterface :
      public virtual ::CORBA::Object,
      public virtual omniObjRef
    {
    public:
      // IDL operations
      COperationInterface::COperationList* getOperations();
      CDescriptions* getArguments(const char* operation);
      ::CORBA::UShort getArity(const char* operation);
      ::CORBA::UShort getCollectArity(const char* operation);
      char* getResultType(const char* operation);
      char* getArgumentType(const char* operation, ::CORBA::UShort nbr);
      char* getCollectType(const char* operation, ::CORBA::UShort nbr);
      char* getDescription(const char* operation);
      void checkOperation(const char* operation, const ::RTT::corba::CAnyArguments& args);
      ::CORBA::Any* callOperation(const char* operation, ::RTT::corba::CAnyArguments& args);
      CSendHandle_ptr sendOperation(const char* operation, const ::RTT::corba::CAnyArguments& args);

      // Constructors
      inline _objref_COperationInterface()  { _PR_setobj(0); }  // nil
      _objref_COperationInterface(omniIOR*, omniIdentity*);

    protected:
      virtual ~_objref_COperationInterface();

      
    private:
      virtual void* _ptrToObjRef(const char*);

      _objref_COperationInterface(const _objref_COperationInterface&);
      _objref_COperationInterface& operator = (const _objref_COperationInterface&);
      // not implemented

      friend class COperationInterface;
    };

    class _pof_COperationInterface : public _OMNI_NS(proxyObjectFactory) {
    public:
      inline _pof_COperationInterface() : _OMNI_NS(proxyObjectFactory)(COperationInterface::_PD_repoId) {}
      virtual ~_pof_COperationInterface();

      virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
      virtual _CORBA_Boolean is_a(const char*) const;
    };

    class _impl_COperationInterface :
      public virtual omniServant
    {
    public:
      virtual ~_impl_COperationInterface();

      virtual COperationInterface::COperationList* getOperations() = 0;
      virtual CDescriptions* getArguments(const char* operation) = 0;
      virtual ::CORBA::UShort getArity(const char* operation) = 0;
      virtual ::CORBA::UShort getCollectArity(const char* operation) = 0;
      virtual char* getResultType(const char* operation) = 0;
      virtual char* getArgumentType(const char* operation, ::CORBA::UShort nbr) = 0;
      virtual char* getCollectType(const char* operation, ::CORBA::UShort nbr) = 0;
      virtual char* getDescription(const char* operation) = 0;
      virtual void checkOperation(const char* operation, const ::RTT::corba::CAnyArguments& args) = 0;
      virtual ::CORBA::Any* callOperation(const char* operation, ::RTT::corba::CAnyArguments& args) = 0;
      virtual CSendHandle_ptr sendOperation(const char* operation, const ::RTT::corba::CAnyArguments& args) = 0;
      
    public:  // Really protected, workaround for xlC
      virtual _CORBA_Boolean _dispatch(omniCallHandle&);

    private:
      virtual void* _ptrToInterface(const char*);
      virtual const char* _mostDerivedRepoId();
      
    };


    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_COperationInterface;

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE POA_RTT
_CORBA_MODULE_BEG

  _CORBA_MODULE corba
  _CORBA_MODULE_BEG

    class CSendHandle :
      public virtual RTT::corba::_impl_CSendHandle,
      public virtual ::PortableServer::ServantBase
    {
    public:
      virtual ~CSendHandle();

      inline ::RTT::corba::CSendHandle_ptr _this() {
        return (::RTT::corba::CSendHandle_ptr) _do_this(::RTT::corba::CSendHandle::_PD_repoId);
      }
    };

    class COperationInterface :
      public virtual RTT::corba::_impl_COperationInterface,
      public virtual ::PortableServer::ServantBase
    {
    public:
      virtual ~COperationInterface();

      inline ::RTT::corba::COperationInterface_ptr _this() {
        return (::RTT::corba::COperationInterface_ptr) _do_this(::RTT::corba::COperationInterface::_PD_repoId);
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

void operator<<=(::CORBA::Any& _a, const RTT::corba::CAnyArguments& _s);
void operator<<=(::CORBA::Any& _a, RTT::corba::CAnyArguments* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, RTT::corba::CAnyArguments*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const RTT::corba::CAnyArguments*& _sp);

extern void operator<<=(::CORBA::Any& _a, const RTT::corba::CArgumentDescription& _s);
extern void operator<<=(::CORBA::Any& _a, RTT::corba::CArgumentDescription* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, RTT::corba::CArgumentDescription*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const RTT::corba::CArgumentDescription*& _sp);

void operator<<=(::CORBA::Any& _a, const RTT::corba::CDescriptions& _s);
void operator<<=(::CORBA::Any& _a, RTT::corba::CDescriptions* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, RTT::corba::CDescriptions*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const RTT::corba::CDescriptions*& _sp);

void operator<<=(::CORBA::Any& _a, const RTT::corba::CWrongArgumentException& _s);
void operator<<=(::CORBA::Any& _a, const RTT::corba::CWrongArgumentException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const RTT::corba::CWrongArgumentException*& _sp);

void operator<<=(::CORBA::Any& _a, const RTT::corba::CWrongNumbArgException& _s);
void operator<<=(::CORBA::Any& _a, const RTT::corba::CWrongNumbArgException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const RTT::corba::CWrongNumbArgException*& _sp);

void operator<<=(::CORBA::Any& _a, const RTT::corba::CWrongTypeArgException& _s);
void operator<<=(::CORBA::Any& _a, const RTT::corba::CWrongTypeArgException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const RTT::corba::CWrongTypeArgException*& _sp);

void operator<<=(::CORBA::Any& _a, const RTT::corba::CNoSuchNameException& _s);
void operator<<=(::CORBA::Any& _a, const RTT::corba::CNoSuchNameException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const RTT::corba::CNoSuchNameException*& _sp);

inline void operator >>=(RTT::corba::CSendStatus _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (RTT::corba::CSendStatus& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= RTT::corba::CSendSuccess) {
    _e = (RTT::corba::CSendStatus) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, RTT::corba::CSendStatus _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, RTT::corba::CSendStatus& _s);

void operator<<=(::CORBA::Any& _a, const RTT::corba::CCallInterrupted& _s);
void operator<<=(::CORBA::Any& _a, const RTT::corba::CCallInterrupted* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const RTT::corba::CCallInterrupted*& _sp);

void operator<<=(::CORBA::Any& _a, const RTT::corba::CCallError& _s);
void operator<<=(::CORBA::Any& _a, const RTT::corba::CCallError* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const RTT::corba::CCallError*& _sp);

void operator<<=(::CORBA::Any& _a, RTT::corba::CSendHandle_ptr _s);
void operator<<=(::CORBA::Any& _a, RTT::corba::CSendHandle_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, RTT::corba::CSendHandle_ptr& _s);

void operator<<=(::CORBA::Any& _a, const RTT::corba::COperationInterface::COperationList& _s);
void operator<<=(::CORBA::Any& _a, RTT::corba::COperationInterface::COperationList* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, RTT::corba::COperationInterface::COperationList*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const RTT::corba::COperationInterface::COperationList*& _sp);

void operator<<=(::CORBA::Any& _a, RTT::corba::COperationInterface_ptr _s);
void operator<<=(::CORBA::Any& _a, RTT::corba::COperationInterface_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, RTT::corba::COperationInterface_ptr& _s);



inline void
RTT::corba::CSendHandle::_marshalObjRef(::RTT::corba::CSendHandle_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}

inline void
RTT::corba::COperationInterface::_marshalObjRef(::RTT::corba::COperationInterface_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}



#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_OperationInterface
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_OperationInterface
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_OperationInterface
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_OperationInterface
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_OperationInterface
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_OperationInterface
#endif

#endif  // __OperationInterface_hh__

