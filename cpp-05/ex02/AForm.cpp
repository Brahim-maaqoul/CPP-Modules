/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:03:53 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/09 00:07:20 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("unknown"), _sgrade(150), _egrade(150)
{
    _signed = false;
    std::cout << "AForm Default Constructor Called" << std::endl;
}

AForm::AForm(const std::string name, const int sgrade, const int egrade) : _name(name), _sgrade(sgrade), _egrade(egrade)
{
    std::cout << "AForm Parametric Constructor Called" << std::endl;
    _signed = false;
    try
	{
		if (sgrade < 1 || egrade < 1)
			throw GradeTooHighException();
		else if (sgrade > 150 || egrade > 150)
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

AForm::~AForm()
{
	std::cout << "AForm Destructor Called" << std::endl;
}

AForm::AForm(AForm const &obj) : _name(obj._name), _sgrade(obj._sgrade), _egrade(obj._egrade), _signed(obj._signed)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = obj;
}

std::string AForm::getName() const
{
	return this->_name;
}

int	AForm::getGradeSigned() const
{
	return this->_sgrade;
}

int	AForm::getGradeExecute() const
{
	return this->_egrade;
}

AForm	&AForm::operator=(const AForm &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	_signed = obj._signed;
	return *this;
}

void    AForm::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > _sgrade)
        throw GradeTooLowException();
    _signed = true;
}

bool AForm::getSigned() const
{
    return _signed;
}

std::ostream & operator<<(std::ostream &os, AForm const &AForm)
{
    os << "the AForm " << AForm.getName();
    os << ", with required grade " << AForm.getGradeSigned() << " to sign it";
    os << ", with required grade " << AForm.getGradeExecute() << " to execute it, ";
    os << (AForm.getSigned() ? "is signed" : "is not signed") << std::endl;
    return os;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high !");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low !");
}