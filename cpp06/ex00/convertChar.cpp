/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertChar.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:20:50 by moouahab          #+#    #+#             */
/*   Updated: 2024/07/04 23:09:16 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool isChar(std::string const &c) {
    return ((c.size() == 1 && !isdigit(c[0]) )|| c == "nan" || c == "-inf" || c == "+inf");
}

char toChar(char const &str)
{   
    if (!std::isprint(str))
    {
        std::cout << "Non displayable";
        return ('\0');
    }
    return (str);
}

void    printChar(std::string const &input)
{
    int vi = static_cast<int>(input[0]);
    float vf = static_cast<float>(vi);
    double vd = static_cast<double>(vi);

    if (input == "nan" || input == "+inf" || input == "-inf")
    {
        std::cout << "char : Impossible" << std::endl;
        std::cout << "int : Impossible" << std::endl;
        std::cout << "float : " << input << 'f' << std::endl;
        std::cout << "double : " << input << std::endl;
    }
    else
    {
        if (vi > 256 || vi < 0)
            std::cout << "char : Imposible" << std::endl;
        else 
            std::cout << "char : " << toChar(input[0]) << std::endl;
        std::cout << "int : " << vi << "\n";
        std::cout << "float : "<< roundToOneDecimal(vf) << "f" << std::endl;
        std::cout << "double : " << roundToOneDecimal(vd) << std::endl;
    }
}
