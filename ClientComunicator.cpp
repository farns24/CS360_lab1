#include "ClientComunicator.h"



using namespace::std;
/***************************************************************************
 * Represents the Client Comunicator 
 *
 ***************************************************************************/

  /**
   *Constructor
   */
  ClientComunicator::ClientComunicator()
  {
    
  }

  /**
   *Destructor
   */
  ClientComunicator::~ClientComunicator()
  {

  }

string ClientComunicator::send(string user,string subject,string message)
{
  
  return "Message Sent to :\n"+user +"\n" +subject + "\n" +message;
}

  
  



