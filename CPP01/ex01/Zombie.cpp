#include "Zombie.hpp"


Zombie::Zombie() {

}

Zombie::~Zombie() {
	std::cout << this->name << " killed" << std::endl;
}


void	Zombie::setName( std::string arg ) {this->name = arg;}

void	Zombie::announce(void) {
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
