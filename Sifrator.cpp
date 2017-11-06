#include "Sifrator.h"
#include <stdio.h>
#include <string.h>

using namespace std;

Sifrator::Sifrator(char *password)
{
	this->password = password;
}

Sifrator::Sifrator(const Sifrator& orig)
{
}

Sifrator::~Sifrator()
{
}

char* Sifrator::encrypt(const char* inputText)
{
	char* outputText = strdup(inputText);

	for (int i = 0; i < strlen(inputText); i++)
	{
		outputText[i] = (inputText[i] + password[i % strlen(password)]) % 255;
	}

	return outputText;
}

char* Sifrator::decrypt(const char* inputText)
{
	char* outputText = strdup(inputText);

	for (int i = 0; i < strlen(inputText); i++)
	{
		outputText[i] = (inputText[i] - password[i % strlen(password)]) % 255;
	}

	return outputText;
}

