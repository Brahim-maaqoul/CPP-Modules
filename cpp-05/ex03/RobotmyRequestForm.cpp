/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:38:50 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/09 18:45:47 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotmyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm() : AForm("RobotmyRequestForm", 72, 45), _target("")
{
    std::cout << "RobotmyRequestForm Default Constructor Called" << std::endl;
}

RobotmyRequestForm::RobotmyRequestForm(std::string target) : AForm("RobotmyRequestForm", 72, 45), _target(target)
{
    std::cout << "RobotmyRequestForm Parametric Constructor Called" << std::endl;
}

RobotmyRequestForm::RobotmyRequestForm(RobotmyRequestForm const &s) : AForm(s), _target(s._target)
{
    std::cout << "RobotmyRequestForm Copy Constructor Called" << std::endl;
    *this = s;
}

RobotmyRequestForm::~RobotmyRequestForm()
{
    std::cout << "RobotmyRequestForm Destructor Called" << std::endl;
}

std::string RobotmyRequestForm::getTarget(void) const
{
    return this->_target;
}

RobotmyRequestForm	&RobotmyRequestForm::operator=(const RobotmyRequestForm &obj)
{
	std::cout << "RobotmyRequestForm Copy Assignment Operator Called" << std::endl;
	_target = obj._target;
	return *this;
}

void    RobotmyRequestForm::execute(Bureaucrat const &executor)const
{
    if (getSigned() && executor.getGrade() < getGradeExecute())
    {
        std::cout << "making some drilling noises" << std::endl;
        std::cout << getTarget() << " has been robotomized successfully 50% of the time" << std::endl;
    }
    else if (!getSigned())
        throw "Form is not signed";
    else if (executor.getGrade() > getGradeExecute())
        throw GradeTooLowException();
}