/* Generated from orogen/lib/orogen/templates/typekit/marshalling_types.hpp */

#ifndef _OROGEN_M_TYPES_BASE_SAMPLES_POINTCLOUD_HPP
#define _OROGEN_M_TYPES_BASE_SAMPLES_POINTCLOUD_HPP

#include <base/Time.hpp>
#include <base/samples/Pointcloud.hpp>
#include <base/wrappers/Eigen.hpp>
#include <vector>


namespace base {
    namespace samples {
struct Pointcloud_m
{
   ::base::Time time ;
   ::std::vector< ::wrappers::Vector3d> points ;
   ::std::vector< ::wrappers::Vector4d> colors ;
};    }
}

#endif
