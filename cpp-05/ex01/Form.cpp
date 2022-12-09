/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:03:53 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/09 17:03:52 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("unknown"), _sgrade(150), _egrade(150)
{
    _signed = false;
    std::cout << "Form Default Constructor Called" << std::endl;
}

Form::Form(const std::string name, const int sgrade, const int egrade) : _name(name), _sgrade(sgrade), _egrade(egrade)
{
    std::cout << "Form Parametric Constructor Called" << std::endl;
    _signed = false;
    try
	{
		if (sgrade < 1 || egrade < 1)
			throw Form::GradeTooHighException();
		else if (sgrade > 150 || egrade > 150)
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Form::~Form()
{
	std::cout << "Form Destructor Called" << std::endl;
}

Form::Form(Form const &obj) : _name(obj._name), _sgrade(obj._sgrade), _egrade(obj._egrade), _signed(obj._signed)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = obj;
}

std::string Form::getName() const
{
	return this->_name;
}

int	Form::getGradeSigned() const
{
	return this->_sgrade;
}

int	Form::getGradeExecute() const
{
	return this->_egrade;
}

Form	&Form::operator=(const Form &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	return *this;
}

void    Form::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > _sgrade)
        throw Form::GradeTooLowException();
    _signed = true;
}

bool Form::getSigned() const
{
    return _signed;
}

std::ostream & operator<<(std::ostream &os, Form const &form)
{
    os << "the form " << form.getName();
    os << ", with required grade " << form.getGradeSigned() << " to sign it";
    os << ", with required grade " << form.getGradeExecute() << " to execute it, ";
    os << (form.getSigned() ? "is signed" : "is not signed") << std::endl;
    return os;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high !");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low !");
}