/******************************************************************************
 *  File Name:
 *    test_driver.cpp
 *
 *  Description:
 *    Test driver implementation
 *
 *  2023 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

/*-----------------------------------------------------------------------------
Includes
-----------------------------------------------------------------------------*/
#include <chrono>
#include <thread>
#include <src/test_service.hpp>
#include <Iris/session>
#include <Iris/transport>
#include <Iris/physical>

namespace Iris::Dev
{
  /*---------------------------------------------------------------------------
  Static Data
  ---------------------------------------------------------------------------*/
  static Session::DfltSocketPool s_socket_pool;
  static Session::DfltSocketList s_socket_list;

  /*---------------------------------------------------------------------------
  Public Data
  ---------------------------------------------------------------------------*/
  Session::SessionManager session;

  /*---------------------------------------------------------------------------
  Public Functions
  ---------------------------------------------------------------------------*/
  void TestDriverThread()
  {
    Session::MgrCfg mgr_cfg;
    mgr_cfg.socketPool = &s_socket_pool;
    mgr_cfg.socketList = &s_socket_list;

    session.open( mgr_cfg );


    while( !ApplicationKillSignal )
    {
      std::this_thread::sleep_for( std::chrono::milliseconds( 5 ) );
      session.process();
    }

    session.close();
  }
}  // namespace Iris::Dev
