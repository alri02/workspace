/* Generated from orogen/lib/orogen/templates/typekit/marshalling_types.hpp */

#ifndef _OROGEN_M_TYPES_BASE_SAMPLES_RIGIDBODYSTATE_HPP
#define _OROGEN_M_TYPES_BASE_SAMPLES_RIGIDBODYSTATE_HPP

#include <base/Time.hpp>
#include <base/samples/RigidBodyState.hpp>
#include <base/wrappers/Eigen.hpp>
#include <boost/cstdint.hpp>
#include <string>


namespace base {
    namespace samples {
struct RigidBodyState_m
{
   ::base::Time time ;
   ::std::string sourceFrame ;
   ::std::string targetFrame ;
   ::wrappers::Vector3d position ;
   ::wrappers::Matrix3d cov_position ;
   ::wrappers::Quaterniond orientation ;
   ::wrappers::Matrix3d cov_orientation ;
   ::wrappers::Vector3d velocity ;
   ::wrappers::Matrix3d cov_velocity ;
   ::wrappers::Vector3d angular_velocity ;
   ::wrappers::Matrix3d cov_angular_velocity ;
};    }
}

#endif
