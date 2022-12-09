/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:03:47 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/09 17:04:06 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class	Form
{
	private	:
		const std::string _name;
        const int _sgrade;
        const  int _egrade;
        bool _signed;

	public	:
		Form ();
		Form (const std::string name, const int sgrade, const int egarde);
		Form (Form const &obj);
		~Form ();
		Form &operator=(const Form &obj);
		std::string getName(void) const;
		int	getGradeSigned(void) const;
        int  getGradeExecute(void) const;
        void    beSigned(const Bureaucrat &b);
        bool getSigned(void) const;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &	operator<<(std::ostream &os, Form const &form);

#endif