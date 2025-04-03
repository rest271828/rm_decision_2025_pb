#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "navigator_interfaces::navigator_interfaces__rosidl_generator_py" for configuration ""
set_property(TARGET navigator_interfaces::navigator_interfaces__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(navigator_interfaces::navigator_interfaces__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libnavigator_interfaces__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libnavigator_interfaces__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS navigator_interfaces::navigator_interfaces__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_navigator_interfaces::navigator_interfaces__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libnavigator_interfaces__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
