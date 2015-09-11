#include "ClientController.h"
#include <sstream>


using namespace::std;
/***************************************************************************
 * Represents the Client Controller 
 *
 ***************************************************************************/

  /**
   *Constructor
   */
  ClientController::ClientController()
  {
    
  }

  /**
   *Destructor
   */
  ClientController::~ClientController()
  {

  }
  /**
   *
   *
   */
  string ClientController::process(string input)
  {
    //convert input into a string stream
    stringstream ss;
    ss.str(input);

    string output = "error";
    
    string command;
    string user;
    int index;
    string subject;
    string message;
    ss >> command;
    if (command == "send" && ss >> user && ss >> subject )
      {
	    output = "send";	  
      }

    else if (command =="list" && ss >> user)
      {
	    output = "list";
      }
    else if (command =="read" && ss >> user && ss >> index)
      {
	    output = "read";
      }

    return output;
  }



