/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 23:11:15 by moouahab          #+#    #+#             */
/*   Updated: 2024/06/30 23:11:16 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <string>

class ShrubberyCreationForm : public AForm {
private:
    std::string _target;

public:
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
    void execute(Bureaucrat const &executor) const;
    std::string getTarget() const;
};

#endif
