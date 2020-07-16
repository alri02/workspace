/* Generated from orogen/lib/orogen/templates/typekit/BoostSerialization.hpp */

#ifndef __OROGEN_GENERATED_AGGREGATOR_BOOST_SERIALIZATION_HPP
#define __OROGEN_GENERATED_AGGREGATOR_BOOST_SERIALIZATION_HPP

#include <aggregator/typekit/Types.hpp>

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
        void serialize(Archive& a, ::aggregator::StreamAlignerStatus& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("time", b.time);
a & make_nvp("name", b.name);
a & make_nvp("current_time", b.current_time);
a & make_nvp("latest_time", b.latest_time);
a & make_nvp("samples_dropped_late_arriving", b.samples_dropped_late_arriving);
a & make_nvp("streams", b.streams);
        }
        template<typename Archive>
        void serialize(Archive& a, ::aggregator::StreamStatus& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("buffer_size", b.buffer_size);
a & make_nvp("buffer_fill", b.buffer_fill);
a & make_nvp("samples_received", b.samples_received);
a & make_nvp("samples_processed", b.samples_processed);
a & make_nvp("samples_dropped_buffer_full", b.samples_dropped_buffer_full);
a & make_nvp("samples_dropped_late_arriving", b.samples_dropped_late_arriving);
a & make_nvp("samples_backward_in_time", b.samples_backward_in_time);
a & make_nvp("latest_data_time", b.latest_data_time);
a & make_nvp("earliest_data_time", b.earliest_data_time);
a & make_nvp("latest_sample_time", b.latest_sample_time);
a & make_nvp("active", b.active);
a & make_nvp("name", b.name);
a & make_nvp("priority", b.priority);
        }
        template<typename Archive>
        void serialize(Archive& a, ::aggregator::TimestampEstimatorStatus& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("stamp", b.stamp);
a & make_nvp("period", b.period);
a & make_nvp("latency", b.latency);
a & make_nvp("time_raw", b.time_raw);
a & make_nvp("reference_time_raw", b.reference_time_raw);
a & make_nvp("lost_samples_total", b.lost_samples_total);
a & make_nvp("lost_samples", b.lost_samples);
a & make_nvp("window_size", b.window_size);
a & make_nvp("window_capacity", b.window_capacity);
a & make_nvp("base_time", b.base_time);
a & make_nvp("base_time_reset_offset", b.base_time_reset_offset);
a & make_nvp("expected_losses", b.expected_losses);
a & make_nvp("rejected_expected_losses", b.rejected_expected_losses);
        }
    }
}

#endif

