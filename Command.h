#ifndef COMMAND_H
#define COMMAND_H

class Command {
public:
	enum Mode {encode, decode};

	Command(int argc, char* argv[]);
	Command(const Command& orig);
	virtual ~Command();
	Mode getMode();
	char* getPassword();
	char* getInputFile();
	char* getOutputFile();
	bool isConsoleOutputEnabled();
private:
	Mode mode;
	char* password;
	bool consoleOutputEnabled = false;
	char* inputFile;
	char* outputFile = NULL;
};

#endif /* COMMAND_H */

