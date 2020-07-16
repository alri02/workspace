/* Generated from orogen/lib/orogen/templates/typekit/marshalling_types.hpp */

#ifndef _OROGEN_M_TYPES_BASE_SAMPLES_WRENCHES_HPP
#define _OROGEN_M_TYPES_BASE_SAMPLES_WRENCHES_HPP

#include <base/Time.hpp>
#include <base/m_types/base_Wrench.hpp>
#include <base/samples/Wrenches.hpp>
#include <boost/cstdint.hpp>
#include <string>
#include <vector>


namespace base {
    namespace samples {
struct Wrenches_m
{
   ::std::vector< ::std::string > names ;
   ::std::vector< ::base::Wrench_m> elements ;
   ::base::Time time ;
};    }
}

#endif
