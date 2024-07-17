/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:13:19 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/16 14:18:19 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// les contact doit etre afficher = index | first name | last name | nickname
// chaque colonne doit faire max 10 caractre

std::string truncateString(const std::string& str, std::size_t width)
{
	std::string name;

    if (str.length() > width)
        name = str.substr(0, width - 1) + ".";
	else
		name = str;
    return name;
}

void Contact::displayContact(int id, bool print) const
{
	if (print == false)
	{	
		 std::cout << "\033[0m"
              << id << " | "
              << std::setw(10) << truncateString(firstName, 10) << " | "
              << std::setw(10) << truncateString(lastName, 10) << " | "
              << std::setw(10) << truncateString(nickName, 10) << " |\033[0m" << std::endl;
	}
	else
	{
		std::cout << "\033[37m" << std::endl;
		std::cout << "FIRST NAME   >> " << firstName << std::endl;
		std::cout << "LAST NAME    >> " << lastName << std::endl;
		std::cout << "NICK NAME    >> " << nickName << std::endl;
		std::cout << "SECRET       >> " << darkestSecret << std::endl;
		std::cout << "PHONE NUMBER >> " << phoneNumber << std::endl;
		std::cout << "\033[0m" << std::endl;
	}
}


bool Contact::addNumber()
{
	std::string tmp;
	while (tmp.length() == 0)
	{
		std::cout << "\033[32mWhat is the number phone of the Contact : \033[0m\033[33m";
		getline(std::cin, tmp);
		if (!std::cin)
			std::exit(EXIT_FAILURE);
		if (tmp.length() == 0)
			continue ;
		else
			return (validationNumber(phoneNumber, tmp));
	}
	return (true);
}

bool Contact::addName(std::string name)
{
	std::string tmp;
	if (name == "lastName")
	{
		while (tmp.length() == 0)
		{
			std::cout << "\033[32mWhat is the " << name << " of the Contact : \033[0m\033[33m";
			getline(std::cin, tmp);
			if (!std::cin)
				std::exit(EXIT_FAILURE);
			if (tmp.length() == 0)
				continue ;
			else
				return (validationName(lastName, tmp));
		}
	}
	if (name == "firstName")
	{
		while (tmp.length() == 0)
		{
			std::cout << "\033[32mWhat is the " << name << " of the Contact : \033[0m\033[33m";
			getline(std::cin, tmp);
			if (!std::cin)
				std::exit(EXIT_FAILURE);
			if (tmp.length() == 0)
				continue ;
			else
				return (validationName(firstName, tmp));
		}
	}
	if (name == "nickName")
	{
		while (tmp.length() == 0)
		{
			std::cout << "\033[32mWhat is the " << name << " of the Contact : \033[0m\033[33m";
			getline(std::cin, tmp);
			if (!std::cin)
				std::exit(EXIT_FAILURE);
			if (tmp.length() == 0)
				continue ;
			else
				return (validationName(nickName, tmp));
		}
	}
	return (true);
}

bool Contact::darkestSecre(std::string secret)
{
	std::string tmp;
	while (tmp.length() == 0)
	{
		std::cout << "\033[32mWhat is the " << secret << " of the Contact : \033[0m\033[33m";
		getline(std::cin, tmp);
		if (!std::cin)
			std::exit(EXIT_FAILURE);
		if (tmp.length() == 0)
			continue ;
		else
			return (validationName(darkestSecret, tmp));
	}
	return (true);
}

bool Contact::validationatributename()
{
	if (!addName("lastName"))
		return (printError("Try again to create a contact"));
	if (!addName("firstName"))
		return (printError("Try again to create a contact"));
	if (!addName("nickName"))
		return (printError("nickName"));
	if (!darkestSecre("darkScret"))
		return (printError("Try again to create a contact"));
	if (!addNumber())
		return (printError("Try again to create a contact"));
	return (true);
}

bool Contact::initData()
{
	while (!validationatributename())
		;
	return (true);
}