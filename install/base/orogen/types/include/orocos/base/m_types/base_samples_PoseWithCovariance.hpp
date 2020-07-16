/* Generated from orogen/lib/orogen/templates/typekit/marshalling_types.hpp */

#ifndef _OROGEN_M_TYPES_BASE_SAMPLES_POSEWITHCOVARIANCE_HPP
#define _OROGEN_M_TYPES_BASE_SAMPLES_POSEWITHCOVARIANCE_HPP

#include <base/Time.hpp>
#include <base/m_types/base_TransformWithCovariance.hpp>
#include <base/samples/PoseWithCovariance.hpp>
#include <boost/cstdint.hpp>
#include <string>


namespace base {
    namespace samples {
struct PoseWithCovariance_m
{
   ::base::Time time ;
   ::std::string frame_id ;
   ::std::string object_frame_id ;
   ::base::TransformWithCovariance_m transform ;
};    }
}

#endif
