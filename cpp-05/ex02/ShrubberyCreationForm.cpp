/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:38:26 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/09 19:01:59 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("")
{
    std::cout << "ShrubberyCreationForm Default Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm Parametric Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &s) : AForm(s), _target(s._target)
{
    std::cout << "ShrubberyCreationForm Copy Constructor Called" << std::endl;
    *this = s;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor Called" << std::endl;
}

std::string ShrubberyCreationForm::getTarget(void) const
{
    return this->_target;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	std::cout << "ShrubberyCreationForm Copy Assignment Operator Called" << std::endl;
	_target = obj._target;
	return *this;
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor)const
{
    if (getSigned() && executor.getGrade() < getGradeExecute())
    {
        
        std::ofstream file(getTarget().append("_shrubbery"));
        if (!file)
        {
            std::cout << "error occuring while openning the file" << std::endl;
            return ;
        }
        file << "          ,@@@@@@@," << std::endl;
        file << "      ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
        file << "   ,&%%&%&&%,@@@@@/@@@@@@,888888/8o" << std::endl;
        file << "  ,%&%&&%&&%,@@@@@@/@@@8888888/88'" << std::endl;
        file << "  %&&%&%&/%&&%@@@@/ /@@@8888888888'" << std::endl;
        file << "  %&&%/ %&%%&&@@ V /@@' `888 `/88'" << std::endl;
        file << "  `&%% ` /%&'    |.|         '|8'" << std::endl;
        file << "      |o|        | |         | |" << std::endl;
        file << "      |.|        | |         | |" << std::endl;
        file << "gs \\/ ._/_/__/  ,_//__\\/.  //__/_" << std::endl;
        file.close();
    }
    else if (!getSigned())
        throw "Form is not signed";
    else if (executor.getGrade() > getGradeExecute())
        throw GradeTooLowException();
}