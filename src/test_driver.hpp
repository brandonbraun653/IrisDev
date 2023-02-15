/******************************************************************************
 *  File Name:
 *    test_driver.hpp
 *
 *  Description:
 *    Test driver main entry point
 *
 *  2023 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef IRIS_DEV_TEST_DRIVER_HPP
#define IRIS_DEV_TEST_DRIVER_HPP

/*-----------------------------------------------------------------------------
Includes
-----------------------------------------------------------------------------*/
#include <Iris/session>
#include <src/integration/netif.hpp>

namespace Iris::Dev
{
  /*---------------------------------------------------------------------------
  Public Functions
  ---------------------------------------------------------------------------*/
  /**
   * @brief Emulates an embedded thread that does socket processing
   * @return void
   */
  void TestDriverThread();

  /**
   * @brief Get a reference to the test driver session manager
   * @return Session::SessionManager&
   */
  Session::SessionManager &getSession();

  /**
   * @brief Get the network interface used by the test driver
   * @return NetIf&
   */
  NetIf &getNetIf();

}  // namespace Iris::Dev

#endif  /* !IRIS_DEV_TEST_DRIVER_HPP */
