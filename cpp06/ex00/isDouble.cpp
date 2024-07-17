/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isDouble.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:55:05 by moouahab          #+#    #+#             */
/*   Updated: 2024/07/04 23:09:35 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include "ScalarConverter.hpp"
#include <iostream>
#include <sstream>
#include <limits>
#include <string>
#include <iomanip> 
#include <cmath> 

bool isDouble(const std::string &str)
{
    if (str.empty())
        return false;

    std::string s = str.substr(0, str.size() - 1);

    bool isNegative = (s[0] == '-' || s[0] == '+');
    if (isNegative)
        s.erase(0, 1);

    bool pointSeen = false;
    for (std::string::size_type i = 0; i < s.size(); ++i)
    {
        if (s[i] == '.')
        {
            if (pointSeen)
                return false;
            pointSeen = true;
        }
        else if (!std::isdigit(s[i]))
        {
            return false;
        }
    }
    if (s.empty() || (s.size() == 1 && pointSeen))
        return false;

    return true;
}

void    convertDouble(std::string const &str)
{	
    char	isChar;
	float	num;
	int		intNum;
	double	doubleNum;
    
    std::istringstream iss(str);
    iss >> doubleNum;
    if (iss.fail())
    {
        std::cerr << "Invalid arg: " << str << std::endl;
        return ;
    }

    intNum = static_cast<int>(doubleNum);
     if (doubleNum < std::numeric_limits<int>::min() || doubleNum > std::numeric_limits<int>::max())
    {
        std::cout << "char : Imposible" << std::endl;
        std::cout << "int :  Imposible"  << std::endl;
    }
    else
    {
        isChar = static_cast<char>(intNum);
        if (intNum > 256 || intNum < 0)
            std::cout << "char : Imposible" << std::endl;
        else 
            std::cout << "char : " << toChar(isChar) << std::endl;
        std::cout << "int : " << intNum << std::endl;
    } 
    num = static_cast<float>(doubleNum);
    std::cout << "float : " << roundToOneDecimal(num) << "f" << std::endl;
    std::cout << "double : " << roundToOneDecimal(doubleNum) << std::endl;
}

void printDouble(std::string const &arg)
{
    if (arg == "nan" || arg == "+inf" || arg == "-inf")
    {
        std::cout << "char : Impossible" << std::endl;
        std::cout << "int : Impossible" << std::endl;
        if (arg == "+inf" || arg == "-inf")
            std::cout << "float : " << arg << std::endl;
        else
            std::cout << "float : " << arg << 'f' << std::endl;
        std::cout << "double : " << arg << std::endl;
    }
	if (isDouble(arg))
        convertDouble(arg);
}
