#include "EchoServer.hpp"

int main()
{
	EchoServer server = EchoServer();
	server.eventLoop();
	return 0;
	// will this work??
}
