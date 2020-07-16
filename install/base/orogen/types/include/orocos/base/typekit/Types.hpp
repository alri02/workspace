/* Generated from orogen/lib/orogen/templates/typekit/Types.hpp */

#ifndef __OROGEN_GENERATED_BASE_TYPES_HPP
#define __OROGEN_GENERATED_BASE_TYPES_HPP

#include <base/JointLimits.hpp>
#include <base/JointState.hpp>
#include <base/JointTransform.hpp>
#include <base/JointsTrajectory.hpp>
#include <base/Pose.hpp>
#include <base/Pressure.hpp>
#include <base/Temperature.hpp>
#include <base/Time.hpp>
#include <base/Trajectory.hpp>
#include <base/TransformWithCovariance.hpp>
#include <base/TwistWithCovariance.hpp>
#include <base/Waypoint.hpp>
#include <base/Wrench.hpp>
#include <base/commands/Joints.hpp>
#include <base/commands/LinearAngular6DCommand.hpp>
#include <base/commands/Motion2D.hpp>
#include <base/commands/Speed6D.hpp>
#include <base/geometry/Spline.hpp>
#include <base/m_types/base_JointTransform.hpp>
#include <base/m_types/base_JointTransformVector.hpp>
#include <base/m_types/base_NamedVector_LT__base_JointTransform_GT_.hpp>
#include <base/m_types/base_NamedVector_LT__base_Wrench_GT_.hpp>
#include <base/m_types/base_Pose.hpp>
#include <base/m_types/base_Pose2D.hpp>
#include <base/m_types/base_Trajectory.hpp>
#include <base/m_types/base_TransformWithCovariance.hpp>
#include <base/m_types/base_TwistWithCovariance.hpp>
#include <base/m_types/base_Waypoint.hpp>
#include <base/m_types/base_Wrench.hpp>
#include <base/m_types/base_commands_LinearAngular6DCommand.hpp>
#include <base/m_types/base_samples_BodyState.hpp>
#include <base/m_types/base_samples_IMUSensors.hpp>
#include <base/m_types/base_samples_Pointcloud.hpp>
#include <base/m_types/base_samples_PoseWithCovariance.hpp>
#include <base/m_types/base_samples_RigidBodyAcceleration.hpp>
#include <base/m_types/base_samples_RigidBodyState.hpp>
#include <base/m_types/base_samples_Wrench.hpp>
#include <base/m_types/base_samples_Wrenches.hpp>
#include <base/m_types/std_vector_LT__base_JointTransform_GT_.hpp>
#include <base/m_types/std_vector_LT__base_Trajectory_GT_.hpp>
#include <base/m_types/std_vector_LT__base_Waypoint_GT_.hpp>
#include <base/m_types/std_vector_LT__base_Wrench_GT_.hpp>
#include <base/samples/BodyState.hpp>
#include <base/samples/CommandSamples.hpp>
#include <base/samples/DepthMap.hpp>
#include <base/samples/DistanceImage.hpp>
#include <base/samples/Frame.hpp>
#include <base/samples/IMUSensors.hpp>
#include <base/samples/Joints.hpp>
#include <base/samples/LaserScan.hpp>
#include <base/samples/Pointcloud.hpp>
#include <base/samples/PoseWithCovariance.hpp>
#include <base/samples/Pressure.hpp>
#include <base/samples/RigidBodyAcceleration.hpp>
#include <base/samples/RigidBodyState.hpp>
#include <base/samples/Sonar.hpp>
#include <base/samples/SonarBeam.hpp>
#include <base/samples/SonarScan.hpp>
#include <base/samples/Temperature.hpp>
#include <base/samples/Wrench.hpp>
#include <base/samples/Wrenches.hpp>
#include <base/wrappers/Eigen.hpp>
#include <base/wrappers/geometry/Spline.hpp>
#include <rtt/extras/ReadOnlyPointer.hpp>
#include <std/typekit/Types.hpp>

