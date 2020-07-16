/* Generated from orogen/lib/orogen/templates/typekit/Types.hpp */

#ifndef __OROGEN_GENERATED_TRANSFORMER_TYPES_HPP
#define __OROGEN_GENERATED_TRANSFORMER_TYPES_HPP

#include <transformer/BroadcastTypes.hpp>
#include <transformer/TaskStates.hpp>
#include <transformer/TransformationStatus.hpp>
#include <transformer/m_types/transformer_ConfigurationState.hpp>
#include <base/typekit/Types.hpp>
#include <std/typekit/Types.hpp>

#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::std::vector< ::base::samples::RigidBodyState > >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::std::vector< ::base::samples::RigidBodyState > >;
    extern template class RTT::internal::AssignableDataSource< ::std::vector< ::base::samples::RigidBodyState > >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::std::vector< ::base::samples::RigidBodyState > >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::std::vector< ::base::samples::RigidBodyState > >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::std::vector< ::base::samples::RigidBodyState > >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::std::vector< ::base::samples::RigidBodyState > >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::std::vector< ::base::samples::RigidBodyState > >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::transformer::ConfigurationState >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::transformer::ConfigurationState >;
    extern template class RTT::internal::AssignableDataSource< ::transformer::ConfigurationState >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::transformer::ConfigurationState >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::transformer::ConfigurationState >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::transformer::ConfigurationState >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::transformer::ConfigurationState >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::transformer::ConfigurationState >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::transformer::TransformerStatus >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::transformer::TransformerStatus >;
    extern template class RTT::internal::AssignableDataSource< ::transformer::TransformerStatus >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::transformer::TransformerStatus >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::transformer::TransformerStatus >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::transformer::TransformerStatus >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::transformer::TransformerStatus >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::transformer::TransformerStatus >;
#endif

#endif

