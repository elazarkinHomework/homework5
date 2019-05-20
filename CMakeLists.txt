cmake_minimum_required (VERSION 2.6)

project (Homework5)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -O2")

SET(
	DEMO_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/Demo.cpp 
)

add_executable(demo ${DEMO_SOURCES})

target_link_libraries(demo)
