/* Generated from orogen/lib/orogen/templates/typekit/BoostSerialization.hpp */

#ifndef __OROGEN_GENERATED_STD_BOOST_SERIALIZATION_HPP
#define __OROGEN_GENERATED_STD_BOOST_SERIALIZATION_HPP

#include <std/typekit/Types.hpp>

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
        void serialize(Archive& a, ::metadata::InterfaceObject& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("name", b.name);
a & make_nvp("metadata", b.metadata);
        }
        template<typename Archive>
        void serialize(Archive& a, ::metadata::KeyValue& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("key", b.key);
a & make_nvp("value", b.value);
        }
        template<typename Archive>
        void serialize(Archive& a, ::metadata::TaskContext& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("metadata", b.metadata);
a & make_nvp("properties", b.properties);
a & make_nvp("input_ports", b.input_ports);
a & make_nvp("output_ports", b.output_ports);
        }
    }
}

#endif

