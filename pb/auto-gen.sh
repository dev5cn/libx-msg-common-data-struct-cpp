#
export LD_LIBRARY_PATH=/home/xzwdev/tools/protobuf-3.5.1/lib:$LD_LIBRARY_PATH
export PATH=/home/xzwdev/tools/protobuf-3.5.1/bin:$PATH
#
protoc --proto_path=./  --cpp_out=../cpp/ ./*.proto
