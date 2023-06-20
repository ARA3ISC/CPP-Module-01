#include "replace.hpp"

void	writeToFile(std::string fileName, std::string line, std::string s1, std::string s2) {

	std::fstream fileObj;

	int index = line.find( s1);
	if (index != std::string::npos) {
		line.erase(index, s1.length());
		line.insert(index, s2);
	}
	fileObj.open(fileName + ".replace", std::ios::out | std::ios::app);
	if (fileObj.is_open())
		fileObj << line << std::endl;
}

void	readFromFile(std::string fileName, std::string s1, std::string s2) {

	std::string line;
	std::fstream fileObj;

	fileObj.open(fileName, std::ios::in);
	if (fileObj.is_open()) {
		while (1) {
			if (getline(fileObj, line).eof())
				break;
			writeToFile(fileName, line, s1, s2);
		}
	}
	else
		std::cout << "error\n";
}