#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::RTT::extras::ReadOnlyPointer< ::base::samples::frame::Frame > >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::RTT::extras::ReadOnlyPointer< ::base::samples::frame::Frame > >;
    extern template class RTT::internal::AssignableDataSource< ::RTT::extras::ReadOnlyPointer< ::base::samples::frame::Frame > >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::RTT::extras::ReadOnlyPointer< ::base::samples::frame::Frame > >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::RTT::extras::ReadOnlyPointer< ::base::samples::frame::Frame > >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::RTT::extras::ReadOnlyPointer< ::base::samples::frame::Frame > >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::RTT::extras::ReadOnlyPointer< ::base::samples::frame::Frame > >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::RTT::extras::ReadOnlyPointer< ::base::samples::frame::Frame > >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::RTT::extras::ReadOnlyPointer< ::base::samples::frame::FramePair > >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::RTT::extras::ReadOnlyPointer< ::base::samples::frame::FramePair > >;
    extern template class RTT::internal::AssignableDataSource< ::RTT::extras::ReadOnlyPointer< ::base::samples::frame::FramePair > >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::RTT::extras::ReadOnlyPointer< ::base::samples::frame::FramePair > >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::RTT::extras::ReadOnlyPointer< ::base::samples::frame::FramePair > >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::RTT::extras::ReadOnlyPointer< ::base::samples::frame::FramePair > >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::RTT::extras::ReadOnlyPointer< ::base::samples::frame::FramePair > >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::RTT::extras::ReadOnlyPointer< ::base::samples::frame::FramePair > >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::Affine3d >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::Affine3d >;
    extern template class RTT::internal::AssignableDataSource< ::base::Affine3d >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::Affine3d >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::Affine3d >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::Affine3d >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::Affine3d >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::Affine3d >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::Angle >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::Angle >;
    extern template class RTT::internal::AssignableDataSource< ::base::Angle >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::Angle >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::Angle >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::Angle >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::Angle >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::Angle >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::AngleAxisd >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::AngleAxisd >;
    extern template class RTT::internal::AssignableDataSource< ::base::AngleAxisd >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::AngleAxisd >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::AngleAxisd >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::AngleAxisd >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::AngleAxisd >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::AngleAxisd >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::JointLimits >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::JointLimits >;
    extern template class RTT::internal::AssignableDataSource< ::base::JointLimits >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::JointLimits >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::JointLimits >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::JointLimits >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::JointLimits >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::JointLimits >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::JointState >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::JointState >;
    extern template class RTT::internal::AssignableDataSource< ::base::JointState >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::JointState >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::JointState >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::JointState >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::JointState >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::JointState >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::JointState::MODE >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::JointState::MODE >;
    extern template class RTT::internal::AssignableDataSource< ::base::JointState::MODE >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::JointState::MODE >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::JointState::MODE >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::JointState::MODE >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::JointState::MODE >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::JointState::MODE >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::JointTransform >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::JointTransform >;
    extern template class RTT::internal::AssignableDataSource< ::base::JointTransform >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::JointTransform >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::JointTransform >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::JointTransform >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::JointTransform >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::JointTransform >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::JointTransformVector >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::JointTransformVector >;
    extern template class RTT::internal::AssignableDataSource< ::base::JointTransformVector >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::JointTransformVector >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::JointTransformVector >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::JointTransformVector >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::JointTransformVector >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::JointTransformVector >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::JointsTrajectory >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::JointsTrajectory >;
    extern template class RTT::internal::AssignableDataSource< ::base::JointsTrajectory >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::JointsTrajectory >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::JointsTrajectory >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::JointsTrajectory >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::JointsTrajectory >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::JointsTrajectory >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::Matrix2d >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::Matrix2d >;
    extern template class RTT::internal::AssignableDataSource< ::base::Matrix2d >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::Matrix2d >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::Matrix2d >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::Matrix2d >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::Matrix2d >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::Matrix2d >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::Matrix3d >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::Matrix3d >;
    extern template class RTT::internal::AssignableDataSource< ::base::Matrix3d >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::Matrix3d >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::Matrix3d >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::Matrix3d >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::Matrix3d >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::Matrix3d >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::Matrix4d >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::Matrix4d >;
    extern template class RTT::internal::AssignableDataSource< ::base::Matrix4d >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::Matrix4d >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::Matrix4d >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::Matrix4d >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::Matrix4d >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::Matrix4d >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::Matrix6d >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::Matrix6d >;
    extern template class RTT::internal::AssignableDataSource< ::base::Matrix6d >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::Matrix6d >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::Matrix6d >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::Matrix6d >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::Matrix6d >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::Matrix6d >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::MatrixXd >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::MatrixXd >;
    extern template class RTT::internal::AssignableDataSource< ::base::MatrixXd >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::MatrixXd >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::MatrixXd >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::MatrixXd >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::MatrixXd >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::MatrixXd >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::Pose >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::Pose >;
    extern template class RTT::internal::AssignableDataSource< ::base::Pose >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::Pose >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::Pose >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::Pose >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::Pose >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::Pose >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::Pressure >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::Pressure >;
    extern template class RTT::internal::AssignableDataSource< ::base::Pressure >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::Pressure >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::Pressure >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::Pressure >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::Pressure >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::Pressure >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::Quaterniond >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::Quaterniond >;
    extern template class RTT::internal::AssignableDataSource< ::base::Quaterniond >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::Quaterniond >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::Quaterniond >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::Quaterniond >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::Quaterniond >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::Quaterniond >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::Temperature >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::Temperature >;
    extern template class RTT::internal::AssignableDataSource< ::base::Temperature >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::Temperature >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::Temperature >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::Temperature >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::Temperature >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::Temperature >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::Time >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::Time >;
    extern template class RTT::internal::AssignableDataSource< ::base::Time >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::Time >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::Time >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::Time >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::Time >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::Time >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::Trajectory >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::Trajectory >;
    extern template class RTT::internal::AssignableDataSource< ::base::Trajectory >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::Trajectory >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::Trajectory >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::Trajectory >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::Trajectory >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::Trajectory >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::TransformWithCovariance >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::TransformWithCovariance >;
    extern template class RTT::internal::AssignableDataSource< ::base::TransformWithCovariance >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::TransformWithCovariance >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::TransformWithCovariance >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::TransformWithCovariance >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::TransformWithCovariance >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::TransformWithCovariance >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::TwistWithCovariance >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::TwistWithCovariance >;
    extern template class RTT::internal::AssignableDataSource< ::base::TwistWithCovariance >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::TwistWithCovariance >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::TwistWithCovariance >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::TwistWithCovariance >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::TwistWithCovariance >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::TwistWithCovariance >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::Vector2d >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::Vector2d >;
    extern template class RTT::internal::AssignableDataSource< ::base::Vector2d >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::Vector2d >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::Vector2d >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::Vector2d >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::Vector2d >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::Vector2d >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::Vector3d >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::Vector3d >;
    extern template class RTT::internal::AssignableDataSource< ::base::Vector3d >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::Vector3d >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::Vector3d >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::Vector3d >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::Vector3d >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::Vector3d >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::Vector4d >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::Vector4d >;
    extern template class RTT::internal::AssignableDataSource< ::base::Vector4d >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::Vector4d >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::Vector4d >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::Vector4d >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::Vector4d >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::Vector4d >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::Vector6d >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::Vector6d >;
    extern template class RTT::internal::AssignableDataSource< ::base::Vector6d >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::Vector6d >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::Vector6d >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::Vector6d >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::Vector6d >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::Vector6d >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::VectorXd >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::VectorXd >;
    extern template class RTT::internal::AssignableDataSource< ::base::VectorXd >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::VectorXd >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::VectorXd >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::VectorXd >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::VectorXd >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::VectorXd >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::Waypoint >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::Waypoint >;
    extern template class RTT::internal::AssignableDataSource< ::base::Waypoint >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::Waypoint >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::Waypoint >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::Waypoint >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::Waypoint >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::Waypoint >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::Wrench >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::Wrench >;
    extern template class RTT::internal::AssignableDataSource< ::base::Wrench >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::Wrench >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::Wrench >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::Wrench >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::Wrench >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::Wrench >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::commands::LinearAngular6DCommand >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::commands::LinearAngular6DCommand >;
    extern template class RTT::internal::AssignableDataSource< ::base::commands::LinearAngular6DCommand >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::commands::LinearAngular6DCommand >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::commands::LinearAngular6DCommand >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::commands::LinearAngular6DCommand >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::commands::LinearAngular6DCommand >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::commands::LinearAngular6DCommand >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::commands::Motion2D >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::commands::Motion2D >;
    extern template class RTT::internal::AssignableDataSource< ::base::commands::Motion2D >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::commands::Motion2D >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::commands::Motion2D >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::commands::Motion2D >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::commands::Motion2D >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::commands::Motion2D >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::commands::Speed6D >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::commands::Speed6D >;
    extern template class RTT::internal::AssignableDataSource< ::base::commands::Speed6D >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::commands::Speed6D >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::commands::Speed6D >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::commands::Speed6D >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::commands::Speed6D >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::commands::Speed6D >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::geometry::Spline< 1 > >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::geometry::Spline< 1 > >;
    extern template class RTT::internal::AssignableDataSource< ::base::geometry::Spline< 1 > >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::geometry::Spline< 1 > >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::geometry::Spline< 1 > >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::geometry::Spline< 1 > >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::geometry::Spline< 1 > >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::geometry::Spline< 1 > >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::geometry::Spline< 3 > >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::geometry::Spline< 3 > >;
    extern template class RTT::internal::AssignableDataSource< ::base::geometry::Spline< 3 > >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::geometry::Spline< 3 > >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::geometry::Spline< 3 > >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::geometry::Spline< 3 > >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::geometry::Spline< 3 > >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::geometry::Spline< 3 > >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::BodyState >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::BodyState >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::BodyState >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::BodyState >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::BodyState >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::BodyState >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::BodyState >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::BodyState >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::DepthMap >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::DepthMap >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::DepthMap >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::DepthMap >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::DepthMap >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::DepthMap >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::DepthMap >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::DepthMap >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::DistanceImage >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::DistanceImage >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::DistanceImage >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::DistanceImage >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::DistanceImage >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::DistanceImage >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::DistanceImage >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::DistanceImage >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::IMUSensors >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::IMUSensors >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::IMUSensors >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::IMUSensors >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::IMUSensors >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::IMUSensors >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::IMUSensors >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::IMUSensors >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::Joints >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::Joints >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::Joints >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::Joints >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::Joints >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::Joints >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::Joints >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::Joints >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::LaserScan >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::LaserScan >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::LaserScan >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::LaserScan >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::LaserScan >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::LaserScan >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::LaserScan >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::LaserScan >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::Motion2D >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::Motion2D >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::Motion2D >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::Motion2D >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::Motion2D >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::Motion2D >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::Motion2D >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::Motion2D >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::Pointcloud >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::Pointcloud >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::Pointcloud >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::Pointcloud >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::Pointcloud >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::Pointcloud >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::Pointcloud >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::Pointcloud >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::PoseWithCovariance >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::PoseWithCovariance >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::PoseWithCovariance >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::PoseWithCovariance >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::PoseWithCovariance >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::PoseWithCovariance >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::PoseWithCovariance >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::PoseWithCovariance >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::Pressure >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::Pressure >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::Pressure >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::Pressure >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::Pressure >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::Pressure >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::Pressure >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::Pressure >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::RigidBodyAcceleration >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::RigidBodyAcceleration >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::RigidBodyAcceleration >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::RigidBodyAcceleration >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::RigidBodyAcceleration >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::RigidBodyAcceleration >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::RigidBodyAcceleration >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::RigidBodyAcceleration >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::RigidBodyState >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::RigidBodyState >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::RigidBodyState >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::RigidBodyState >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::RigidBodyState >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::RigidBodyState >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::RigidBodyState >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::RigidBodyState >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::Sonar >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::Sonar >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::Sonar >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::Sonar >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::Sonar >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::Sonar >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::Sonar >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::Sonar >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::SonarBeam >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::SonarBeam >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::SonarBeam >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::SonarBeam >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::SonarBeam >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::SonarBeam >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::SonarBeam >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::SonarBeam >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::SonarScan >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::SonarScan >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::SonarScan >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::SonarScan >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::SonarScan >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::SonarScan >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::SonarScan >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::SonarScan >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::Temperature >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::Temperature >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::Temperature >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::Temperature >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::Temperature >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::Temperature >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::Temperature >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::Temperature >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::Wrench >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::Wrench >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::Wrench >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::Wrench >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::Wrench >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::Wrench >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::Wrench >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::Wrench >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::Wrenches >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::Wrenches >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::Wrenches >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::Wrenches >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::Wrenches >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::Wrenches >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::Wrenches >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::Wrenches >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::frame::Frame >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::frame::Frame >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::frame::Frame >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::frame::Frame >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::frame::Frame >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::frame::Frame >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::frame::Frame >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::frame::Frame >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::frame::FramePair >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::frame::FramePair >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::frame::FramePair >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::frame::FramePair >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::frame::FramePair >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::frame::FramePair >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::frame::FramePair >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::frame::FramePair >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::base::samples::frame::frame_mode_t >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::base::samples::frame::frame_mode_t >;
    extern template class RTT::internal::AssignableDataSource< ::base::samples::frame::frame_mode_t >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::base::samples::frame::frame_mode_t >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::base::samples::frame::frame_mode_t >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::base::samples::frame::frame_mode_t >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::base::samples::frame::frame_mode_t >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::base::samples::frame::frame_mode_t >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::std::string >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::std::string >;
    extern template class RTT::internal::AssignableDataSource< ::std::string >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::std::string >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::std::string >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::std::string >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::std::string >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::std::string >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::std::vector< ::base::Time > >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::std::vector< ::base::Time > >;
    extern template class RTT::internal::AssignableDataSource< ::std::vector< ::base::Time > >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::std::vector< ::base::Time > >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::std::vector< ::base::Time > >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::std::vector< ::base::Time > >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::std::vector< ::base::Time > >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::std::vector< ::base::Time > >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::std::vector< ::base::Trajectory > >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::std::vector< ::base::Trajectory > >;
    extern template class RTT::internal::AssignableDataSource< ::std::vector< ::base::Trajectory > >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::std::vector< ::base::Trajectory > >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::std::vector< ::base::Trajectory > >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::std::vector< ::base::Trajectory > >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::std::vector< ::base::Trajectory > >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::std::vector< ::base::Trajectory > >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::std::vector< ::base::Vector3d > >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::std::vector< ::base::Vector3d > >;
    extern template class RTT::internal::AssignableDataSource< ::std::vector< ::base::Vector3d > >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::std::vector< ::base::Vector3d > >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::std::vector< ::base::Vector3d > >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::std::vector< ::base::Vector3d > >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::std::vector< ::base::Vector3d > >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::std::vector< ::base::Vector3d > >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::std::vector< ::base::Waypoint > >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::std::vector< ::base::Waypoint > >;
    extern template class RTT::internal::AssignableDataSource< ::std::vector< ::base::Waypoint > >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::std::vector< ::base::Waypoint > >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::std::vector< ::base::Waypoint > >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::std::vector< ::base::Waypoint > >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::std::vector< ::base::Waypoint > >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::std::vector< ::base::Waypoint > >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::std::vector< ::std::string > >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::std::vector< ::std::string > >;
    extern template class RTT::internal::AssignableDataSource< ::std::vector< ::std::string > >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::std::vector< ::std::string > >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::std::vector< ::std::string > >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::std::vector< ::std::string > >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::std::vector< ::std::string > >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::std::vector< ::std::string > >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
    extern template class RTT::base::ChannelElement< ::std::vector< boost::uint32_t > >;
#endif
#ifdef CORELIB_DATASOURCE_HPP
    extern template class RTT::internal::DataSource< ::std::vector< boost::uint32_t > >;
    extern template class RTT::internal::AssignableDataSource< ::std::vector< boost::uint32_t > >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    extern template class RTT::internal::ValueDataSource< ::std::vector< boost::uint32_t > >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    extern template class RTT::OutputPort< ::std::vector< boost::uint32_t > >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    extern template class RTT::InputPort< ::std::vector< boost::uint32_t > >;
#endif
#ifdef ORO_PROPERTY_HPP
    extern template class RTT::Property< ::std::vector< boost::uint32_t > >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    extern template class RTT::Attribute< ::std::vector< boost::uint32_t > >;
#endif

#endif

