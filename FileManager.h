#ifndef FILEMANAGER_H
#define FILEMANAGER_H

class FileManager {
public:
	FileManager();
	FileManager(const FileManager& orig);
	virtual ~FileManager();
	const char* read(const char* filename);
	void write(const char* filename, const char* text);
private:
};

#endif /* FILEMANAGER_H */

