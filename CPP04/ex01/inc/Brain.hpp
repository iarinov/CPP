#pragma once

#include <iostream>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(Brain const &copy);
	~Brain();
};
