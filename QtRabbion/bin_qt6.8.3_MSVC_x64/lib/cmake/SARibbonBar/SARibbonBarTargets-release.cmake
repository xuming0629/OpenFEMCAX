#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "SARibbonBar::SARibbonBar" for configuration "Release"
set_property(TARGET SARibbonBar::SARibbonBar APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(SARibbonBar::SARibbonBar PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/SARibbonBar.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/SARibbonBar.dll"
  )

list(APPEND _cmake_import_check_targets SARibbonBar::SARibbonBar )
list(APPEND _cmake_import_check_files_for_SARibbonBar::SARibbonBar "${_IMPORT_PREFIX}/lib/SARibbonBar.lib" "${_IMPORT_PREFIX}/bin/SARibbonBar.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
