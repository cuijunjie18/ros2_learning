# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_startup_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED startup_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(startup_FOUND FALSE)
  elseif(NOT startup_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(startup_FOUND FALSE)
  endif()
  return()
endif()
set(_startup_CONFIG_INCLUDED TRUE)

# output package information
if(NOT startup_FIND_QUIETLY)
  message(STATUS "Found startup: 0.0.0 (${startup_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'startup' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${startup_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(startup_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${startup_DIR}/${_extra}")
endforeach()
