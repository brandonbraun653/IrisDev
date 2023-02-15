/******************************************************************************
 *  File Name:
 *    osal.cpp
 *
 *  Description:
 *    Iris OSAL implementation
 *
 *  2023 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

/*-----------------------------------------------------------------------------
Includes
-----------------------------------------------------------------------------*/
#include <Iris/Iris>

namespace Iris::OSAL
{
  /*---------------------------------------------------------------------------
  Public Functions
  ---------------------------------------------------------------------------*/
  void init()
  {
    // Nothing to do here
  }

  SemaphoreHandle_t createSemaphore( const uint32_t maxCount, const uint32_t initCount )
  {
  }


  void deleteSemaphore( const SemaphoreHandle_t handle )
  {
  }


  MutexHandle_t createMutex()
  {
  }


  void deleteMutex( const MutexHandle_t handle )
  {
  }


  bool waitSemaphore( const SemaphoreHandle_t handle, const uint32_t timeout )
  {
  }


  bool signalSemaphore( const SemaphoreHandle_t handle )
  {
  }


  bool lockMutex( const MutexHandle_t handle, const uint32_t timeout )
  {
  }


  bool unlockMutex( const MutexHandle_t handle )
  {
  }

}    // namespace Iris::OSAL
