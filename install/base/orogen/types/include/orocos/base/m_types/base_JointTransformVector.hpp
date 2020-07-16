/* Generated from orogen/lib/orogen/templates/typekit/marshalling_types.hpp */

#ifndef _OROGEN_M_TYPES_BASE_JOINTTRANSFORMVECTOR_HPP
#define _OROGEN_M_TYPES_BASE_JOINTTRANSFORMVECTOR_HPP

#include <base/JointTransform.hpp>
#include <base/m_types/base_JointTransform.hpp>
#include <boost/cstdint.hpp>
#include <string>
#include <vector>


namespace base {
struct JointTransformVector_m
{
   ::std::vector< ::std::string > names ;
   ::std::vector< ::base::JointTransform_m> elements ;
};}

#endif
