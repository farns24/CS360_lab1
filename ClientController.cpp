#include "ClientController.h"
#include <sstream>
#include <iostream>


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

    string output = "I don't recognize that command.";
    
    string command;
    string user;
    int index;
    string subject;
    string message;
    ss >> command;
    if (command == "send" && ss >> user && ss >> subject )
      {
	//output = "send";	
	    getline(cin,message);
	  output =  clientComunicator.send(user,subject,message);
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



