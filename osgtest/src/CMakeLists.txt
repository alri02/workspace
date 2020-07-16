rock_library(osgtest
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp
    DEPS_PKGCONFIG openscenegraph)

rock_executable(osgtest_bin Main.cpp
    DEPS osgtest)

