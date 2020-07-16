/* Generated from orogen/lib/orogen/templates/typekit/marshalling_types.hpp */

#ifndef _OROGEN_M_TYPES_BASE_COMMANDS_LINEARANGULAR6DCOMMAND_HPP
#define _OROGEN_M_TYPES_BASE_COMMANDS_LINEARANGULAR6DCOMMAND_HPP

#include <base/Time.hpp>
#include <base/commands/LinearAngular6DCommand.hpp>
#include <base/wrappers/Eigen.hpp>


namespace base {
    namespace commands {
struct LinearAngular6DCommand_m
{
   ::base::Time time ;
   ::wrappers::Vector3d linear ;
   ::wrappers::Vector3d angular ;
};    }
}

#endif
