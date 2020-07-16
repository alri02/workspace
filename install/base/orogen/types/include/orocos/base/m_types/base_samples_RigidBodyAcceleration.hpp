/* Generated from orogen/lib/orogen/templates/typekit/marshalling_types.hpp */

#ifndef _OROGEN_M_TYPES_BASE_SAMPLES_RIGIDBODYACCELERATION_HPP
#define _OROGEN_M_TYPES_BASE_SAMPLES_RIGIDBODYACCELERATION_HPP

#include <base/Time.hpp>
#include <base/samples/RigidBodyAcceleration.hpp>
#include <base/wrappers/Eigen.hpp>


namespace base {
    namespace samples {
struct RigidBodyAcceleration_m
{
   ::base::Time time ;
   ::wrappers::Vector3d acceleration ;
   ::wrappers::Matrix3d cov_acceleration ;
   ::wrappers::Vector3d angular_acceleration ;
   ::wrappers::Matrix3d cov_angular_acceleration ;
};    }
}

#endif
