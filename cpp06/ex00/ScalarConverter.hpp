/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:11:02 by moouahab          #+#    #+#             */
/*   Updated: 2024/07/04 19:27:31 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <limits>
# include <sstream>

class ScalarConverter {
	private:
		ScalarConverter();
	public:
		~ScalarConverter();
		static void convert(std::string	const	&str);
};

double	roundToOneDecimal(double number);
float	roundToOneDecimal(float number);
bool	isDouble(const std::string &str);
bool	isChar(std::string const &c);
bool	isFloat(const std::string &str);
char	toChar(char const &str);
bool	isInt(const std::string &str);
void    printChar(std::string const &input);
bool	convertInt(std::string const &str);
void	printFloat(std::string const &arg);
void	printDouble(std::string const &arg);

#endif