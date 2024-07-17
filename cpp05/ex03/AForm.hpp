/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:43:56 by moouahab          #+#    #+#             */
/*   Updated: 2024/06/30 13:59:55 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAForm_HPP
# define AAForm_HPP

# include <exception>
# include <iostream>
# include <string>

class	Bureaucrat;

class AForm
{
  private:
	const std::string name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute;

  public:
    AForm();
	AForm(const std::string &name, int gradeToSign, int gradeToExecute);
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	virtual ~AForm();
	// getter/setter
	std::string getName() const;
	bool		getIsSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;
	void 		beSigned(const Bureaucrat &bureaucrat);
	// exceptions
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
	// method
	virtual void execute(const Bureaucrat &exec) const = 0;
};

std::ostream &operator<<(std::ostream &os, const AForm &form);

#endif
