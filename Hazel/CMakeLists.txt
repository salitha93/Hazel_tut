include(vendor/spdlog/cmake/utils.cmake)

if(NOT TARGET spdlog)
    # Stand-alone build
    find_package(spdlog REQUIRED)
endif()

add_library(
Hazel SHARED
src/hazel.hpp
src/Hazel/Core.hpp
src/Hazel/Application.hpp
src/Hazel/Application.cpp
src/Hazel/EntryPoint.hpp
src/Hazel/Log.hpp
src/Hazel/Log.cpp
)

target_link_libraries(Hazel PRIVATE spdlog::spdlog)

target_include_directories(Hazel PUBLIC "$(CMAKE_CURRENT_SOURCE_DIR)/src")