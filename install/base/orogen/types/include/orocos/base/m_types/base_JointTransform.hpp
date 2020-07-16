/* Generated from orogen/lib/orogen/templates/typekit/marshalling_types.hpp */

#ifndef _OROGEN_M_TYPES_BASE_JOINTTRANSFORM_HPP
#define _OROGEN_M_TYPES_BASE_JOINTTRANSFORM_HPP

#include <base/JointTransform.hpp>
#include <base/wrappers/Eigen.hpp>
#include <boost/cstdint.hpp>
#include <string>


namespace base {
struct JointTransform_m
{
   ::std::string sourceFrame ;
   ::std::string targetFrame ;
   ::wrappers::Vector3d rotationAxis ;
};}

#endif
