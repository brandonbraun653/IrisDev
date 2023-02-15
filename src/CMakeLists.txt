add_executable(IrisTestClient
  generated/Iris.grpc.pb.cc
  generated/Iris.pb.cc
  grpc_application.cpp
  integration/netif.cpp
  integration/osal.cpp
  test_driver.cpp
  test_service.cpp
  )

target_include_directories(IrisTestClient PRIVATE
  ${PROJECT_ROOT}
  ${PROJECT_ROOT}/artifacts/include
  ${PROJECT_ROOT}/lib/argparse/include
  )

target_link_directories(IrisTestClient PRIVATE
  ${PROJECT_ROOT}/artifacts/lib
  )
target_link_libraries(IrisTestClient PRIVATE
  gRPC::grpc++
  gRPC::gpr
  gRPC::grpc
  gRPC::grpc++
  gRPC::grpc++_reflection
  protobuf::libprotoc
  protobuf::libprotobuf
  protobuf::libprotobuf-lite
  protobuf
  pthread
  iris_intf_inc
  iris_lib
)

add_custom_command(TARGET IrisTestClient POST_BUILD
COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:IrisTestClient> ${PROJECT_ROOT}/artifacts/IrisTestClient
)