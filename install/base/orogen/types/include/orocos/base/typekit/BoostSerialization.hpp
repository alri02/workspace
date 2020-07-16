/* Generated from orogen/lib/orogen/templates/typekit/BoostSerialization.hpp */

#ifndef __OROGEN_GENERATED_BASE_BOOST_SERIALIZATION_HPP
#define __OROGEN_GENERATED_BASE_BOOST_SERIALIZATION_HPP

#include <base/typekit/Types.hpp>

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
        void serialize(Archive& a, ::base::Angle& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("rad", b.rad);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::JointLimitRange& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("min", b.min);
a & make_nvp("max", b.max);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::JointLimits& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("names", b.names);
a & make_nvp("elements", b.elements);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::JointState& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("position", b.position);
a & make_nvp("speed", b.speed);
a & make_nvp("effort", b.effort);
a & make_nvp("raw", b.raw);
a & make_nvp("acceleration", b.acceleration);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::JointTransformVector_m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("names", b.names);
a & make_nvp("elements", b.elements);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::JointTransform_m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("sourceFrame", b.sourceFrame);
a & make_nvp("targetFrame", b.targetFrame);
a & make_nvp("rotationAxis", b.rotationAxis);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::JointsTrajectory& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("names", b.names);
a & make_nvp("elements", b.elements);
a & make_nvp("times", b.times);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::NamedVector< ::base::JointLimitRange >& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("names", b.names);
a & make_nvp("elements", b.elements);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::NamedVector< ::base::JointState >& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("names", b.names);
a & make_nvp("elements", b.elements);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::NamedVector< ::std::vector< ::base::JointState > >& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("names", b.names);
a & make_nvp("elements", b.elements);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::NamedVector__base_JointTransform__m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("names", b.names);
a & make_nvp("elements", b.elements);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::NamedVector__base_Wrench__m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("names", b.names);
a & make_nvp("elements", b.elements);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::Pose2D_m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("position", b.position);
a & make_nvp("orientation", b.orientation);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::PoseUpdateThreshold& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("distance", b.distance);
a & make_nvp("angle", b.angle);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::Pose_m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("position", b.position);
a & make_nvp("orientation", b.orientation);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::Pressure& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("pascal", b.pascal);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::Temperature& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("kelvin", b.kelvin);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::Time& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("microseconds", b.microseconds);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::TimeStamped< ::base::commands::Motion2D >& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("translation", b.translation);
a & make_nvp("rotation", b.rotation);
a & make_nvp("heading", b.heading);
a & make_nvp("time", b.time);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::Trajectory_m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("speed", b.speed);
a & make_nvp("spline", b.spline);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::TransformWithCovariance_m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("translation", b.translation);
a & make_nvp("orientation", b.orientation);
a & make_nvp("cov", b.cov);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::TwistWithCovariance_m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("vel", b.vel);
a & make_nvp("rot", b.rot);
a & make_nvp("cov", b.cov);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::Waypoint_m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("position", b.position);
a & make_nvp("heading", b.heading);
a & make_nvp("tol_position", b.tol_position);
a & make_nvp("tol_heading", b.tol_heading);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::Wrench_m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("force", b.force);
a & make_nvp("torque", b.torque);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::commands::LinearAngular6DCommand_m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("time", b.time);
a & make_nvp("linear", b.linear);
a & make_nvp("angular", b.angular);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::commands::Motion2D& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("translation", b.translation);
a & make_nvp("rotation", b.rotation);
a & make_nvp("heading", b.heading);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::commands::Speed6D& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("surge", b.surge);
a & make_nvp("sway", b.sway);
a & make_nvp("heave", b.heave);
a & make_nvp("roll", b.roll);
a & make_nvp("pitch", b.pitch);
a & make_nvp("yaw", b.yaw);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::BodyState_m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("time", b.time);
a & make_nvp("pose", b.pose);
a & make_nvp("velocity", b.velocity);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::DepthMap& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("time", b.time);
a & make_nvp("timestamps", b.timestamps);
a & make_nvp("vertical_projection", b.vertical_projection);
a & make_nvp("horizontal_projection", b.horizontal_projection);
a & make_nvp("vertical_interval", b.vertical_interval);
a & make_nvp("horizontal_interval", b.horizontal_interval);
a & make_nvp("vertical_size", b.vertical_size);
a & make_nvp("horizontal_size", b.horizontal_size);
a & make_nvp("distances", b.distances);
a & make_nvp("remissions", b.remissions);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::DistanceImage& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("time", b.time);
a & make_nvp("width", b.width);
a & make_nvp("height", b.height);
a & make_nvp("scale_x", b.scale_x);
a & make_nvp("scale_y", b.scale_y);
a & make_nvp("center_x", b.center_x);
a & make_nvp("center_y", b.center_y);
a & make_nvp("data", b.data);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::IMUSensors_m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("time", b.time);
a & make_nvp("acc", b.acc);
a & make_nvp("gyro", b.gyro);
a & make_nvp("mag", b.mag);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::Joints& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("names", b.names);
a & make_nvp("elements", b.elements);
a & make_nvp("time", b.time);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::LaserScan& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("time", b.time);
a & make_nvp("start_angle", b.start_angle);
a & make_nvp("angular_resolution", b.angular_resolution);
a & make_nvp("speed", b.speed);
a & make_nvp("ranges", b.ranges);
a & make_nvp("minRange", b.minRange);
a & make_nvp("maxRange", b.maxRange);
a & make_nvp("remission", b.remission);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::Motion2D& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("translation", b.translation);
a & make_nvp("rotation", b.rotation);
a & make_nvp("heading", b.heading);
a & make_nvp("time", b.time);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::Pointcloud_m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("time", b.time);
a & make_nvp("points", b.points);
a & make_nvp("colors", b.colors);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::PoseWithCovariance_m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("time", b.time);
a & make_nvp("frame_id", b.frame_id);
a & make_nvp("object_frame_id", b.object_frame_id);
a & make_nvp("transform", b.transform);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::Pressure& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("pascal", b.pascal);
a & make_nvp("time", b.time);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::RigidBodyAcceleration_m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("time", b.time);
a & make_nvp("acceleration", b.acceleration);
a & make_nvp("cov_acceleration", b.cov_acceleration);
a & make_nvp("angular_acceleration", b.angular_acceleration);
a & make_nvp("cov_angular_acceleration", b.cov_angular_acceleration);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::RigidBodyState_m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("time", b.time);
a & make_nvp("sourceFrame", b.sourceFrame);
a & make_nvp("targetFrame", b.targetFrame);
a & make_nvp("position", b.position);
a & make_nvp("cov_position", b.cov_position);
a & make_nvp("orientation", b.orientation);
a & make_nvp("cov_orientation", b.cov_orientation);
a & make_nvp("velocity", b.velocity);
a & make_nvp("cov_velocity", b.cov_velocity);
a & make_nvp("angular_velocity", b.angular_velocity);
a & make_nvp("cov_angular_velocity", b.cov_angular_velocity);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::Sonar& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("time", b.time);
a & make_nvp("timestamps", b.timestamps);
a & make_nvp("bin_duration", b.bin_duration);
a & make_nvp("beam_width", b.beam_width);
a & make_nvp("beam_height", b.beam_height);
a & make_nvp("bearings", b.bearings);
a & make_nvp("speed_of_sound", b.speed_of_sound);
a & make_nvp("bin_count", b.bin_count);
a & make_nvp("beam_count", b.beam_count);
a & make_nvp("bins", b.bins);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::SonarBeam& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("time", b.time);
a & make_nvp("bearing", b.bearing);
a & make_nvp("sampling_interval", b.sampling_interval);
a & make_nvp("speed_of_sound", b.speed_of_sound);
a & make_nvp("beamwidth_horizontal", b.beamwidth_horizontal);
a & make_nvp("beamwidth_vertical", b.beamwidth_vertical);
a & make_nvp("beam", b.beam);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::SonarScan& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("time", b.time);
a & make_nvp("data", b.data);
a & make_nvp("time_beams", b.time_beams);
a & make_nvp("number_of_beams", b.number_of_beams);
a & make_nvp("number_of_bins", b.number_of_bins);
a & make_nvp("start_bearing", b.start_bearing);
a & make_nvp("angular_resolution", b.angular_resolution);
a & make_nvp("sampling_interval", b.sampling_interval);
a & make_nvp("speed_of_sound", b.speed_of_sound);
a & make_nvp("beamwidth_horizontal", b.beamwidth_horizontal);
a & make_nvp("beamwidth_vertical", b.beamwidth_vertical);
a & make_nvp("memory_layout_column", b.memory_layout_column);
a & make_nvp("polar_coordinates", b.polar_coordinates);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::Temperature& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("kelvin", b.kelvin);
a & make_nvp("time", b.time);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::Wrench_m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("force", b.force);
a & make_nvp("torque", b.torque);
a & make_nvp("time", b.time);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::Wrenches_m& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("names", b.names);
a & make_nvp("elements", b.elements);
a & make_nvp("time", b.time);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::frame::Frame& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("time", b.time);
a & make_nvp("received_time", b.received_time);
a & make_nvp("image", b.image);
a & make_nvp("attributes", b.attributes);
a & make_nvp("size", b.size);
a & make_nvp("data_depth", b.data_depth);
a & make_nvp("pixel_size", b.pixel_size);
a & make_nvp("row_size", b.row_size);
a & make_nvp("frame_mode", b.frame_mode);
a & make_nvp("frame_status", b.frame_status);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::frame::FramePair& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("time", b.time);
a & make_nvp("first", b.first);
a & make_nvp("second", b.second);
a & make_nvp("id", b.id);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::frame::frame_attrib_t& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("data_", b.data_);
a & make_nvp("name_", b.name_);
        }
        template<typename Archive>
        void serialize(Archive& a, ::base::samples::frame::frame_size_t& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("width", b.width);
a & make_nvp("height", b.height);
        }
        template<typename Archive>
        void serialize(Archive& a, ::wrappers::AngleAxis< double >& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("angle", b.angle);
a & make_nvp("axis", boost::serialization::make_array(b.axis, 3));
        }
        template<typename Archive>
        void serialize(Archive& a, ::wrappers::Matrix< double, 2, 1 >& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("data", boost::serialization::make_array(b.data, 2));
        }
        template<typename Archive>
        void serialize(Archive& a, ::wrappers::Matrix< double, 2, 2 >& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("data", boost::serialization::make_array(b.data, 4));
        }
        template<typename Archive>
        void serialize(Archive& a, ::wrappers::Matrix< double, 3, 1 >& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("data", boost::serialization::make_array(b.data, 3));
        }
        template<typename Archive>
        void serialize(Archive& a, ::wrappers::Matrix< double, 3, 3 >& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("data", boost::serialization::make_array(b.data, 9));
        }
        template<typename Archive>
        void serialize(Archive& a, ::wrappers::Matrix< double, 4, 1 >& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("data", boost::serialization::make_array(b.data, 4));
        }
        template<typename Archive>
        void serialize(Archive& a, ::wrappers::Matrix< double, 4, 4 >& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("data", boost::serialization::make_array(b.data, 16));
        }
        template<typename Archive>
        void serialize(Archive& a, ::wrappers::Matrix< double, 6, 1 >& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("data", boost::serialization::make_array(b.data, 6));
        }
        template<typename Archive>
        void serialize(Archive& a, ::wrappers::Matrix< double, 6, 6 >& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("data", boost::serialization::make_array(b.data, 36));
        }
        template<typename Archive>
        void serialize(Archive& a, ::wrappers::MatrixX< double >& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("rows", b.rows);
a & make_nvp("cols", b.cols);
a & make_nvp("data", b.data);
        }
        template<typename Archive>
        void serialize(Archive& a, ::wrappers::Quaternion< double >& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("im", boost::serialization::make_array(b.im, 3));
a & make_nvp("re", b.re);
        }
        template<typename Archive>
        void serialize(Archive& a, ::wrappers::VectorX< double >& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("data", b.data);
        }
        template<typename Archive>
        void serialize(Archive& a, ::wrappers::geometry::Spline& b, unsigned int version)
        {
            using boost::serialization::make_nvp;
            a & make_nvp("geometric_resolution", b.geometric_resolution);
a & make_nvp("dimension", b.dimension);
a & make_nvp("curve_order", b.curve_order);
a & make_nvp("kind", b.kind);
a & make_nvp("knots", b.knots);
a & make_nvp("vertices", b.vertices);
        }
    }
}

#endif

