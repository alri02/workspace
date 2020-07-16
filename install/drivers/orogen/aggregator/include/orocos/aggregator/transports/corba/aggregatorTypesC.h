// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.
#ifndef __aggregatorTypes_hh__
#define __aggregatorTypes_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_aggregatorTypes
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_aggregatorTypes
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_aggregatorTypes
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

  _CORBA_MODULE aggregator

  _CORBA_MODULE_BEG

    _CORBA_MODULE Corba

    _CORBA_MODULE_BEG

      struct TimestampEstimatorStatus {
        typedef _CORBA_ConstrType_Fix_Var<TimestampEstimatorStatus> _var_type;

        
        base::Corba::Time stamp;

        base::Corba::Time period;

        base::Corba::Time latency;

        base::Corba::Time time_raw;

        base::Corba::Time reference_time_raw;

        ::CORBA::Long lost_samples_total;

        ::CORBA::Long lost_samples;

        ::CORBA::Long window_size;

        ::CORBA::Long window_capacity;

        base::Corba::Time base_time;

        base::Corba::Time base_time_reset_offset;

        ::CORBA::Long expected_losses;

        ::CORBA::Long rejected_expected_losses;

      

        void operator>>= (cdrStream &) const;
        void operator<<= (cdrStream &);
      };

      typedef TimestampEstimatorStatus::_var_type TimestampEstimatorStatus_var;

      typedef TimestampEstimatorStatus& TimestampEstimatorStatus_out;

      _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_TimestampEstimatorStatus;

      struct StreamStatus {
        typedef _CORBA_ConstrType_Variable_Var<StreamStatus> _var_type;

        
        ::CORBA::ULongLong buffer_size;

        ::CORBA::ULongLong buffer_fill;

        ::CORBA::ULongLong samples_received;

        ::CORBA::ULongLong samples_processed;

        ::CORBA::ULongLong samples_dropped_buffer_full;

        ::CORBA::ULongLong samples_dropped_late_arriving;

        ::CORBA::ULongLong samples_backward_in_time;

        base::Corba::Time latest_data_time;

        base::Corba::Time earliest_data_time;

        base::Corba::Time latest_sample_time;

        ::CORBA::Boolean active;

        ::CORBA::String_member name;

        ::CORBA::LongLong priority;

      

        void operator>>= (cdrStream &) const;
        void operator<<= (cdrStream &);
      };

      typedef StreamStatus::_var_type StreamStatus_var;

      typedef _CORBA_ConstrType_Variable_OUT_arg< StreamStatus,StreamStatus_var > StreamStatus_out;

      _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_StreamStatus;

      _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_vector__aggregator_StreamStatus_;

      class vector__aggregator_StreamStatus__var;

      class vector__aggregator_StreamStatus_ : public _CORBA_Unbounded_Sequence< StreamStatus >  {
      public:
        typedef vector__aggregator_StreamStatus__var _var_type;
        inline vector__aggregator_StreamStatus_() {}
        inline vector__aggregator_StreamStatus_(const vector__aggregator_StreamStatus_& _s)
          : _CORBA_Unbounded_Sequence< StreamStatus > (_s) {}

        inline vector__aggregator_StreamStatus_(_CORBA_ULong _max)
          : _CORBA_Unbounded_Sequence< StreamStatus > (_max) {}
        inline vector__aggregator_StreamStatus_(_CORBA_ULong _max, _CORBA_ULong _len, StreamStatus* _val, _CORBA_Boolean _rel=0)
          : _CORBA_Unbounded_Sequence< StreamStatus > (_max, _len, _val, _rel) {}

      

        inline vector__aggregator_StreamStatus_& operator = (const vector__aggregator_StreamStatus_& _s) {
          _CORBA_Unbounded_Sequence< StreamStatus > ::operator=(_s);
          return *this;
        }
      };

      class vector__aggregator_StreamStatus__out;

      class vector__aggregator_StreamStatus__var {
      public:
        inline vector__aggregator_StreamStatus__var() : _pd_seq(0) {}
        inline vector__aggregator_StreamStatus__var(vector__aggregator_StreamStatus_* _s) : _pd_seq(_s) {}
        inline vector__aggregator_StreamStatus__var(const vector__aggregator_StreamStatus__var& _s) {
          if (_s._pd_seq)  _pd_seq = new vector__aggregator_StreamStatus_(*_s._pd_seq);
          else             _pd_seq = 0;
        }
        inline ~vector__aggregator_StreamStatus__var() { if (_pd_seq)  delete _pd_seq; }
          
        inline vector__aggregator_StreamStatus__var& operator = (vector__aggregator_StreamStatus_* _s) {
          if (_pd_seq)  delete _pd_seq;
          _pd_seq = _s;
          return *this;
        }
        inline vector__aggregator_StreamStatus__var& operator = (const vector__aggregator_StreamStatus__var& _s) {
          if (&_s != this) {
            if (_s._pd_seq) {
              if (!_pd_seq)  _pd_seq = new vector__aggregator_StreamStatus_;
              *_pd_seq = *_s._pd_seq;
            }
            else if (_pd_seq) {
              delete _pd_seq;
              _pd_seq = 0;
            }
          }
          return *this;
        }
        inline StreamStatus& operator [] (_CORBA_ULong _s) {
          return (*_pd_seq)[_s];
        }

      

        inline vector__aggregator_StreamStatus_* operator -> () { return _pd_seq; }
        inline const vector__aggregator_StreamStatus_* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
        inline operator vector__aggregator_StreamStatus_& () const { return *_pd_seq; }
#else
        inline operator const vector__aggregator_StreamStatus_& () const { return *_pd_seq; }
        inline operator vector__aggregator_StreamStatus_& () { return *_pd_seq; }
#endif
          
        inline const vector__aggregator_StreamStatus_& in() const { return *_pd_seq; }
        inline vector__aggregator_StreamStatus_&       inout()    { return *_pd_seq; }
        inline vector__aggregator_StreamStatus_*&      out() {
          if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
          return _pd_seq;
        }
        inline vector__aggregator_StreamStatus_* _retn() { vector__aggregator_StreamStatus_* tmp = _pd_seq; _pd_seq = 0; return tmp; }
          
        friend class vector__aggregator_StreamStatus__out;
        
      private:
        vector__aggregator_StreamStatus_* _pd_seq;
      };

      class vector__aggregator_StreamStatus__out {
      public:
        inline vector__aggregator_StreamStatus__out(vector__aggregator_StreamStatus_*& _s) : _data(_s) { _data = 0; }
        inline vector__aggregator_StreamStatus__out(vector__aggregator_StreamStatus__var& _s)
          : _data(_s._pd_seq) { _s = (vector__aggregator_StreamStatus_*) 0; }
        inline vector__aggregator_StreamStatus__out(const vector__aggregator_StreamStatus__out& _s) : _data(_s._data) {}
        inline vector__aggregator_StreamStatus__out& operator = (const vector__aggregator_StreamStatus__out& _s) {
          _data = _s._data;
          return *this;
        }
        inline vector__aggregator_StreamStatus__out& operator = (vector__aggregator_StreamStatus_* _s) {
          _data = _s;
          return *this;
        }
        inline operator vector__aggregator_StreamStatus_*&()  { return _data; }
        inline vector__aggregator_StreamStatus_*& ptr()       { return _data; }
        inline vector__aggregator_StreamStatus_* operator->() { return _data; }

        inline StreamStatus& operator [] (_CORBA_ULong _i) {
          return (*_data)[_i];
        }

      

        vector__aggregator_StreamStatus_*& _data;

      private:
        vector__aggregator_StreamStatus__out();
        vector__aggregator_StreamStatus__out& operator=(const vector__aggregator_StreamStatus__var&);
      };

      struct StreamAlignerStatus {
        typedef _CORBA_ConstrType_Variable_Var<StreamAlignerStatus> _var_type;

        
        base::Corba::Time time;

        ::CORBA::String_member name;

        base::Corba::Time current_time;

        base::Corba::Time latest_time;

        ::CORBA::ULongLong samples_dropped_late_arriving;

        vector__aggregator_StreamStatus_ streams;

      

        void operator>>= (cdrStream &) const;
        void operator<<= (cdrStream &);
      };

      typedef StreamAlignerStatus::_var_type StreamAlignerStatus_var;

      typedef _CORBA_ConstrType_Variable_OUT_arg< StreamAlignerStatus,StreamAlignerStatus_var > StreamAlignerStatus_out;

      _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_StreamAlignerStatus;

    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE POA_orogen
