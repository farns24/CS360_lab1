#include "Client.h"
#include <iostream>



using namespace::std;
/***************************************************************************
 * Represents the Client 
 *
 ***************************************************************************/

  /**
   *Constructor
   */
  Client::Client()
  {
    
  }

  /**
   *Destructor
   */
  Client::~Client()
  {

  }
  
  /**
   *Starts the Client. Called at the start of the program.
   *
   *Causes program to wait for input
   */
  int Client::start()
  {
    cout <<"Program Started"<<endl;
    string input;
    //cin << input;
    while (getline(cin, input))
      {
	if (input == "quit")
	  {
	    break;
	  }
	cout << clientController.process(input) <<endl;
      }
    return 0;
  }

  void Client::quit()
  {

  }
  



