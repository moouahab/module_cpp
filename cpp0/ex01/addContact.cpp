/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:13:19 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/15 13:56:01 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool addData(std::string &data, const std::string &propertyName)
{
	std::cout << "ECRIVER LE " << propertyName << " DU CONTACT : ";
	std::getline(std::cin, data);
	if (!std::cin)
		std::exit(EXIT_FAILURE);
	if (data.size() > 10)
	{
		std::cout << "La taille de la saisie est incorrecte" << std::endl;
		return false;
	}
	return true;
}

