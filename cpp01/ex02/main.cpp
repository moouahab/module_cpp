/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:52:17 by moouahab          #+#    #+#             */
/*   Updated: 2024/06/23 21:09:02 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	// adress
	std::cout << "L’adresse de la string " << &str << std::endl;
	std::cout << "L’adresse de la stringPTR " << stringPTR << std::endl;
	std::cout << "L’adresse de la stringREF " << &stringREF << std::endl;
	std::cout << std::endl;
	// value
	std::cout << "La valeur de str " << str << std::endl;
	std::cout << "La valeur de stringPTR " << *stringPTR << std::endl;
	std::cout << "La valeur de stringREF " << stringREF << std::endl;
	return (0);
}
