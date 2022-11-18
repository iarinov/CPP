#include "Bureaucrat.hpp"

int	main() {

	try {
		Bureaucrat	bureaucrat( "Me", -1 );
		std::cout << bureaucrat.getName() << std::endl;
	}
	catch (std::exception & e){

		std::cout << e.what() << std::endl;
	}
}
