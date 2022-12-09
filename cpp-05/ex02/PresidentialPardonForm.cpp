/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:39:34 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/09 18:45:32 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("")
{
    std::cout << "PresidentialPardonForm Default Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm Parametric Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &s) : AForm(s), _target(s._target)
{
    std::cout << "PresidentialPardonForm Copy Constructor Called" << std::endl;
    *this = s;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor Called" << std::endl;
}

std::string PresidentialPardonForm::getTarget(void) const
{
    return this->_target;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	std::cout << "PresidentialPardonForm Copy Assignment Operator Called" << std::endl;
	_target = obj._target;
	return *this;
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor)const
{
    if (getSigned() && executor.getGrade() < getGradeExecute())
        std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    else if (!getSigned())
        throw "Form is not signed";
    else if (executor.getGrade() > getGradeExecute())
        throw GradeTooLowException();
}