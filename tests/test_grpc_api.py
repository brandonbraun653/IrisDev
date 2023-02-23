from tests.fixtures import *
from tests.drivers.client import IrisClient


@pytest.mark.usefixtures("iris_client")
class TestGRPCApi:

    def test_software_version(self, iris_client: IrisClient):
        assert iris_client.get_version() != ""

    def test_create_and_destroy_socket(self, iris_client: IrisClient):
        assert iris_client.create_socket(1234)
        assert iris_client.destroy_socket(1234)
