/* Generated from orogen/lib/orogen/templates/typekit/OpaqueConvertions.hpp */

#ifndef __OROGEN_GENERATED_base_OPAQUE_CONVERTIONS_HH
#define __OROGEN_GENERATED_base_OPAQUE_CONVERTIONS_HH

#include <base/typekit/OpaqueFwd.hpp>

#include <base/typekit/Opaques.hpp>

namespace orogen_typekits
{
    /** Returns the intermediate value that is contained in \c real_type */
    ::base::samples::frame::Frame const& toIntermediate(::RTT::extras::ReadOnlyPointer< ::base::samples::frame::Frame > const& real_type);
    /** Stores \c intermediate into \c real_type. \c intermediate is owned by \c
     * real_type afterwards. */
    bool fromIntermediate(::RTT::extras::ReadOnlyPointer< ::base::samples::frame::Frame >& real_type, ::base::samples::frame::Frame* intermediate);
    /** Returns the intermediate value that is contained in \c real_type */
    ::base::samples::frame::FramePair const& toIntermediate(::RTT::extras::ReadOnlyPointer< ::base::samples::frame::FramePair > const& real_type);
    /** Stores \c intermediate into \c real_type. \c intermediate is owned by \c
     * real_type afterwards. */
    bool fromIntermediate(::RTT::extras::ReadOnlyPointer< ::base::samples::frame::FramePair >& real_type, ::base::samples::frame::FramePair* intermediate);



    /** Overloaded from_intermediate function that creates a copy before
     * assigning it to \c value
     */
    void fromIntermediate(::RTT::extras::ReadOnlyPointer< ::base::samples::frame::Frame >& value, ::base::samples::frame::Frame const& _intermediate);

    /** Overloaded from_intermediate function that creates a copy before
     * assigning it to \c value
     */
    void fromIntermediate(::RTT::extras::ReadOnlyPointer< ::base::samples::frame::FramePair >& value, ::base::samples::frame::FramePair const& _intermediate);


    void toIntermediate(::base::JointTransform_m& intermediate, ::base::JointTransform const& value);
    void fromIntermediate(::base::JointTransform& value, ::base::JointTransform_m const& intermediate);

    void toIntermediate(::base::JointTransformVector_m& intermediate, ::base::JointTransformVector const& value);
    void fromIntermediate(::base::JointTransformVector& value, ::base::JointTransformVector_m const& intermediate);

    void toIntermediate(::base::NamedVector__base_JointTransform__m& intermediate, ::base::NamedVector< ::base::JointTransform > const& value);
    void fromIntermediate(::base::NamedVector< ::base::JointTransform >& value, ::base::NamedVector__base_JointTransform__m const& intermediate);

    void toIntermediate(::base::NamedVector__base_Wrench__m& intermediate, ::base::NamedVector< ::base::Wrench > const& value);
    void fromIntermediate(::base::NamedVector< ::base::Wrench >& value, ::base::NamedVector__base_Wrench__m const& intermediate);

    void toIntermediate(::base::Pose_m& intermediate, ::base::Pose const& value);
    void fromIntermediate(::base::Pose& value, ::base::Pose_m const& intermediate);

    void toIntermediate(::base::Pose2D_m& intermediate, ::base::Pose2D const& value);
    void fromIntermediate(::base::Pose2D& value, ::base::Pose2D_m const& intermediate);

    void toIntermediate(::base::Trajectory_m& intermediate, ::base::Trajectory const& value);
    void fromIntermediate(::base::Trajectory& value, ::base::Trajectory_m const& intermediate);

    void toIntermediate(::base::TransformWithCovariance_m& intermediate, ::base::TransformWithCovariance const& value);
    void fromIntermediate(::base::TransformWithCovariance& value, ::base::TransformWithCovariance_m const& intermediate);

    void toIntermediate(::base::TwistWithCovariance_m& intermediate, ::base::TwistWithCovariance const& value);
    void fromIntermediate(::base::TwistWithCovariance& value, ::base::TwistWithCovariance_m const& intermediate);

    void toIntermediate(::base::Waypoint_m& intermediate, ::base::Waypoint const& value);
    void fromIntermediate(::base::Waypoint& value, ::base::Waypoint_m const& intermediate);

