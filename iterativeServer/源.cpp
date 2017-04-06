#include "Server.h"
int main()
{
	Server MyServer(20001); //Create server on port 100
	for (int i = 0; i < 1; i++) //Up to 100 times...
	{
		MyServer.ListenForNewConnection(); //Accept new connection (if someones trying to connect)
	}
	std::string userinput; //holds the user's chat message
	while (true)
	{
		std::getline(std::cin, userinput); //Get line if user presses enter and fill the buffer
		MyServer.update(userinput,0);
		std::cout << MyServer.orderNew[0];
		std::cout << std::endl;
	}
	system("pause");
	return 0;
}