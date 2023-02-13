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

namespace Iris::Dev
{
  /*---------------------------------------------------------------------------
  Public Data
  ---------------------------------------------------------------------------*/
  extern Session::SessionManager session;

  /*---------------------------------------------------------------------------
  Public Functions
  ---------------------------------------------------------------------------*/
  /**
   * @brief Emulates an embedded thread that does socket processing
   */
  void TestDriverThread();
}  // namespace Iris::Dev

#endif  /* !IRIS_DEV_TEST_DRIVER_HPP */
