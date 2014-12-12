#include <iostream>
#include "pinger.h"


using namespace ::std;

int main(int argc, const char* argv[])
{
	if (argc > 1)
		makePingFile ping(argv[1]);		// Gets the IP Address from the command prompt
	else
	{
		std::cout << ":: PING: Ping InterNet Gateway ::\n"
					 "Enter IP Address (Leave blank for 192.168.0.50): ";

		getline(std::cin,ip);
		if (ip == "")
			ip = "192.168.0.50";
	}

	
	
	
	
	return 0;
}

