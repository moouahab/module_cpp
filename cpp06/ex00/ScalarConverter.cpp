/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:03:25 by moouahab          #+#    #+#             */
/*   Updated: 2024/07/04 19:27:58 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

void	ScalarConverter::convert(std::string const &str)
{
	if (isDouble(str))
        printDouble(str);
	else if (isFloat(str))
	    printFloat(str);
	else if (convertInt(str))
	    return ;
	else if (isChar(str))
        printChar(str);
    else
    {
        std::cout << "char : Impossible" << std::endl;
        std::cout << "int : Impossible" << std::endl;
        std::cout << "float : Impossible" << std::endl;
        std::cout << "double : Impossible" << std::endl;
    }
}
