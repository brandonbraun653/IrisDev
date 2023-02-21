import Iris_pb2
import Iris_pb2_grpc
import grpc
from pathlib import Path
from loguru import logger
from tests.drivers.exe import IrisExeManager


class IrisClient:

    def __init__(self, rpc_port: int, net_port: int):
        self._iris_exe = IrisExeManager(name="IrisClient",
                                        managed=Path(Path(__file__).parent.parent.parent, "artifacts", "IrisTestClient"))
        self._iris_exe.start(rpc_port, net_port)
        self._rpc_channel = grpc.insecure_channel(f"localhost:{rpc_port}")
        self._rpc_stub = Iris_pb2_grpc.TestServiceStub(self._rpc_channel)

    def __del__(self):
        pass

    def close(self):
        self._iris_exe.close()
        self._rpc_channel.close()


if __name__ == "__main__":
    client = IrisClient(50051, 50052)
    logger.info("Client started")
    input("Press enter to exit")
    client.close()
