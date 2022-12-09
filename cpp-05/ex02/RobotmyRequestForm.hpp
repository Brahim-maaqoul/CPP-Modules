/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:39:08 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/09 18:04:08 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotmyRequestForm : public AForm
{
    private:
        std::string _target;
    public:
        RobotmyRequestForm();
        RobotmyRequestForm(std::string target);
        RobotmyRequestForm(RobotmyRequestForm const &s);
        RobotmyRequestForm &operator=(const RobotmyRequestForm &s);
        ~RobotmyRequestForm();
        std::string getTarget() const;
        void	execute(Bureaucrat const &executor) const;
};

#endif