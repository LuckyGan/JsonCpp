cmake_minimum_required(VERSION 3.9)
project(jsoncpp_src_0_5_0)

set(CMAKE_CXX_STANDARD 11)

add_executable(jsoncpp_src_0_5_0
        jsoncpp-src-0.5.0/include/json/autolink.h
        jsoncpp-src-0.5.0/include/json/config.h
        jsoncpp-src-0.5.0/include/json/features.h
        jsoncpp-src-0.5.0/include/json/forwards.h
        jsoncpp-src-0.5.0/include/json/json.h
        jsoncpp-src-0.5.0/include/json/reader.h
        jsoncpp-src-0.5.0/include/json/value.h
        jsoncpp-src-0.5.0/include/json/writer.h
        jsoncpp-src-0.5.0/src/jsontestrunner/main.cpp
        jsoncpp-src-0.5.0/src/lib_json/json_batchallocator.h
        jsoncpp-src-0.5.0/src/lib_json/json_reader.cpp
        jsoncpp-src-0.5.0/src/lib_json/json_value.cpp
        jsoncpp-src-0.5.0/src/lib_json/json_writer.cpp
        jsoncpp-src-0.5.0/src/test_lib_json/jsontest.cpp
        jsoncpp-src-0.5.0/src/test_lib_json/jsontest.h
        jsoncpp-src-0.5.0/src/test_lib_json/main.cpp)
