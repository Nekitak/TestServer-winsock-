#include "Application.h"
#pragma warning(disable: 4996)
 
static int counter = 0;

namespace Network
{

	Server::Server()
	{
		 
		if (WSAStartup(this->_sock->DLLversion, &this->_sock->wsData) != 0) {
			std::cout << "error";
			exit(1);
		}
 
		this->Run();
	}

	void Server::Configurate()
	{
		sizeofaddr = sizeof(addr);
		addr.sin_addr.s_addr = inet_addr("127.0.0.1");
		addr.sin_port = htons(1111);
		addr.sin_family = AF_INET;
	}

	void Server::Run()
	{
		this->Configurate();

		sListen = socket(AF_INET, SOCK_STREAM, NULL);
		bind(sListen, (SOCKADDR*)&addr, sizeof(addr));

		listen(sListen, SOMAXCONN);

		for (;;) {
			newConnection;
			newConnection = accept(sListen, (SOCKADDR*)&addr, &sizeofaddr);
			std::cout << "Connected!\n";

			 

			connections.push_back(newConnection);
			std::cout << "Connections: " << connections.size();

		}
	}
	 
}