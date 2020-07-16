/* Generated from orogen/lib/orogen/templates/typekit/OpaqueConvertions.hpp */

#ifndef __OROGEN_GENERATED_transformer_OPAQUE_CONVERTIONS_HH
#define __OROGEN_GENERATED_transformer_OPAQUE_CONVERTIONS_HH

#include <transformer/typekit/OpaqueFwd.hpp>


namespace orogen_typekits
{




    void toIntermediate(::std::vector< ::base::samples::RigidBodyState_m >& intermediate, ::std::vector< ::base::samples::RigidBodyState > const& value);
    void fromIntermediate(::std::vector< ::base::samples::RigidBodyState >& value, ::std::vector< ::base::samples::RigidBodyState_m > const& intermediate);

    void toIntermediate(::transformer::ConfigurationState_m& intermediate, ::transformer::ConfigurationState const& value);
    void fromIntermediate(::transformer::ConfigurationState& value, ::transformer::ConfigurationState_m const& intermediate);
}

#endif