_CORBA_MODULE_BEG

  _CORBA_MODULE aggregator
  _CORBA_MODULE_BEG

    _CORBA_MODULE Corba
    _CORBA_MODULE_BEG

    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE OBV_orogen
_CORBA_MODULE_BEG

  _CORBA_MODULE aggregator
  _CORBA_MODULE_BEG

    _CORBA_MODULE Corba
    _CORBA_MODULE_BEG

    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

extern void operator<<=(::CORBA::Any& _a, const orogen::aggregator::Corba::TimestampEstimatorStatus& _s);
extern void operator<<=(::CORBA::Any& _a, orogen::aggregator::Corba::TimestampEstimatorStatus* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, orogen::aggregator::Corba::TimestampEstimatorStatus*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const orogen::aggregator::Corba::TimestampEstimatorStatus*& _sp);

extern void operator<<=(::CORBA::Any& _a, const orogen::aggregator::Corba::StreamStatus& _s);
extern void operator<<=(::CORBA::Any& _a, orogen::aggregator::Corba::StreamStatus* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, orogen::aggregator::Corba::StreamStatus*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const orogen::aggregator::Corba::StreamStatus*& _sp);

void operator<<=(::CORBA::Any& _a, const orogen::aggregator::Corba::vector__aggregator_StreamStatus_& _s);
void operator<<=(::CORBA::Any& _a, orogen::aggregator::Corba::vector__aggregator_StreamStatus_* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, orogen::aggregator::Corba::vector__aggregator_StreamStatus_*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const orogen::aggregator::Corba::vector__aggregator_StreamStatus_*& _sp);

extern void operator<<=(::CORBA::Any& _a, const orogen::aggregator::Corba::StreamAlignerStatus& _s);
extern void operator<<=(::CORBA::Any& _a, orogen::aggregator::Corba::StreamAlignerStatus* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, orogen::aggregator::Corba::StreamAlignerStatus*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const orogen::aggregator::Corba::StreamAlignerStatus*& _sp);





#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_aggregatorTypes
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_aggregatorTypes
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_aggregatorTypes
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_aggregatorTypes
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_aggregatorTypes
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_aggregatorTypes
#endif

#endif  // __aggregatorTypes_hh__

