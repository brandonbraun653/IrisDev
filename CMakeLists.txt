cmake_minimum_required(VERSION 3.16.0)
project(IrisDevelopment
        VERSION 1.0.0
        DESCRIPTION "Simple socket oriented point to point networking stack for embedded systems"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

find_package(absl REQUIRED PATHS ${PROJECT_ROOT}/artifacts/lib/cmake/absl)
find_package(Protobuf REQUIRED PATHS ${PROJECT_ROOT}/artifacts/lib/cmake/protobuf)
find_package(gRPC REQUIRED PATHS ${PROJECT_ROOT}/artifacts/lib/cmake/grpc)

add_subdirectory(src)
add_subdirectory(Iris)


# Update Iris include paths for dependencies
target_include_directories(iris_prj_dependencies INTERFACE
  ${PROJECT_ROOT}/lib/etl/include
  ${PROJECT_ROOT}/prj
)