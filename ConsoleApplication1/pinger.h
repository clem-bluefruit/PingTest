#ifndef PINGER_INCLUDED
#define PINGER_INCLUDED

#include <string>
#include <iostream>
#include <sstream>
#include <regex>
#include <vector>


class makePingFile
{
public:
	makePingFile(std::string ipAddr);
	~makePingFile() {}
	void runPing();
private:
	std::string ipAddr;
	void checkIpAddr();
	std::vector<int> m_Packets = { 2, 8, 16, 50, 128, 256, 512, 1024 };
	std::vector<std::string> m_FileNames;
};


#endif