/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:56:55 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/15 15:02:48 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
{
	nContact = 0;
}

void PhoneBook::addContact(Contact newContact)
{
	if (nContact < 8)
		contact[nContact++] = newContact;
	else
	{
		for (size_t i = 1; i < 8; i++)
			contact[i - 1] = contact[i];
		contact[7] = newContact;
		nContact = 8;
	}
};

void	PhoneBook::displayDirectory()
{	
	for (size_t i = nContact; i > 0; i--)
		contact[i - 1].displayContact(i, false);
}

bool PhoneBook::searchContact(unsigned int id)
{
	if (id >= nContact + 1)
		return printError("Contact not found ");
	else if ((int)id == 0)
	    return printError("Contact not found ");
	else if ((int)id > -1 && id < 9)
	{
		contact[id - 1].displayContact(id, true);
		return (true);
	}
	else
		return printError("Contact not found ");
};