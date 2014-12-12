#include "pinger.h"

using namespace ::std;

makePingFile::makePingFile(string ipAddr) :
	ipAddr(ipAddr)
{
	checkIpAddr();
}

void makePingFile::checkIpAddr()
{
	ipAddr = (ipAddr == "") ? "192.168.0.50" : ipAddr;
}


void makePingFile::runPing()
{
	for (int x : m_Packets)
	{
		std::stringstream cmd;
		cmd << "ping " << ip << " -l " << x << " -w 2 -n 5 > " << x << "_Packets_" << ip << ".txt";
		std::cout << "Running " << x << " byte packets ping on " << ip << "..." << std::endl;

		std::string tmpCmd = cmd.str();
		const char* runCommand = tmpCmd.c_str();
		system(runCommand);
	}
}