import Iris_pb2
import Iris_pb2_grpc
import grpc
from google.protobuf.empty_pb2 import Empty
from pathlib import Path
from loguru import logger
from tests.drivers.exe import IrisExeManager


class IrisClient:

    DEFAULT_RPC_TIMEOUT = 0.5

    def __init__(self, rpc_port: int, net_port: int, attach: bool = False):
        """
        Args:
            rpc_port: Which port the IrisClient should use for RPC
            net_port: Which port the IrisClient should use for internal networking
            attach: Attach to an already running IrisClient using the given ports
        """
        # Optionally start the IrisClient
        self._iris_exe = None
        if not attach:
            self._iris_exe = IrisExeManager(name="IrisClient",
                                            managed=Path(Path(__file__).parent.parent.parent, "artifacts",
                                                         "IrisTestClient"))
            self._iris_exe.start(rpc_port, net_port)

        # Set up the RPC connection
        self._rpc_channel = grpc.insecure_channel(f"localhost:{rpc_port}")
        self._rpc_stub = Iris_pb2_grpc.TestServiceStub(self._rpc_channel)

    def __del__(self):
        pass

    def close(self) -> None:
        """
        Tears down the IrisClient
        Returns:
            None
        """
        if self._iris_exe:
            self._iris_exe.close()
        self._rpc_channel.close()

    def get_version(self) -> str:
        """
        Gets the version of the IrisClient
        Returns:
            The version of the IrisClient
        """
        try:
            return self._rpc_stub.GetVersion(Empty(), timeout=self.DEFAULT_RPC_TIMEOUT).version
        except grpc.RpcError as e:
            logger.error(f"Failed to get version: {e}")
            return ""

    def create_socket(self, port: int) -> bool:
        """
        Creates a socket on the IrisClient
        Args:
            port: The port to create the socket on

        Returns:
            None
        """
        try:
            self._rpc_stub.CreateSocket(Iris_pb2.SocketInfo(sock_port=port), timeout=self.DEFAULT_RPC_TIMEOUT)
            return True
        except grpc.RpcError as e:
            logger.error(f"Failed to create socket: {e}")
            return False

    def destroy_socket(self, port: int) -> bool:
        """
        Destroys a socket on the IrisClient
        Args:
            port: The port to destroy the socket on

        Returns:
            None
        """
        try:
            self._rpc_stub.DestroySocket(Iris_pb2.SocketInfo(sock_port=port), timeout=self.DEFAULT_RPC_TIMEOUT)
            return True
        except grpc.RpcError as e:
            logger.error(f"Failed to destroy socket: {e}")
            return False


if __name__ == "__main__":
    client = IrisClient(50051, 50052, attach=True)
    logger.info(f"Version: {client.get_version()}")
    client.close()
