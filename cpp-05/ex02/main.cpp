/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:00:26 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/09 19:02:52 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotmyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat z("zeppeli", 150);

	{
		ShrubberyCreationForm sh("badr");
		z.signForm(sh);
		z.executeForm(sh);
	}
	{
		
	}
	// {

	// }
	return (0);
}
