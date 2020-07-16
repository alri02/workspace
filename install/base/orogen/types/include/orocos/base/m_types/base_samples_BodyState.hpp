/* Generated from orogen/lib/orogen/templates/typekit/marshalling_types.hpp */

#ifndef _OROGEN_M_TYPES_BASE_SAMPLES_BODYSTATE_HPP
#define _OROGEN_M_TYPES_BASE_SAMPLES_BODYSTATE_HPP

#include <base/Time.hpp>
#include <base/m_types/base_TransformWithCovariance.hpp>
#include <base/m_types/base_TwistWithCovariance.hpp>
#include <base/samples/BodyState.hpp>


namespace base {
    namespace samples {
struct BodyState_m
{
   ::base::Time time ;
   ::base::TransformWithCovariance_m pose ;
   ::base::TwistWithCovariance_m velocity ;
};    }
}

#endif
