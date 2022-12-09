#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Form;
class	Bureaucrat
{
	private	:
		const std::string _name;
		int	_grade;
	public	:
		Bureaucrat ();
		Bureaucrat (const std::string name, int grade);
		Bureaucrat (Bureaucrat const &obj);
		~Bureaucrat ();
		Bureaucrat &operator=(const Bureaucrat &obj);
		std::string getName(void) const;
		int	getGrade(void) const;
		void	increment(void);
		void	decrement(void);
		void	signForm(Form &f);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &	operator<<(std::ostream &os, Bureaucrat const &b);

#endif
