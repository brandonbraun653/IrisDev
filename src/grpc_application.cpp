/******************************************************************************
 *  File Name:
 *    test_server.cpp
 *
 *  Description:
 *    Main entry point to the test server application
 *
 *  2023 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

/*-----------------------------------------------------------------------------
Includes
-----------------------------------------------------------------------------*/
#include <argparse/argparse.hpp>
#include <src/test_driver.hpp>
#include <src/test_service.hpp>
#include <src/net_pipe.hpp>
#include <thread>


/*-----------------------------------------------------------------------------
Public Functions
-----------------------------------------------------------------------------*/
int main( int argc, char **argv )
{
  argparse::ArgumentParser program( "test_server" );
  program.add_argument( "rpc_port" ).help( "External port for RPC" ).scan<'i', int>();
  program.add_argument( "net_port" ).help( "Internal port for P2P networking" ).scan<'i', int>();

  try
  {
    program.parse_args( argc, argv );
  }
  catch( const std::runtime_error &err )
  {
    std::cout << err.what() << std::endl;
    std::cout << program;
    std::exit( 1 );
  }

  /*---------------------------------------------------------------------------
  Validate the port numbers
  ---------------------------------------------------------------------------*/
  auto rpc_port = program.get<int>( "rpc_port" );
  auto net_port = program.get<int>( "net_port" );

  if( rpc_port == net_port )
  {
    std::cout << "RPC and networking ports cannot be the same" << std::endl;
    std::exit( 1 );
  }

  /*---------------------------------------------------------------------------
  Start the test service thread
  ---------------------------------------------------------------------------*/
  std::string rpc_address = "0.0.0.0:" + std::to_string( rpc_port );
  std::thread rpc_thread( Iris::Dev::TestServiceThread, rpc_address );

  std::string net_address = "0.0.0.0:" + std::to_string( net_port );
  std::thread net_thread( Iris::Dev::NetPipeThread, net_address );

  /*---------------------------------------------------------------------------
  Run the networking application
  ---------------------------------------------------------------------------*/
  Iris::Dev::TestDriverThread();

  /*---------------------------------------------------------------------------
  Tear down the servers
  ---------------------------------------------------------------------------*/
  Iris::Dev::RPCNetPipeServer->Shutdown();
  net_thread.join();
  Iris::Dev::RPCTestServer->Shutdown();
  rpc_thread.join();
}
