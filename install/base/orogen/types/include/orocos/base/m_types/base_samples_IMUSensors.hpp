/* Generated from orogen/lib/orogen/templates/typekit/marshalling_types.hpp */

#ifndef _OROGEN_M_TYPES_BASE_SAMPLES_IMUSENSORS_HPP
#define _OROGEN_M_TYPES_BASE_SAMPLES_IMUSENSORS_HPP

#include <base/Time.hpp>
#include <base/samples/IMUSensors.hpp>
#include <base/wrappers/Eigen.hpp>


namespace base {
    namespace samples {
struct IMUSensors_m
{
   ::base::Time time ;
   ::wrappers::Vector3d acc ;
   ::wrappers::Vector3d gyro ;
   ::wrappers::Vector3d mag ;
};    }
}

#endif
