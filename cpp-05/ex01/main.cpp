/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:00:26 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/09 15:50:29 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat b("gyro", 150);
	Bureaucrat z("zeppeli", 1);
	Form f("nasr", 10, 10);
	b.signForm(f);
	z.signForm(f);
	return (0);
}
