BIN_DIR=$(pwd)/../artifacts/bin
SRC_DIR=$(pwd)/../src
DST_DIR="$SRC_DIR"/generated

mkdir -p "$DST_DIR"

echo "Building Python Bindings"
"$BIN_DIR"/protoc -I="$SRC_DIR" --python_out="$DST_DIR" "$SRC_DIR"/Iris.proto
"$BIN_DIR"/protoc -I="$SRC_DIR" --grpc_out="$DST_DIR" --plugin=protoc-gen-grpc="$BIN_DIR"/grpc_python_plugin "$SRC_DIR"/Iris.proto

echo "Building C++ Bindings"
"$BIN_DIR"/protoc -I="$SRC_DIR" --cpp_out="$DST_DIR" "$SRC_DIR"/Iris.proto
"$BIN_DIR"/protoc -I="$SRC_DIR" --grpc_out="$DST_DIR" --plugin=protoc-gen-grpc="$BIN_DIR"/grpc_cpp_plugin "$SRC_DIR"/Iris.proto
