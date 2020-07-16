/* Generated from orogen/lib/orogen/templates/typekit/marshalling_types.hpp */

#ifndef _OROGEN_M_TYPES_BASE_TRANSFORMWITHCOVARIANCE_HPP
#define _OROGEN_M_TYPES_BASE_TRANSFORMWITHCOVARIANCE_HPP

#include <base/TransformWithCovariance.hpp>
#include <base/wrappers/Eigen.hpp>


namespace base {
struct TransformWithCovariance_m
{
   ::wrappers::Vector3d translation ;
   ::wrappers::Quaterniond orientation ;
   ::wrappers::Matrix6d cov ;
};}

#endif
