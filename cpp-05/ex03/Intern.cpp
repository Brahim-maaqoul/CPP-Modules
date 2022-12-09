/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 20:40:05 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/09 21:20:00 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern Default Constructor Called" << std::endl;
}

Intern::Intern(Intern const &i)
{
    std::cout << "Intern Copy Constructor Called" << std::endl;
    *this = i;
}

Intern::~Intern()
{
    std::cout << "Intern Destructor Called" << std::endl;
}

AForm*  Intern::makeForm(std::string name, std::string target)
{
    int i;
    std::string form[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    AForm *ptr = NULL;
    for (i = 0; i < 3; i++)
    {
        if (form[i] == name)
            break;
    }
    switch (i)
    {
        case 0:
            ptr = new RobotmyRequestForm(target);
            std::cout << "Intern creates " << ptr->getName() << std::endl;
            break;
        case 1:
            ptr = new PresidentialPardonForm(target);
            std::cout << "Intern creates " << ptr->getName() << std::endl;
            break;
        case 2:
            ptr = new ShrubberyCreationForm(target);
            std::cout << "Intern creates " << ptr->getName() << std::endl;
        default:
            std::cout << "name doesn't exist" << std::endl;
            break;
    }
    return ptr;
}
