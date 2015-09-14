#pragma once

#include "ClientComunicator.h"
#include "ClientController.h"

using namespace::std;
/*************************************************************************
 *Header file for Client Class
 *************************************************************************/
class Client
{
public:
  Client();

  ~Client();

  int start();

  void quit();

private: 

  /**
   * Controller
   */
   ClientController clientController;

  /**
   * Flag marking if we are in debug mode.
   */
  bool debugMode;
};
