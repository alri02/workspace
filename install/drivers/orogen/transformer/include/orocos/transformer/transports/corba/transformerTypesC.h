// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.
#ifndef __transformerTypes_hh__
#define __transformerTypes_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_transformerTypes
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_transformerTypes
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_transformerTypes
#endif



#ifndef __stdTypes_hh_EXTERNAL_GUARD__
#define __stdTypes_hh_EXTERNAL_GUARD__
#include <std/transports/corba/stdTypesC.h>
#endif
#ifndef __baseTypes_hh_EXTERNAL_GUARD__
#define __baseTypes_hh_EXTERNAL_GUARD__
#include <base/transports/corba/baseTypesC.h>
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



_CORBA_MODULE orogen

_CORBA_MODULE_BEG

  _CORBA_MODULE transformer

  _CORBA_MODULE_BEG

    _CORBA_MODULE Corba

    _CORBA_MODULE_BEG

      struct PortFrameAssociation {
        typedef _CORBA_ConstrType_Variable_Var<PortFrameAssociation> _var_type;

        
        ::CORBA::String_member task;

        ::CORBA::String_member port;

        ::CORBA::String_member frame;

      

        void operator>>= (cdrStream &) const;
        void operator<<= (cdrStream &);
      };

      typedef PortFrameAssociation::_var_type PortFrameAssociation_var;

      typedef _CORBA_ConstrType_Variable_OUT_arg< PortFrameAssociation,PortFrameAssociation_var > PortFrameAssociation_out;

      _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_PortFrameAssociation;

      struct PortTransformationAssociation {
        typedef _CORBA_ConstrType_Variable_Var<PortTransformationAssociation> _var_type;

        
        ::CORBA::String_member task;

        ::CORBA::String_member port;

        ::CORBA::String_member from_frame;

        ::CORBA::String_member to_frame;

      

        void operator>>= (cdrStream &) const;
        void operator<<= (cdrStream &);
      };

      typedef PortTransformationAssociation::_var_type PortTransformationAssociation_var;

      typedef _CORBA_ConstrType_Variable_OUT_arg< PortTransformationAssociation,PortTransformationAssociation_var > PortTransformationAssociation_out;

      _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_PortTransformationAssociation;

      enum Task_STATES { Task_EXCEPTION, Task_FATAL_ERROR, Task_INIT, Task_PRE_OPERATIONAL, Task_RUNNING, Task_RUNTIME_ERROR, Task_STOPPED /*, __max_Task_STATES=0xffffffff */ };
      typedef Task_STATES& Task_STATES_out;

      _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_Task_STATES;

      _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_vector__transformer_PortFrameAssociation_;

      class vector__transformer_PortFrameAssociation__var;

      class vector__transformer_PortFrameAssociation_ : public _CORBA_Unbounded_Sequence< PortFrameAssociation >  {
      public:
        typedef vector__transformer_PortFrameAssociation__var _var_type;
        inline vector__transformer_PortFrameAssociation_() {}
        inline vector__transformer_PortFrameAssociation_(const vector__transformer_PortFrameAssociation_& _s)
          : _CORBA_Unbounded_Sequence< PortFrameAssociation > (_s) {}

        inline vector__transformer_PortFrameAssociation_(_CORBA_ULong _max)
          : _CORBA_Unbounded_Sequence< PortFrameAssociation > (_max) {}
        inline vector__transformer_PortFrameAssociation_(_CORBA_ULong _max, _CORBA_ULong _len, PortFrameAssociation* _val, _CORBA_Boolean _rel=0)
          : _CORBA_Unbounded_Sequence< PortFrameAssociation > (_max, _len, _val, _rel) {}

      

        inline vector__transformer_PortFrameAssociation_& operator = (const vector__transformer_PortFrameAssociation_& _s) {
          _CORBA_Unbounded_Sequence< PortFrameAssociation > ::operator=(_s);
          return *this;
        }
      };

      class vector__transformer_PortFrameAssociation__out;

      class vector__transformer_PortFrameAssociation__var {
      public:
        inline vector__transformer_PortFrameAssociation__var() : _pd_seq(0) {}
        inline vector__transformer_PortFrameAssociation__var(vector__transformer_PortFrameAssociation_* _s) : _pd_seq(_s) {}
        inline vector__transformer_PortFrameAssociation__var(const vector__transformer_PortFrameAssociation__var& _s) {
          if (_s._pd_seq)  _pd_seq = new vector__transformer_PortFrameAssociation_(*_s._pd_seq);
          else             _pd_seq = 0;
        }
        inline ~vector__transformer_PortFrameAssociation__var() { if (_pd_seq)  delete _pd_seq; }
          
        inline vector__transformer_PortFrameAssociation__var& operator = (vector__transformer_PortFrameAssociation_* _s) {
          if (_pd_seq)  delete _pd_seq;
          _pd_seq = _s;
          return *this;
        }
        inline vector__transformer_PortFrameAssociation__var& operator = (const vector__transformer_PortFrameAssociation__var& _s) {
          if (&_s != this) {
            if (_s._pd_seq) {
              if (!_pd_seq)  _pd_seq = new vector__transformer_PortFrameAssociation_;
              *_pd_seq = *_s._pd_seq;
            }
            else if (_pd_seq) {
              delete _pd_seq;
              _pd_seq = 0;
            }
          }
          return *this;
        }
        inline PortFrameAssociation& operator [] (_CORBA_ULong _s) {
          return (*_pd_seq)[_s];
        }

      

        inline vector__transformer_PortFrameAssociation_* operator -> () { return _pd_seq; }
        inline const vector__transformer_PortFrameAssociation_* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
        inline operator vector__transformer_PortFrameAssociation_& () const { return *_pd_seq; }
#else
        inline operator const vector__transformer_PortFrameAssociation_& () const { return *_pd_seq; }
        inline operator vector__transformer_PortFrameAssociation_& () { return *_pd_seq; }
#endif
          
        inline const vector__transformer_PortFrameAssociation_& in() const { return *_pd_seq; }
        inline vector__transformer_PortFrameAssociation_&       inout()    { return *_pd_seq; }
        inline vector__transformer_PortFrameAssociation_*&      out() {
          if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
          return _pd_seq;
        }
        inline vector__transformer_PortFrameAssociation_* _retn() { vector__transformer_PortFrameAssociation_* tmp = _pd_seq; _pd_seq = 0; return tmp; }
          
        friend class vector__transformer_PortFrameAssociation__out;
        
      private:
        vector__transformer_PortFrameAssociation_* _pd_seq;
      };

      class vector__transformer_PortFrameAssociation__out {
      public:
        inline vector__transformer_PortFrameAssociation__out(vector__transformer_PortFrameAssociation_*& _s) : _data(_s) { _data = 0; }
        inline vector__transformer_PortFrameAssociation__out(vector__transformer_PortFrameAssociation__var& _s)
          : _data(_s._pd_seq) { _s = (vector__transformer_PortFrameAssociation_*) 0; }
        inline vector__transformer_PortFrameAssociation__out(const vector__transformer_PortFrameAssociation__out& _s) : _data(_s._data) {}
        inline vector__transformer_PortFrameAssociation__out& operator = (const vector__transformer_PortFrameAssociation__out& _s) {
          _data = _s._data;
          return *this;
        }
        inline vector__transformer_PortFrameAssociation__out& operator = (vector__transformer_PortFrameAssociation_* _s) {
          _data = _s;
          return *this;
        }
        inline operator vector__transformer_PortFrameAssociation_*&()  { return _data; }
        inline vector__transformer_PortFrameAssociation_*& ptr()       { return _data; }
        inline vector__transformer_PortFrameAssociation_* operator->() { return _data; }

        inline PortFrameAssociation& operator [] (_CORBA_ULong _i) {
          return (*_data)[_i];
        }

      

        vector__transformer_PortFrameAssociation_*& _data;

      private:
        vector__transformer_PortFrameAssociation__out();
        vector__transformer_PortFrameAssociation__out& operator=(const vector__transformer_PortFrameAssociation__var&);
      };

      _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_vector__transformer_PortTransformationAssociation_;

      class vector__transformer_PortTransformationAssociation__var;

      class vector__transformer_PortTransformationAssociation_ : public _CORBA_Unbounded_Sequence< PortTransformationAssociation >  {
      public:
        typedef vector__transformer_PortTransformationAssociation__var _var_type;
        inline vector__transformer_PortTransformationAssociation_() {}
        inline vector__transformer_PortTransformationAssociation_(const vector__transformer_PortTransformationAssociation_& _s)
          : _CORBA_Unbounded_Sequence< PortTransformationAssociation > (_s) {}

        inline vector__transformer_PortTransformationAssociation_(_CORBA_ULong _max)
          : _CORBA_Unbounded_Sequence< PortTransformationAssociation > (_max) {}
        inline vector__transformer_PortTransformationAssociation_(_CORBA_ULong _max, _CORBA_ULong _len, PortTransformationAssociation* _val, _CORBA_Boolean _rel=0)
          : _CORBA_Unbounded_Sequence< PortTransformationAssociation > (_max, _len, _val, _rel) {}

      

        inline vector__transformer_PortTransformationAssociation_& operator = (const vector__transformer_PortTransformationAssociation_& _s) {
          _CORBA_Unbounded_Sequence< PortTransformationAssociation > ::operator=(_s);
          return *this;
        }
      };

      class vector__transformer_PortTransformationAssociation__out;

      class vector__transformer_PortTransformationAssociation__var {
      public:
        inline vector__transformer_PortTransformationAssociation__var() : _pd_seq(0) {}
        inline vector__transformer_PortTransformationAssociation__var(vector__transformer_PortTransformationAssociation_* _s) : _pd_seq(_s) {}
        inline vector__transformer_PortTransformationAssociation__var(const vector__transformer_PortTransformationAssociation__var& _s) {
          if (_s._pd_seq)  _pd_seq = new vector__transformer_PortTransformationAssociation_(*_s._pd_seq);
          else             _pd_seq = 0;
        }
        inline ~vector__transformer_PortTransformationAssociation__var() { if (_pd_seq)  delete _pd_seq; }
          
        inline vector__transformer_PortTransformationAssociation__var& operator = (vector__transformer_PortTransformationAssociation_* _s) {
          if (_pd_seq)  delete _pd_seq;
          _pd_seq = _s;
          return *this;
        }
        inline vector__transformer_PortTransformationAssociation__var& operator = (const vector__transformer_PortTransformationAssociation__var& _s) {
          if (&_s != this) {
            if (_s._pd_seq) {
              if (!_pd_seq)  _pd_seq = new vector__transformer_PortTransformationAssociation_;
              *_pd_seq = *_s._pd_seq;
            }
            else if (_pd_seq) {
              delete _pd_seq;
              _pd_seq = 0;
            }
          }
          return *this;
        }
        inline PortTransformationAssociation& operator [] (_CORBA_ULong _s) {
          return (*_pd_seq)[_s];
        }

      

        inline vector__transformer_PortTransformationAssociation_* operator -> () { return _pd_seq; }
        inline const vector__transformer_PortTransformationAssociation_* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
        inline operator vector__transformer_PortTransformationAssociation_& () const { return *_pd_seq; }
#else
        inline operator const vector__transformer_PortTransformationAssociation_& () const { return *_pd_seq; }
        inline operator vector__transformer_PortTransformationAssociation_& () { return *_pd_seq; }
#endif
          
        inline const vector__transformer_PortTransformationAssociation_& in() const { return *_pd_seq; }
        inline vector__transformer_PortTransformationAssociation_&       inout()    { return *_pd_seq; }
        inline vector__transformer_PortTransformationAssociation_*&      out() {
          if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
          return _pd_seq;
        }
        inline vector__transformer_PortTransformationAssociation_* _retn() { vector__transformer_PortTransformationAssociation_* tmp = _pd_seq; _pd_seq = 0; return tmp; }
          
        friend class vector__transformer_PortTransformationAssociation__out;
        
      private:
        vector__transformer_PortTransformationAssociation_* _pd_seq;
      };

      class vector__transformer_PortTransformationAssociation__out {
      public:
        inline vector__transformer_PortTransformationAssociation__out(vector__transformer_PortTransformationAssociation_*& _s) : _data(_s) { _data = 0; }
        inline vector__transformer_PortTransformationAssociation__out(vector__transformer_PortTransformationAssociation__var& _s)
          : _data(_s._pd_seq) { _s = (vector__transformer_PortTransformationAssociation_*) 0; }
        inline vector__transformer_PortTransformationAssociation__out(const vector__transformer_PortTransformationAssociation__out& _s) : _data(_s._data) {}
        inline vector__transformer_PortTransformationAssociation__out& operator = (const vector__transformer_PortTransformationAssociation__out& _s) {
          _data = _s._data;
          return *this;
        }
        inline vector__transformer_PortTransformationAssociation__out& operator = (vector__transformer_PortTransformationAssociation_* _s) {
          _data = _s;
          return *this;
        }
        inline operator vector__transformer_PortTransformationAssociation_*&()  { return _data; }
        inline vector__transformer_PortTransformationAssociation_*& ptr()       { return _data; }
        inline vector__transformer_PortTransformationAssociation_* operator->() { return _data; }

        inline PortTransformationAssociation& operator [] (_CORBA_ULong _i) {
          return (*_data)[_i];
        }

      

        vector__transformer_PortTransformationAssociation_*& _data;

      private:
        vector__transformer_PortTransformationAssociation__out();
        vector__transformer_PortTransformationAssociation__out& operator=(const vector__transformer_PortTransformationAssociation__var&);
      };

      struct TransformationStatus {
        typedef _CORBA_ConstrType_Variable_Var<TransformationStatus> _var_type;

        
        ::CORBA::String_member source_local;

        ::CORBA::String_member target_local;

        ::CORBA::String_member source_global;

        ::CORBA::String_member target_global;

        base::Corba::Time last_generated_value;

        ::CORBA::Long chain_length;

        ::CORBA::ULongLong generated_transformations;

        ::CORBA::ULongLong failed_no_chain;

        ::CORBA::ULongLong failed_no_sample;

        ::CORBA::ULongLong failed_interpolation_impossible;

      

        void operator>>= (cdrStream &) const;
        void operator<<= (cdrStream &);
      };

      typedef TransformationStatus::_var_type TransformationStatus_var;

      typedef _CORBA_ConstrType_Variable_OUT_arg< TransformationStatus,TransformationStatus_var > TransformationStatus_out;

      _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_TransformationStatus;

      _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_vector__transformer_TransformationStatus_;

      class vector__transformer_TransformationStatus__var;

      class vector__transformer_TransformationStatus_ : public _CORBA_Unbounded_Sequence< TransformationStatus >  {
      public:
        typedef vector__transformer_TransformationStatus__var _var_type;
        inline vector__transformer_TransformationStatus_() {}
        inline vector__transformer_TransformationStatus_(const vector__transformer_TransformationStatus_& _s)
          : _CORBA_Unbounded_Sequence< TransformationStatus > (_s) {}

        inline vector__transformer_TransformationStatus_(_CORBA_ULong _max)
          : _CORBA_Unbounded_Sequence< TransformationStatus > (_max) {}
        inline vector__transformer_TransformationStatus_(_CORBA_ULong _max, _CORBA_ULong _len, TransformationStatus* _val, _CORBA_Boolean _rel=0)
          : _CORBA_Unbounded_Sequence< TransformationStatus > (_max, _len, _val, _rel) {}

      

        inline vector__transformer_TransformationStatus_& operator = (const vector__transformer_TransformationStatus_& _s) {
          _CORBA_Unbounded_Sequence< TransformationStatus > ::operator=(_s);
          return *this;
        }
      };

      class vector__transformer_TransformationStatus__out;

      class vector__transformer_TransformationStatus__var {
      public:
        inline vector__transformer_TransformationStatus__var() : _pd_seq(0) {}
        inline vector__transformer_TransformationStatus__var(vector__transformer_TransformationStatus_* _s) : _pd_seq(_s) {}
        inline vector__transformer_TransformationStatus__var(const vector__transformer_TransformationStatus__var& _s) {
          if (_s._pd_seq)  _pd_seq = new vector__transformer_TransformationStatus_(*_s._pd_seq);
          else             _pd_seq = 0;
        }
        inline ~vector__transformer_TransformationStatus__var() { if (_pd_seq)  delete _pd_seq; }
          
        inline vector__transformer_TransformationStatus__var& operator = (vector__transformer_TransformationStatus_* _s) {
          if (_pd_seq)  delete _pd_seq;
          _pd_seq = _s;
          return *this;
        }
        inline vector__transformer_TransformationStatus__var& operator = (const vector__transformer_TransformationStatus__var& _s) {
          if (&_s != this) {
            if (_s._pd_seq) {
              if (!_pd_seq)  _pd_seq = new vector__transformer_TransformationStatus_;
              *_pd_seq = *_s._pd_seq;
            }
            else if (_pd_seq) {
              delete _pd_seq;
              _pd_seq = 0;
            }
          }
          return *this;
        }
        inline TransformationStatus& operator [] (_CORBA_ULong _s) {
          return (*_pd_seq)[_s];
        }

      

        inline vector__transformer_TransformationStatus_* operator -> () { return _pd_seq; }
        inline const vector__transformer_TransformationStatus_* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
        inline operator vector__transformer_TransformationStatus_& () const { return *_pd_seq; }
#else
        inline operator const vector__transformer_TransformationStatus_& () const { return *_pd_seq; }
        inline operator vector__transformer_TransformationStatus_& () { return *_pd_seq; }
#endif
          
        inline const vector__transformer_TransformationStatus_& in() const { return *_pd_seq; }
        inline vector__transformer_TransformationStatus_&       inout()    { return *_pd_seq; }
        inline vector__transformer_TransformationStatus_*&      out() {
          if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
          return _pd_seq;
        }
        inline vector__transformer_TransformationStatus_* _retn() { vector__transformer_TransformationStatus_* tmp = _pd_seq; _pd_seq = 0; return tmp; }
          
        friend class vector__transformer_TransformationStatus__out;
        
      private:
        vector__transformer_TransformationStatus_* _pd_seq;
      };

      class vector__transformer_TransformationStatus__out {
      public:
        inline vector__transformer_TransformationStatus__out(vector__transformer_TransformationStatus_*& _s) : _data(_s) { _data = 0; }
        inline vector__transformer_TransformationStatus__out(vector__transformer_TransformationStatus__var& _s)
          : _data(_s._pd_seq) { _s = (vector__transformer_TransformationStatus_*) 0; }
        inline vector__transformer_TransformationStatus__out(const vector__transformer_TransformationStatus__out& _s) : _data(_s._data) {}
        inline vector__transformer_TransformationStatus__out& operator = (const vector__transformer_TransformationStatus__out& _s) {
          _data = _s._data;
          return *this;
        }
        inline vector__transformer_TransformationStatus__out& operator = (vector__transformer_TransformationStatus_* _s) {
          _data = _s;
          return *this;
        }
        inline operator vector__transformer_TransformationStatus_*&()  { return _data; }
        inline vector__transformer_TransformationStatus_*& ptr()       { return _data; }
        inline vector__transformer_TransformationStatus_* operator->() { return _data; }

        inline TransformationStatus& operator [] (_CORBA_ULong _i) {
          return (*_data)[_i];
        }

      

        vector__transformer_TransformationStatus_*& _data;

      private:
        vector__transformer_TransformationStatus__out();
        vector__transformer_TransformationStatus__out& operator=(const vector__transformer_TransformationStatus__var&);
      };

      struct TransformerStatus {
        typedef _CORBA_ConstrType_Variable_Var<TransformerStatus> _var_type;

        
        base::Corba::Time time;

        vector__transformer_TransformationStatus_ transformations;

      

        void operator>>= (cdrStream &) const;
        void operator<<= (cdrStream &);
      };

      typedef TransformerStatus::_var_type TransformerStatus_var;

      typedef _CORBA_ConstrType_Variable_OUT_arg< TransformerStatus,TransformerStatus_var > TransformerStatus_out;

      _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_TransformerStatus;

    _CORBA_MODULE_END

  _CORBA_MODULE_END

  _CORBA_MODULE base

  _CORBA_MODULE_BEG

    _CORBA_MODULE samples

    _CORBA_MODULE_BEG

      _CORBA_MODULE Corba

      _CORBA_MODULE_BEG

        _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_vector__base_samples_RigidBodyState_m_;

        class vector__base_samples_RigidBodyState_m__var;

        class vector__base_samples_RigidBodyState_m_ : public _CORBA_Unbounded_Sequence< RigidBodyState_m >  {
        public:
          typedef vector__base_samples_RigidBodyState_m__var _var_type;
          inline vector__base_samples_RigidBodyState_m_() {}
          inline vector__base_samples_RigidBodyState_m_(const vector__base_samples_RigidBodyState_m_& _s)
            : _CORBA_Unbounded_Sequence< RigidBodyState_m > (_s) {}

          inline vector__base_samples_RigidBodyState_m_(_CORBA_ULong _max)
            : _CORBA_Unbounded_Sequence< RigidBodyState_m > (_max) {}
          inline vector__base_samples_RigidBodyState_m_(_CORBA_ULong _max, _CORBA_ULong _len, RigidBodyState_m* _val, _CORBA_Boolean _rel=0)
            : _CORBA_Unbounded_Sequence< RigidBodyState_m > (_max, _len, _val, _rel) {}

        

          inline vector__base_samples_RigidBodyState_m_& operator = (const vector__base_samples_RigidBodyState_m_& _s) {
            _CORBA_Unbounded_Sequence< RigidBodyState_m > ::operator=(_s);
            return *this;
          }
        };

        class vector__base_samples_RigidBodyState_m__out;

        class vector__base_samples_RigidBodyState_m__var {
        public:
          inline vector__base_samples_RigidBodyState_m__var() : _pd_seq(0) {}
          inline vector__base_samples_RigidBodyState_m__var(vector__base_samples_RigidBodyState_m_* _s) : _pd_seq(_s) {}
          inline vector__base_samples_RigidBodyState_m__var(const vector__base_samples_RigidBodyState_m__var& _s) {
            if (_s._pd_seq)  _pd_seq = new vector__base_samples_RigidBodyState_m_(*_s._pd_seq);
            else             _pd_seq = 0;
          }
          inline ~vector__base_samples_RigidBodyState_m__var() { if (_pd_seq)  delete _pd_seq; }
            
          inline vector__base_samples_RigidBodyState_m__var& operator = (vector__base_samples_RigidBodyState_m_* _s) {
            if (_pd_seq)  delete _pd_seq;
            _pd_seq = _s;
            return *this;
          }
          inline vector__base_samples_RigidBodyState_m__var& operator = (const vector__base_samples_RigidBodyState_m__var& _s) {
            if (&_s != this) {
              if (_s._pd_seq) {
                if (!_pd_seq)  _pd_seq = new vector__base_samples_RigidBodyState_m_;
                *_pd_seq = *_s._pd_seq;
              }
              else if (_pd_seq) {
                delete _pd_seq;
                _pd_seq = 0;
              }
            }
            return *this;
          }
          inline RigidBodyState_m& operator [] (_CORBA_ULong _s) {
            return (*_pd_seq)[_s];
          }

        

          inline vector__base_samples_RigidBodyState_m_* operator -> () { return _pd_seq; }
          inline const vector__base_samples_RigidBodyState_m_* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
          inline operator vector__base_samples_RigidBodyState_m_& () const { return *_pd_seq; }
#else
          inline operator const vector__base_samples_RigidBodyState_m_& () const { return *_pd_seq; }
          inline operator vector__base_samples_RigidBodyState_m_& () { return *_pd_seq; }
#endif
            
          inline const vector__base_samples_RigidBodyState_m_& in() const { return *_pd_seq; }
          inline vector__base_samples_RigidBodyState_m_&       inout()    { return *_pd_seq; }
          inline vector__base_samples_RigidBodyState_m_*&      out() {
            if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
            return _pd_seq;
          }
          inline vector__base_samples_RigidBodyState_m_* _retn() { vector__base_samples_RigidBodyState_m_* tmp = _pd_seq; _pd_seq = 0; return tmp; }
            
          friend class vector__base_samples_RigidBodyState_m__out;
          
        private:
          vector__base_samples_RigidBodyState_m_* _pd_seq;
        };

        class vector__base_samples_RigidBodyState_m__out {
        public:
          inline vector__base_samples_RigidBodyState_m__out(vector__base_samples_RigidBodyState_m_*& _s) : _data(_s) { _data = 0; }
          inline vector__base_samples_RigidBodyState_m__out(vector__base_samples_RigidBodyState_m__var& _s)
            : _data(_s._pd_seq) { _s = (vector__base_samples_RigidBodyState_m_*) 0; }
          inline vector__base_samples_RigidBodyState_m__out(const vector__base_samples_RigidBodyState_m__out& _s) : _data(_s._data) {}
          inline vector__base_samples_RigidBodyState_m__out& operator = (const vector__base_samples_RigidBodyState_m__out& _s) {
            _data = _s._data;
            return *this;
          }
          inline vector__base_samples_RigidBodyState_m__out& operator = (vector__base_samples_RigidBodyState_m_* _s) {
            _data = _s;
            return *this;
          }
          inline operator vector__base_samples_RigidBodyState_m_*&()  { return _data; }
          inline vector__base_samples_RigidBodyState_m_*& ptr()       { return _data; }
          inline vector__base_samples_RigidBodyState_m_* operator->() { return _data; }

          inline RigidBodyState_m& operator [] (_CORBA_ULong _i) {
            return (*_data)[_i];
          }

        

          vector__base_samples_RigidBodyState_m_*& _data;

        private:
          vector__base_samples_RigidBodyState_m__out();
          vector__base_samples_RigidBodyState_m__out& operator=(const vector__base_samples_RigidBodyState_m__var&);
        };

      _CORBA_MODULE_END

    _CORBA_MODULE_END

  _CORBA_MODULE_END

  _CORBA_MODULE transformer

  _CORBA_MODULE_BEG

    _CORBA_MODULE Corba

    _CORBA_MODULE_BEG

      struct ConfigurationState_m {
        typedef _CORBA_ConstrType_Variable_Var<ConfigurationState_m> _var_type;

        
        vector__transformer_PortFrameAssociation_ port_frame_associations;

        vector__transformer_PortTransformationAssociation_ port_transformation_associations;

        base::samples::Corba::vector__base_samples_RigidBodyState_m_ static_transformations;

      

        void operator>>= (cdrStream &) const;
        void operator<<= (cdrStream &);
      };

      typedef ConfigurationState_m::_var_type ConfigurationState_m_var;

      typedef _CORBA_ConstrType_Variable_OUT_arg< ConfigurationState_m,ConfigurationState_m_var > ConfigurationState_m_out;

      _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_ConfigurationState_m;

    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE POA_orogen
