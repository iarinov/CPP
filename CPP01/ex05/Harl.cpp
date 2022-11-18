#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

// static const std::string	levels[] = {

// 	"DEBUG",
// 	"INFO",
// 	"WARNING",
// 	"ERROR"
// };

// static int	getLevel(std::string level ) {

// 	int	i = 0;
// 	while (i < 4) {

// 		if (level == levels[i]) {

// 			return (i);
// 		}
// 		i++;
// 	}

// 	return (i);
// }

void	Harl::complain(std::string level ) {

	void	(Harl::*complaint[])( void ) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string complaintLevels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++) {
		void (Harl::*selectedComplaint)( void ) = complaint[i];
		if (level == complaintLevels[i])
			(this->*selectedComplaint)();
	}
}

