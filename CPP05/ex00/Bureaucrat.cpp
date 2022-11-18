#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string var, int grade) {
	std::cout << "Constructor called" << std::endl;
	this->grade = grade;
	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	*this = copy;
}

std::string const	Bureaucrat::getName()const {
	return(this->name);
}

int	Bureaucrat::getGrade() const {
	return(this->grade);
}

void	 Bureaucrat::increment() {
	this->grade++;
	if (grade > 150) {
		throw Bureaucrat::GradeTooHighException();
	}
}

void	Bureaucrat::decrement() {
	this->grade--;
	if (grade < 1) {
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat & copy){
	std::cout << "Assignation operator called" << std::endl;

	this->grade = copy.grade;

	return *this;
}

char const	*Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high!";
}

char const	*Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low!";
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const &bur) {
	os << bur.getName() << ", has grade " << bur.getGrade();
	return os;
}
