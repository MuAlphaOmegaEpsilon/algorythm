IF ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_CURRENT_SOURCE_DIR}")
    CMAKE_MINIMUM_REQUIRED (VERSION 3.12.4)
	SET (BUILD_TESTING ON CACHE BOOL "Enable tests builds.")
	INCLUDE ("${CMAKE_SOURCE_DIR}"/cmake/cxx_strict_compile_options.cmake)
	INCLUDE ("${CMAKE_SOURCE_DIR}"/cmake/buildtype_default_release.cmake)
ENDIF ()

PROJECT (
    algorythm
    LANGUAGES CXX
    DESCRIPTION "A C++17 algorithmic library.")

ADD_LIBRARY (algorythm INTERFACE)
TARGET_INCLUDE_DIRECTORIES (algorythm INTERFACE "${CMAKE_SOURCE_DIR}") 
TARGET_COMPILE_FEATURES (
    algorythm
    INTERFACE
    cxx_alias_templates
    cxx_attributes
    cxx_constexpr
    cxx_enum_forward_declarations
    cxx_inline_namespaces
    cxx_noexcept
    cxx_nullptr
    cxx_static_assert
    cxx_std_17
    cxx_variadic_templates)
SET_PROPERTY (TARGET algorythm PROPERTY INTERFACE_CMAKE_CXX_EXTENSIONS OFF)

IF (BUILD_TESTING)
    INCLUDE (CTest)
	ADD_SUBDIRECTORY ("${CMAKE_SOURCE_DIR}" test)
ENDIF ()

