/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:03:47 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/09 00:06:19 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include <fstream>

class	AForm
{
	private	:
		const std::string _name;
        const int _sgrade;
        const  int _egrade;
        bool _signed;

	public	:
		AForm ();
		AForm (const std::string name, const int sgrade, const int egarde);
		AForm (AForm const &obj);
		~AForm ();
		AForm &operator=(const AForm &obj);
		std::string getName(void) const;
		int	getGradeSigned(void) const;
        int  getGradeExecute(void) const;
        void    beSigned(const Bureaucrat &b);
        bool getSigned(void) const;
		virtual void	execute(Bureaucrat const &executor)const = 0;
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

std::ostream &	operator<<(std::ostream &os, AForm const &AForm);

#endif