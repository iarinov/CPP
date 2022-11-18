#include <iostream>
#include <iomanip>

int main() {

	std::string brain = "HI THIS IS BRAIN";

	std::string	*stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "The memory address of a variable <brain>: " << &brain << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "The value of the string variable: " << brain << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
}
