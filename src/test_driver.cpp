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
#include <Iris/physical>
#include <Iris/session>
#include <Iris/transport>
#include <chrono>
#include <src/integration/netif.hpp>
#include <src/test_service.hpp>
#include <thread>

namespace Iris::Dev
{
  /*---------------------------------------------------------------------------
  Static Data
  ---------------------------------------------------------------------------*/
  static Session::DfltSocketPool s_socket_pool;
  static Session::DfltSocketList s_socket_list;
  static Session::SessionManager s_session;
  static Iris::Dev::NetIf        s_netif;

  /*---------------------------------------------------------------------------
  Public Functions
  ---------------------------------------------------------------------------*/
  void TestDriverThread()
  {
    Session::MgrCfg mgr_cfg;
    mgr_cfg.netif      = s_netif.asAPI();
    mgr_cfg.socketPool = &s_socket_pool;
    mgr_cfg.socketList = &s_socket_list;

    s_session.open( mgr_cfg );

    uint32_t count = 0;

    while( !ApplicationKillSignal )
    {
      std::this_thread::sleep_for( std::chrono::milliseconds( 5 ) );
      s_session.process();
      count++;

      // if( count > 1000 )
      // {
      //   ApplicationKillSignal = true;
      // }
    }

    s_session.close();
  }


  Session::SessionManager &getSession()
  {
    return s_session;
  }


  NetIf &getNetIf()
  {
    return s_netif;
  }
}  // namespace Iris::Dev
