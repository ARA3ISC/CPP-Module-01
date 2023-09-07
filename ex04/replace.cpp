#include "replace.hpp"

void	writeToFile(std::string fileName, std::string line, std::string s1, std::string s2) {

	std::fstream fileObj;

	size_t index = line.find(s1);
	while (index != std::string::npos) {
	
		line.erase(index, s1.length());
		line.insert(index, s2);
		if (index == std::string::npos)
			break;
		index = line.find(s1);
	};
	fileObj.open((fileName + ".replace").c_str(), std::ios::out | std::ios::app);
	if (fileObj.is_open())
		fileObj << line << std::endl;

	fileObj.close();
}

void	readFromFile(std::string fileName, std::string s1, std::string s2) {

	(void)s2;

	std::string line;
	std::fstream fileObj;

	fileObj.open(fileName.c_str(), std::ios::in);
	if (fileObj.is_open()) {
		while (getline(fileObj, line)) {
			writeToFile(fileName, line, s1, s2);
		}
		fileObj.close();
	}
	else
		std::cout << "error\n";
}
