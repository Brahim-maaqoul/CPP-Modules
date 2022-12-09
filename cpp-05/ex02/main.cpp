/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:00:26 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/09 20:37:31 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotmyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat z("zeppeli", 1);
	{
		ShrubberyCreationForm sh("badr");
		z.signForm(sh);
		z.executeForm(sh);
	}
	{
		RobotmyRequestForm ro("gyro");
		z.signForm(ro);
		z.executeForm(ro);
	}
	{
		PresidentialPardonForm pr("zeppeli");
		z.signForm(pr);
		z.executeForm(pr);
	}
	return (0);
}
