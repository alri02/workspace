########################################################################################################################
#
# CMake version file for the Orocos-RTT package.
# This script checks whether the requested version matches exactly or is compatible with the installed package version.
#
# This script sets the following variables:
#  PACKAGE_VERSION: Full provided version string
#  PACKAGE_VERSION_COMPATIBLE: True if version is compatible
#  PACKAGE_VERSION_EXACT: True if version is exact match
#
########################################################################################################################

# Version string
set(PACKAGE_VERSION 2.8.3)

# Exact match test
if(PACKAGE_FIND_VERSION_MAJOR EQUAL "2")
  if(PACKAGE_FIND_VERSION_MINOR EQUAL "8" OR
     PACKAGE_FIND_VERSION_COUNT LESS "2")
    if(PACKAGE_FIND_VERSION_PATCH EQUAL "3" OR
       PACKAGE_FIND_VERSION_COUNT LESS "3")
      set(PACKAGE_VERSION_EXACT 1)
    endif()
  endif()
endif()

# Compatible version test
if(NOT "2.8.3"       VERSION_LESS PACKAGE_FIND_VERSION AND    # Installed version can't be lower than requested one
       "2" EQUAL        PACKAGE_FIND_VERSION_MAJOR) # ...and major versions must coincide
  set(PACKAGE_VERSION_COMPATIBLE TRUE)
endif()

