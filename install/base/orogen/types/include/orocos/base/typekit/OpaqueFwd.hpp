#ifndef OROGEN_base_OPAQUE_FWD_HPP
#define OROGEN_base_OPAQUE_FWD_HPP



#include <base/JointTransform.hpp>
#include <base/Trajectory.hpp>
#include <base/Waypoint.hpp>
#include <base/Wrench.hpp>
#include <base/geometry/Spline.hpp>
#include <base/m_types/base_JointTransform.hpp>
#include <base/m_types/base_Trajectory.hpp>
#include <base/m_types/base_Waypoint.hpp>
#include <base/m_types/base_Wrench.hpp>
#include <base/samples/Frame.hpp>
#include <base/samples/Joints.hpp>
#include <base/wrappers/Eigen.hpp>
#include <rtt/extras/ReadOnlyPointer.hpp>
#include <vector>


namespace base {
class JointTransform;
class JointTransformVector;
class JointTransformVector_m;
class JointTransform_m;
class NamedVector__base_JointTransform__m;
class NamedVector__base_Wrench__m;
class Pose;
class Pose2D;
class Pose2D_m;
class Pose_m;
class Trajectory;
class Trajectory_m;
class TransformWithCovariance;
class TransformWithCovariance_m;
class TwistWithCovariance;
class TwistWithCovariance_m;
class Waypoint;
class Waypoint_m;
class Wrench;
class Wrench_m;
    namespace commands {
class LinearAngular6DCommand;
class LinearAngular6DCommand_m;
    }
    namespace samples {
class BodyState;
class BodyState_m;
class IMUSensors;
class IMUSensors_m;
class Pointcloud;
class Pointcloud_m;
class PoseWithCovariance;
class PoseWithCovariance_m;
class RigidBodyAcceleration;
class RigidBodyAcceleration_m;
class RigidBodyState;
class RigidBodyState_m;
class Wrench;
class Wrench_m;
class Wrenches;
class Wrenches_m;
        namespace frame {
class Frame;
class FramePair;
        }
    }
}
namespace wrappers {
    namespace geometry {
class Spline;
class Spline;
    }
}

#endif