_CORBA_MODULE_BEG

  _CORBA_MODULE transformer
  _CORBA_MODULE_BEG

    _CORBA_MODULE Corba
    _CORBA_MODULE_BEG

    _CORBA_MODULE_END

  _CORBA_MODULE_END

  _CORBA_MODULE base
  _CORBA_MODULE_BEG

    _CORBA_MODULE samples
    _CORBA_MODULE_BEG

      _CORBA_MODULE Corba
      _CORBA_MODULE_BEG

      _CORBA_MODULE_END

    _CORBA_MODULE_END

  _CORBA_MODULE_END

  _CORBA_MODULE transformer
  _CORBA_MODULE_BEG

    _CORBA_MODULE Corba
    _CORBA_MODULE_BEG

    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE OBV_orogen
_CORBA_MODULE_BEG

  _CORBA_MODULE transformer
  _CORBA_MODULE_BEG

    _CORBA_MODULE Corba
    _CORBA_MODULE_BEG

    _CORBA_MODULE_END

  _CORBA_MODULE_END

  _CORBA_MODULE base
  _CORBA_MODULE_BEG

    _CORBA_MODULE samples
    _CORBA_MODULE_BEG

      _CORBA_MODULE Corba
      _CORBA_MODULE_BEG

      _CORBA_MODULE_END

    _CORBA_MODULE_END

  _CORBA_MODULE_END

  _CORBA_MODULE transformer
  _CORBA_MODULE_BEG

    _CORBA_MODULE Corba
    _CORBA_MODULE_BEG

    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

