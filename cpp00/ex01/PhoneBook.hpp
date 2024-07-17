/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:58:26 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/16 10:08:37 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <algorithm>
# include <sstream>
# include <string>
# include <cctype>
# include <iomanip>  

class Contact
{
  private:
	std::string lastName;
	std::string firstName;
	std::string phoneNumber;
	std::string nickName;
	std::string darkestSecret;
  public:
	bool	darkestSecre(std::string secret);
	bool	addNumber();
	bool	addName(std::string	name);
	void	displayContact(int id, bool print) const;
	bool	initData();
	bool	validationatributename();
};

class PhoneBook
{
  private:
	Contact			contact[8];
	unsigned int 	nContact;
  public:
    PhoneBook();
	void	addContact(Contact newContact);
	bool	searchContact(unsigned int  id);
	void	displayDirectory();
};

bool	validationName(std::string &attribue, const std::string &name);
bool	validationNumber(std::string &attribue, const std::string &name);
bool	printError(std::string mError);

#endif