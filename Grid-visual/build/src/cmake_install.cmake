# Install script for directory: /home/alveena/workspace/Grid-visual/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/alveena/workspace/install/Grid-visual")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/Grid_visual" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/Grid_visual")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/Grid_visual"
         RPATH "/home/alveena/workspace/install/Grid-visual/lib:/home/alveena/workspace/install/gui/vizkit3d/lib:/home/alveena/workspace/install/gui/osgviz/lib:/home/alveena/workspace/install/base/types/lib:/home/alveena/workspace/install/base/logging/lib:/home/alveena/workspace/install/gui/vizkit3d_debug_drawings/lib:/home/alveena/workspace/install/rtt/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/alveena/workspace/Grid-visual/build/src/Grid_visual")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/Grid_visual" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/Grid_visual")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/Grid_visual"
         OLD_RPATH "/home/alveena/workspace/install/gui/vizkit3d/lib:/home/alveena/workspace/install/gui/osgviz/lib:/home/alveena/workspace/install/base/types/lib:/home/alveena/workspace/install/base/logging/lib:/home/alveena/workspace/install/gui/vizkit3d_debug_drawings/lib:/home/alveena/workspace/install/rtt/lib::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/alveena/workspace/install/Grid-visual/lib:/home/alveena/workspace/install/gui/vizkit3d/lib:/home/alveena/workspace/install/gui/osgviz/lib:/home/alveena/workspace/install/base/types/lib:/home/alveena/workspace/install/base/logging/lib:/home/alveena/workspace/install/gui/vizkit3d_debug_drawings/lib:/home/alveena/workspace/install/rtt/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/Grid_visual")
    endif()
  endif()
endif()

