#include "OutputManager.h"

namespace Network
{

	OutputManager::OutputManager()
	{
	 
	}

	void OutputManager::ssend(SOCKET &newConnection, const char * msg)
	{
		 	send(newConnection, msg, sizeof(msg), NULL);
	}

	 

}