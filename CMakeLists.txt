cmake_minimum_required(VERSION 2.8.12)
project(demo-ci-conan)

include(${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

set(SOURCES src/main.cpp)

add_executable(App2 ${SOURCES})
set_target_properties(App2 PROPERTIES CXX_STANDARD 17)
target_link_libraries(App2 PRIVATE CONAN_PKG::libC CONAN_PKG::libD)

install(TARGETS App2
        RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin
        LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
        ARCHIVE DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)

