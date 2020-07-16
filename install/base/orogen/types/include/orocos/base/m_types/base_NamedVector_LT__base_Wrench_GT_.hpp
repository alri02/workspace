/* Generated from orogen/lib/orogen/templates/typekit/marshalling_types.hpp */

#ifndef _OROGEN_M_TYPES_BASE_NAMEDVECTOR_LT__BASE_WRENCH_GT__HPP
#define _OROGEN_M_TYPES_BASE_NAMEDVECTOR_LT__BASE_WRENCH_GT__HPP

#include <base/m_types/base_Wrench.hpp>
#include <base/samples/Joints.hpp>
#include <boost/cstdint.hpp>
#include <string>
#include <vector>


namespace base {
struct NamedVector__base_Wrench__m
{
   ::std::vector< ::std::string > names ;
   ::std::vector< ::base::Wrench_m> elements ;
};}

#endif
