/* Generated from orogen/lib/orogen/templates/typekit/marshalling_types.hpp */

#ifndef _OROGEN_M_TYPES_TRANSFORMER_CONFIGURATIONSTATE_HPP
#define _OROGEN_M_TYPES_TRANSFORMER_CONFIGURATIONSTATE_HPP

#include <base/m_types/base_samples_RigidBodyState.hpp>
#include <transformer/BroadcastTypes.hpp>
#include <vector>


namespace transformer {
struct ConfigurationState_m
{
   ::std::vector< ::transformer::PortFrameAssociation > port_frame_associations ;
   ::std::vector< ::transformer::PortTransformationAssociation > port_transformation_associations ;
   ::std::vector< ::base::samples::RigidBodyState_m> static_transformations ;
};}

#endif
