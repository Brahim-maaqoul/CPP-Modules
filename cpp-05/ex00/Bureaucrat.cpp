#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat Parametric Constructor Called" << std::endl;
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			_grade = grade;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) : _name(obj._name)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = obj;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	this->_grade = obj.getGrade();	
	return *this;
}

std::ostream & operator<<(std::ostream &os, Bureaucrat const &b)
{
    os << b.getName() << ", bureaucrat grade "<< b.getGrade();
    return os;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low !");
}

void	Bureaucrat::increment(void)
{
	try
	{
		if (_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (_grade == 1)
			throw "you can't increment";
		else
			_grade--;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(char const *str)
	{
		std::cerr << str << std::endl;
	}
	
}

void	Bureaucrat::decrement(void)
{
	try
	{
		if (_grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (_grade == 150)
			throw "you can't decrement";
		else
			_grade++;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(char const *str)
	{
		std::cerr << str << std::endl;
	}
}