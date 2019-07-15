#pragma once

#include "define/define.h"
#include "InputManager.h"
#include "OutputManager.h"
 

namespace Network
{

	struct ServerData
	{
		WSAData  wsData;
		WORD DLLversion = MAKEWORD(2, 1);
	};

	struct ServerFrame
	{
		InputManager input;
		OutputManager output;
	};

	typedef std::shared_ptr<ServerData> ServerDataRef;
	typedef std::shared_ptr<ServerFrame> ServerFrameRef;

	class Server
	{

		public:
			Server();
		 
			void Configurate();
			 

		private:	 
			ServerDataRef _sock = std::make_shared<ServerData>();
			ServerFrameRef _data = std::make_shared<ServerFrame>();

			int sizeofaddr;

			SOCKADDR_IN addr; 
			SOCKET sListen;
			SOCKET newConnection;
			std::vector<SOCKET> connections;

			void Run();

			 
	};

	 

	 


}