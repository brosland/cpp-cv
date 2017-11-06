#include <string.h>
#include <iostream>
#include "Command.h"

using namespace std;

Command::Command(int argc, char* argv[])
{
	this->mode = strcmp(argv[1], "-e") == 0 ? Command::Mode::encode : Command::Mode::decode;
	this->password = argv[2];
	this->inputFile = argv[3];

	if (strcmp(argv[4], "-c") != 0)
	{
		this->outputFile = argv[4];
	}
}

Command::Command(const Command& orig)
{
}

Command::~Command()
{
}

Command::Mode Command::getMode()
{
	return mode;
}

char* Command::getPassword()
{
	return password;
}

char* Command::getInputFile()
{
	return inputFile;
}

char* Command::getOutputFile()
{
	return outputFile;
}

bool Command::isConsoleOutputEnabled()
{
	return outputFile == NULL;
}
