#pragma once

#include <string>

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

};
