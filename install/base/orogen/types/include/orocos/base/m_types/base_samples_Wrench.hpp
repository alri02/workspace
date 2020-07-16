/* Generated from orogen/lib/orogen/templates/typekit/marshalling_types.hpp */

#ifndef _OROGEN_M_TYPES_BASE_SAMPLES_WRENCH_HPP
#define _OROGEN_M_TYPES_BASE_SAMPLES_WRENCH_HPP

#include <base/Time.hpp>
#include <base/samples/Wrench.hpp>
#include <base/wrappers/Eigen.hpp>


namespace base {
    namespace samples {
struct Wrench_m
{
   ::wrappers::Vector3d force ;
   ::wrappers::Vector3d torque ;
   ::base::Time time ;
};    }
}

#endif
