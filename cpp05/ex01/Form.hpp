/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:43:56 by moouahab          #+#    #+#             */
/*   Updated: 2024/06/30 15:02:23 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <exception>
# include <iostream>
# include <string>

class	Bureaucrat;

class Form
{
  private:
	const std::string name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute;

  public:
    Form();
	Form &operator=(const Form &other);
	Form(const std::string &name, int gradeToSign, int gradeToExecute);
	Form(const Form &other);
	~Form();
	// getter/setter
	std::string getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(const Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("\033[31mError: grade too high.\033[0m");
		}
	};

	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("\033[31mError: grade too low.\033[0m");
		}
	};
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
