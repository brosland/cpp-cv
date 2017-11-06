#include <cstdlib>
#include <iostream>
#include "Command.h"
#include "Sifrator.h"
#include "FileManager.h"

using namespace std;

int main(int argc, char* argv[])
{
	// parse arguments
	Command command = Command(argc, argv);

	FileManager fileManager = FileManager();

	Sifrator sifrator = Sifrator(command.getPassword());

	// load input file
	const char* inputText = fileManager.read(command.getInputFile());
	const char* outputText;

	if (command.getMode() == Command::Mode::encode)
	{
		outputText = sifrator.encrypt(inputText);
	}
	else
	{
		outputText = sifrator.decrypt(inputText);
	}

	if (command.isConsoleOutputEnabled())
	{
		std::cout << outputText;
	}
	else
	{
		fileManager.write(command.getOutputFile(), outputText);
	}

	return 0;
}

