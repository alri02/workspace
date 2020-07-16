add_definitions(-DENABLE_DEBUG_DRAWINGS)
find_package(Boost COMPONENTS system thread)
rock_executable(Grid_visual Main.cpp
                DEPS_PKGCONFIG vizkit3d base-types base-viz vizkit3d_debug_drawings openscenegraph  
                DEPS_PLAIN
                    Boost_SYSTEM
                    Boost_THREAD)

