#include "replace.hpp"

void	writeToFile(std::string fileName, std::string line, std::string s1, std::string s2) {

	(void)fileName;
	std::fstream fileObj;

	// std::cout << line << std::endl;
	// return; 
	size_t index = line.find(s1);
	while (index != std::string::npos) {

	// std::cout << "***" << std::endl;
	
		line.erase(index, s1.length());
		line.insert(index, s2);
		if (index == std::string::npos)
			break;
		index = line.find(s1);
	};
	// std::cout << line << std::endl;
	fileObj.open((fileName + ".replace").c_str(), std::ios::out | std::ios::app);
	if (fileObj.is_open())
		fileObj << line << std::endl;
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
		return;
	}
	else
		std::cout << "error\n";
}
