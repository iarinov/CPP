#include <string>
#include <iostream>
#include <fstream> //ifstream

int main (int argc, char **argv) {

	if (argc != 4) {
		std::cout << "Invalid number of arguments" <<std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::ifstream inFile(filename);
	if(s1.empty()) {
		std::cout << "Empty String !" << std::endl;
		return 0;
	}
	if (!inFile) {
		std::cout << "a file with this name - " << argv[1] << " - is not exist !" << std::endl;
		return 1;
	}
	std::ofstream outFile(filename + ".replace");
	if(!outFile) {
		std::cout << "Failed !" << std::endl;
		return 1;
	}

	size_t len = s1.length();
	std::string buff;
	while (getline(inFile, buff)) {
		while (true) {
			size_t pos = buff.find(s1);
			if (pos != std::string::npos) {
				buff.erase(pos, len);
				buff.insert(pos, s2);
			} else {
				break;
			}
		}
		outFile << buff << '\n';
	}
}
