#include <string>
#include <iostream>
#include <sstream>

int main(int argc, const char* argv[])
{
	std::string ip;
	if (argc > 1)
		ip = argv[1];
	else
	{
		std::cout << "PING: Ping InterNet Gateway\nPlease Enter IP Address: ";
		std::cin >> ip;
		std::cout << "You entered: " << ip << std::endl;
	}

	int packets[] = { 2, 8, 16, 50, 128, 256, 512, 1024 };
	
	for (int &x : packets)
	{
		std::stringstream cmd;
		cmd << "ping " << ip << " -l " << x << " -w 2 -n 20 > " << x << "_Packets_" << ip << ".txt";
		std::string tmpCmd = cmd.str();
		std::cout << "Running " << x << "byte packets ping on " << ip << "..." << std::endl;
		const char* runCommand = tmpCmd.c_str();
		system(runCommand);
	}
	
	return 0;
}

