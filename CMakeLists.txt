set(PROJECT_NAME cws_proto)

project(${PROJECT_NAME}
  DESCRIPTION "Proto files for grpc communication"
  LANGUAGES CXX
)

find_package(Protobuf CONFIG REQUIRED)
find_package(gRPC CONFIG REQUIRED)

add_library(${PROJECT_NAME} 
  ./src/cwspb/general.pb.h
  ./src/cwspb/general.pb.cc
  ./src/cwspb/general.grpc.pb.h
  ./src/cwspb/general.grpc.pb.cc
  )

target_include_directories(${PROJECT_NAME} PUBLIC ${PROTOC_OUT_DIR})

target_link_libraries(${PROJECT_NAME} PRIVATE
  protobuf::libprotobuf
  gRPC::grpc++
  gRPC::grpc
)

target_include_directories(${PROJECT_NAME} PUBLIC
  src
)

install(TARGETS ${PROJECT_NAME})
