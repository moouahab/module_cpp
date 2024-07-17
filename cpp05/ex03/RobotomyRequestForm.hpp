/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:03:51 by moouahab          #+#    #+#             */
/*   Updated: 2024/06/30 22:50:07 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
#include <string>
#include "AForm.hpp"


class RobotomyRequestForm : public AForm {
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string &target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &src);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
        void execute(Bureaucrat const &executor) const;
        const std::string &getTarget() const;
};

#endif