add_library(
hazel
src/say-hello/Hello.hpp
src/say-hello/Hello.cpp
)

target_include_directories(hazel PUBLIC "$(CMAKE_CURRENT_SOURCE_DIR)/src/")