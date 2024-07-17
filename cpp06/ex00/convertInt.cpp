/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertInt.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:36:05 by moouahab          #+#    #+#             */
/*   Updated: 2024/07/04 23:10:23 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool isInt(const std::string &str)
{
    if (str.empty())
        return false;
    std::string s = str;
    bool isNegative = (s[0] == '-' || s[0] == '+');
    if (isNegative) 
        s.erase(0, 1);
    for (std::string::size_type i = 0; i < s.size(); ++i)
    {
        if (!std::isdigit(s[i]))
            return (false);
    }
    return (true);
}

void printInt(long value)
{
    std::string s;
    float f;
    
    f = static_cast<float>(value);
    double d = static_cast<double>(value);
    if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
    {
        std::cout << "char : Imposible" << std::endl;
        std::cout << "int :  Imposible"  << std::endl;
        std::cout << "float : " << roundToOneDecimal(f) << "f" << std::endl;
        std::cout << "double : " << roundToOneDecimal(d) << std::endl;
        return ;
    }
    int intValue = static_cast<int>(value);
    s[0] = static_cast<char>(intValue);
    if (intValue > 256 || intValue < 0)
            std::cout << "char : Imposible" << std::endl;
        else 
            std::cout << "char : " << toChar(s[0]) << std::endl;
    std::cout << "int : " << intValue << std::endl;
    std::cout << "float : " << roundToOneDecimal(f) << "f" << std::endl;
    std::cout << "double : " << roundToOneDecimal(d) << std::endl;
}


bool convertInt(std::string const &str)
{
    if (str == "nan" || str == "+inf" || str == "-inf")
    {
        std::cout << "char : Impossible" << std::endl;
        std::cout << "int : Impossible" << std::endl;
        std::cout << "float : " << str << 'f' << std::endl;
        std::cout << "double : " << str << std::endl;
        return (true);
    }
    else if (isInt(str))
    { 
        std::stringstream ss(str);
        long num;

        if (ss.fail())
        {
            std::cout << "InvadoubleNumber input for integer conversion." << std::endl;
            return (false);
        }
        else {
            ss >> num;
            printInt(num);
            return (true);
        }
    }
    return (false);
}
