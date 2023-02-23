import pytest
from tests.drivers.client import IrisClient


@pytest.fixture()
def iris_client() -> IrisClient:
    client = IrisClient(50051, 50052, attach=True)
    yield client
    client.close()
