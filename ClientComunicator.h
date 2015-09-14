#pragma once

#include <string>
using namespace::std;
/*************************************************************************
 *Header file for Client Comunicator Class
 *************************************************************************/
class ClientComunicator
{
public:
  ClientComunicator();

  ~ClientComunicator();

string send(string user,string subject,string message);

};
