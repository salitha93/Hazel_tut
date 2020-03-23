add_library(
Hazel SHARED
src/say-hello/Hello.hpp
src/say-hello/Hello.cpp
)

target_include_directories(Hazel PUBLIC "$(CMAKE_CURRENT_SOURCE_DIR)/src/")