    void toIntermediate(::base::Wrench_m& intermediate, ::base::Wrench const& value);
    void fromIntermediate(::base::Wrench& value, ::base::Wrench_m const& intermediate);

    void toIntermediate(::base::commands::LinearAngular6DCommand_m& intermediate, ::base::commands::LinearAngular6DCommand const& value);
    void fromIntermediate(::base::commands::LinearAngular6DCommand& value, ::base::commands::LinearAngular6DCommand_m const& intermediate);

    void toIntermediate(::base::samples::BodyState_m& intermediate, ::base::samples::BodyState const& value);
    void fromIntermediate(::base::samples::BodyState& value, ::base::samples::BodyState_m const& intermediate);

    void toIntermediate(::base::samples::IMUSensors_m& intermediate, ::base::samples::IMUSensors const& value);
    void fromIntermediate(::base::samples::IMUSensors& value, ::base::samples::IMUSensors_m const& intermediate);

    void toIntermediate(::base::samples::Pointcloud_m& intermediate, ::base::samples::Pointcloud const& value);
    void fromIntermediate(::base::samples::Pointcloud& value, ::base::samples::Pointcloud_m const& intermediate);

    void toIntermediate(::base::samples::PoseWithCovariance_m& intermediate, ::base::samples::PoseWithCovariance const& value);
    void fromIntermediate(::base::samples::PoseWithCovariance& value, ::base::samples::PoseWithCovariance_m const& intermediate);

    void toIntermediate(::base::samples::RigidBodyAcceleration_m& intermediate, ::base::samples::RigidBodyAcceleration const& value);
    void fromIntermediate(::base::samples::RigidBodyAcceleration& value, ::base::samples::RigidBodyAcceleration_m const& intermediate);

    void toIntermediate(::base::samples::RigidBodyState_m& intermediate, ::base::samples::RigidBodyState const& value);
    void fromIntermediate(::base::samples::RigidBodyState& value, ::base::samples::RigidBodyState_m const& intermediate);

    void toIntermediate(::base::samples::Wrench_m& intermediate, ::base::samples::Wrench const& value);
    void fromIntermediate(::base::samples::Wrench& value, ::base::samples::Wrench_m const& intermediate);

    void toIntermediate(::base::samples::Wrenches_m& intermediate, ::base::samples::Wrenches const& value);
    void fromIntermediate(::base::samples::Wrenches& value, ::base::samples::Wrenches_m const& intermediate);

    void toIntermediate(::std::vector< ::base::JointTransform_m >& intermediate, ::std::vector< ::base::JointTransform > const& value);
    void fromIntermediate(::std::vector< ::base::JointTransform >& value, ::std::vector< ::base::JointTransform_m > const& intermediate);

    void toIntermediate(::std::vector< ::base::Trajectory_m >& intermediate, ::std::vector< ::base::Trajectory > const& value);
    void fromIntermediate(::std::vector< ::base::Trajectory >& value, ::std::vector< ::base::Trajectory_m > const& intermediate);

    void toIntermediate(::std::vector< ::wrappers::Matrix< double, 3, 1 > >& intermediate, ::std::vector< ::base::Vector3d > const& value);
    void fromIntermediate(::std::vector< ::base::Vector3d >& value, ::std::vector< ::wrappers::Matrix< double, 3, 1 > > const& intermediate);

    void toIntermediate(::std::vector< ::wrappers::Matrix< double, 4, 1 > >& intermediate, ::std::vector< ::base::Vector4d > const& value);
    void fromIntermediate(::std::vector< ::base::Vector4d >& value, ::std::vector< ::wrappers::Matrix< double, 4, 1 > > const& intermediate);

    void toIntermediate(::std::vector< ::base::Waypoint_m >& intermediate, ::std::vector< ::base::Waypoint > const& value);
    void fromIntermediate(::std::vector< ::base::Waypoint >& value, ::std::vector< ::base::Waypoint_m > const& intermediate);

    void toIntermediate(::std::vector< ::base::Wrench_m >& intermediate, ::std::vector< ::base::Wrench > const& value);
    void fromIntermediate(::std::vector< ::base::Wrench >& value, ::std::vector< ::base::Wrench_m > const& intermediate);
}

#endif

