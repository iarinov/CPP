#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class Bureaucrat;

class Form {
	private:
		std::string const name;
		bool	signed;
		int const	gradeSign;
		int const	gradeExecute;
	public:
		Form();
		virtual ~Form();
		Form(std::string const name, int const grade_sign, int const grade_execute);
		Form(const Form &copy);

		std::string const	getName()const;
		int const	getGradeSign()const;
		int const	getGradeExecute()const;
		bool		getSigned()const;

		//in public or outside public and private
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		Form	&operator=( const Form & copy);

		void	beSigned(Bureaucrat const &bur);
		void	signForm();
};

std::ostream& operator<<(std::ostream& os, Form const &form);

#endif
