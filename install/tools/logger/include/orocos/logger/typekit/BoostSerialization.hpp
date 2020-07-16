/* Generated from orogen/lib/orogen/templates/typekit/BoostSerialization.hpp */

#ifndef __OROGEN_GENERATED_LOGGER_BOOST_SERIALIZATION_HPP
#define __OROGEN_GENERATED_LOGGER_BOOST_SERIALIZATION_HPP

#include <logger/typekit/Types.hpp>

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
        void serialize(Archive& a, ::logger::Annotations& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("time", b.time);
a & make_nvp("stream_name", b.stream_name);
a & make_nvp("key", b.key);
a & make_nvp("value", b.value);
        }
        template<typename Archive>
        void serialize(Archive& a, ::logger::Marker& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("id", b.id);
a & make_nvp("type", b.type);
a & make_nvp("comment", b.comment);
a & make_nvp("time", b.time);
        }
        template<typename Archive>
        void serialize(Archive& a, ::logger::StreamMetadata& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("key", b.key);
a & make_nvp("value", b.value);
        }
    }
}

#endif

