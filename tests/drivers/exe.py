import time
from loguru import logger
from pathlib import Path
from subprocess import Popen, PIPE, STDOUT
from datetime import datetime


class IrisExeManager:

    def __init__(self, name: str, managed: Path):
        self._iris_exe = managed
        assert self._iris_exe.exists()
        assert self._iris_exe.is_file()

        self._process = None
        self._output_file = Path(self._iris_exe.parent, f"{name}.log")

    def start(self, rpc_port: int, net_port: int) -> None:
        """
        Start the managed executable.
        Args:
            rpc_port: Port to use for the RPC server
            net_port: Port to use for the P2P network

        Returns:
            None
        """
        with open(self._output_file, "a") as f:
            f.write(f"**** Starting Iris executable at {datetime.now().strftime('%m/%d/%Y, %H:%M:%S')} ****\n")

        open_cmd = [self._iris_exe.as_posix(), str(rpc_port), str(net_port)]
        logger.info(f"Starting Iris executable with command: {' '.join(open_cmd)}")
        self._process = Popen(open_cmd, stdout=PIPE, stderr=STDOUT, universal_newlines=True)
        time.sleep(0.1)

    def close(self) -> None:
        """
        Close the managed executable.
        Returns:
            None
        """
        logger.info("Closing Iris executable")
        self._process.kill()
        stdout, stderr = self._process.communicate()
        with open(self._output_file, "a") as f:
            f.write(stdout)


if __name__ == '__main__':
    iris_exe = IrisExeManager(name="IrisTest",
                              managed=Path(Path(__file__).parent.parent, "artifacts", "IrisTestClient"))
    iris_exe.start(5000, 5001)
    time.sleep(5)
    iris_exe.close()
