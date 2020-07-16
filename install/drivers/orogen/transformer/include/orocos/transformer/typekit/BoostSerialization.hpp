/* Generated from orogen/lib/orogen/templates/typekit/BoostSerialization.hpp */

#ifndef __OROGEN_GENERATED_TRANSFORMER_BOOST_SERIALIZATION_HPP
#define __OROGEN_GENERATED_TRANSFORMER_BOOST_SERIALIZATION_HPP

#include <transformer/typekit/Types.hpp>

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/array.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/string.hpp>
#include <boost/serialization/map.hpp>
#include <boost/serialization/set.hpp>
#include <boost/serialization/list.hpp>
#include <boost/serialization/deque.hpp>
#include <boost/serialization/utility.hpp>


namespace boost
{
    namespace serialization
    {
        template<typename Archive>
        void serialize(Archive& a, ::transformer::ConfigurationState_m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("port_frame_associations", b.port_frame_associations);
a & make_nvp("port_transformation_associations", b.port_transformation_associations);
a & make_nvp("static_transformations", b.static_transformations);
        }
        template<typename Archive>
        void serialize(Archive& a, ::transformer::PortFrameAssociation& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("task", b.task);
a & make_nvp("port", b.port);
a & make_nvp("frame", b.frame);
        }
        template<typename Archive>
        void serialize(Archive& a, ::transformer::PortTransformationAssociation& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("task", b.task);
a & make_nvp("port", b.port);
a & make_nvp("from_frame", b.from_frame);
a & make_nvp("to_frame", b.to_frame);
        }
        template<typename Archive>
        void serialize(Archive& a, ::transformer::TransformationStatus& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("source_local", b.source_local);
a & make_nvp("target_local", b.target_local);
a & make_nvp("source_global", b.source_global);
a & make_nvp("target_global", b.target_global);
a & make_nvp("last_generated_value", b.last_generated_value);
a & make_nvp("chain_length", b.chain_length);
a & make_nvp("generated_transformations", b.generated_transformations);
a & make_nvp("failed_no_chain", b.failed_no_chain);
a & make_nvp("failed_no_sample", b.failed_no_sample);
a & make_nvp("failed_interpolation_impossible", b.failed_interpolation_impossible);
        }
        template<typename Archive>
        void serialize(Archive& a, ::transformer::TransformerStatus& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("time", b.time);
a & make_nvp("transformations", b.transformations);
        }
    }
}

#endif

