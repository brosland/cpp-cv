#include "FileManager.h"
#include <string.h>
#include <fstream>
#include <streambuf>
#include <sstream>

using namespace std;

FileManager::FileManager()
{
}

FileManager::FileManager(const FileManager& orig)
{
}

FileManager::~FileManager()
{
}

const char* FileManager::read(const char* filename)
{
	std::ifstream t(filename);
	std::stringstream buffer;
	buffer << t.rdbuf();

	return strdup(buffer.str().c_str());
}

void FileManager::write(const char* filename, const char* text)
{
	std::ofstream outputFile(filename);

	outputFile << text;
}