extern void operator<<=(::CORBA::Any& _a, const orogen::transformer::Corba::PortFrameAssociation& _s);
extern void operator<<=(::CORBA::Any& _a, orogen::transformer::Corba::PortFrameAssociation* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, orogen::transformer::Corba::PortFrameAssociation*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const orogen::transformer::Corba::PortFrameAssociation*& _sp);

extern void operator<<=(::CORBA::Any& _a, const orogen::transformer::Corba::PortTransformationAssociation& _s);
extern void operator<<=(::CORBA::Any& _a, orogen::transformer::Corba::PortTransformationAssociation* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, orogen::transformer::Corba::PortTransformationAssociation*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const orogen::transformer::Corba::PortTransformationAssociation*& _sp);

inline void operator >>=(orogen::transformer::Corba::Task_STATES _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (orogen::transformer::Corba::Task_STATES& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= orogen::transformer::Corba::Task_STOPPED) {
    _e = (orogen::transformer::Corba::Task_STATES) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, orogen::transformer::Corba::Task_STATES _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, orogen::transformer::Corba::Task_STATES& _s);

void operator<<=(::CORBA::Any& _a, const orogen::transformer::Corba::vector__transformer_PortFrameAssociation_& _s);
void operator<<=(::CORBA::Any& _a, orogen::transformer::Corba::vector__transformer_PortFrameAssociation_* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, orogen::transformer::Corba::vector__transformer_PortFrameAssociation_*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const orogen::transformer::Corba::vector__transformer_PortFrameAssociation_*& _sp);

void operator<<=(::CORBA::Any& _a, const orogen::transformer::Corba::vector__transformer_PortTransformationAssociation_& _s);
void operator<<=(::CORBA::Any& _a, orogen::transformer::Corba::vector__transformer_PortTransformationAssociation_* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, orogen::transformer::Corba::vector__transformer_PortTransformationAssociation_*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const orogen::transformer::Corba::vector__transformer_PortTransformationAssociation_*& _sp);

extern void operator<<=(::CORBA::Any& _a, const orogen::transformer::Corba::TransformationStatus& _s);
extern void operator<<=(::CORBA::Any& _a, orogen::transformer::Corba::TransformationStatus* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, orogen::transformer::Corba::TransformationStatus*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const orogen::transformer::Corba::TransformationStatus*& _sp);

void operator<<=(::CORBA::Any& _a, const orogen::transformer::Corba::vector__transformer_TransformationStatus_& _s);
void operator<<=(::CORBA::Any& _a, orogen::transformer::Corba::vector__transformer_TransformationStatus_* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, orogen::transformer::Corba::vector__transformer_TransformationStatus_*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const orogen::transformer::Corba::vector__transformer_TransformationStatus_*& _sp);

extern void operator<<=(::CORBA::Any& _a, const orogen::transformer::Corba::TransformerStatus& _s);
extern void operator<<=(::CORBA::Any& _a, orogen::transformer::Corba::TransformerStatus* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, orogen::transformer::Corba::TransformerStatus*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const orogen::transformer::Corba::TransformerStatus*& _sp);

void operator<<=(::CORBA::Any& _a, const orogen::base::samples::Corba::vector__base_samples_RigidBodyState_m_& _s);
void operator<<=(::CORBA::Any& _a, orogen::base::samples::Corba::vector__base_samples_RigidBodyState_m_* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, orogen::base::samples::Corba::vector__base_samples_RigidBodyState_m_*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const orogen::base::samples::Corba::vector__base_samples_RigidBodyState_m_*& _sp);

extern void operator<<=(::CORBA::Any& _a, const orogen::transformer::Corba::ConfigurationState_m& _s);
extern void operator<<=(::CORBA::Any& _a, orogen::transformer::Corba::ConfigurationState_m* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, orogen::transformer::Corba::ConfigurationState_m*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const orogen::transformer::Corba::ConfigurationState_m*& _sp);





#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_transformerTypes
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_transformerTypes
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_transformerTypes
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_transformerTypes
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_transformerTypes
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_transformerTypes
#endif

#endif  // __transformerTypes_hh__

