#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	private:
		std::string const	name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string var, int grade);
		Bureaucrat(const Bureaucrat &copy);
		virtual ~Bureaucrat();

		std::string const	getName()const;
		int					getGrade() const;

		void	increment();
		void	decrement();

		Bureaucrat	&operator=( const Bureaucrat & copy);

};

std::ostream& operator<<(std::ostream& os, Bureaucrat const &bur);

#endif
