#ifndef SIFRATOR_H
#define SIFRATOR_H

class Sifrator {
public:
	Sifrator(char *password);
	Sifrator(const Sifrator& orig);
	virtual ~Sifrator();
	char* encrypt(const char* inputText);
	char* decrypt(const char* inputText);
private:
	char *password;
};

#endif /* SIFRATOR_H */

