/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:34:03 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/16 10:05:54 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	validationNumber(std::string &attribue, const std::string &name)
{
	for (std::string::const_iterator it = name.begin(); it != name.end(); ++it)
        if (!std::isdigit(*it) || std::isspace(*it))
		{
			std::cout << "\033[31mError : the number is not valide\033[0m" << std::endl;
            return (false);
		}
	if (name.size() != 10)
	{
		std::cout << "\033[31mError : the number is not valide\033[0m" << std::endl;
        return (false);
	}
	else if (name.size() == 10)
	{
        attribue = name;
        return (true);
    }
	return (true);
}





bool validationName(std::string &attribue, const std::string &name)
{
    for (std::string::const_iterator it = name.begin(); it != name.end(); ++it)
    {
        if (!std::isprint(*it) || std::isspace(*it))
        {
            std::cout << "\033[31mError : the name is not valid\033[0m" << std::endl;
            return false;
        }
    }
    attribue = name;
    return true;
}


bool	printError(std::string mError)
{
	std::cerr << "\033[31m-------------------------------------------------\033[0m" << std::endl;
	std::cerr << "\033[31m| ATTENTION " << mError << "       |\033[0" << std::endl;
    std::cerr << "\033[31m-------------------------------------------------\033[0m" << std::endl;
    return false;
}