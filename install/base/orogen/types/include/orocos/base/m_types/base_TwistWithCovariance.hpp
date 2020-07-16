/* Generated from orogen/lib/orogen/templates/typekit/marshalling_types.hpp */

#ifndef _OROGEN_M_TYPES_BASE_TWISTWITHCOVARIANCE_HPP
#define _OROGEN_M_TYPES_BASE_TWISTWITHCOVARIANCE_HPP

#include <base/TwistWithCovariance.hpp>
#include <base/wrappers/Eigen.hpp>


namespace base {
struct TwistWithCovariance_m
{
   ::wrappers::Vector3d vel ;
   ::wrappers::Vector3d rot ;
   ::wrappers::Matrix6d cov ;
};}

#endif
