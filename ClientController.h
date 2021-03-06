#pragma once

#include <string>
#include "ClientComunicator.h"

using namespace::std;
/*************************************************************************
 *Header file for Client Comunicator Class
 *************************************************************************/
class ClientController
{
public:
  ClientController();

  ~ClientController();

  string process(string input);
private:
  
  /**
   *Comunicator
   */
  ClientComunicator clientComunicator;

};
