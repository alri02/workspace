/* Generated from orogen/lib/orogen/templates/typekit/marshalling_types.hpp */

#ifndef _OROGEN_M_TYPES_BASE_WAYPOINT_HPP
#define _OROGEN_M_TYPES_BASE_WAYPOINT_HPP

#include <base/Waypoint.hpp>
#include <base/wrappers/Eigen.hpp>


namespace base {
struct Waypoint_m
{
   ::wrappers::Vector3d position ;
   double heading ;
   double tol_position ;
   double tol_heading ;
};}

#endif
