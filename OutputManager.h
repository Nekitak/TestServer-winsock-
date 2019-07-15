#pragma once

#include "define/define.h"

namespace Network
{

	class OutputManager
	{

		public:
			OutputManager();
			
			void ssend(SOCKET &newConnection, const char* msg);

		private:

	};

	 

}