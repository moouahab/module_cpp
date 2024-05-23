/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:53:18 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/23 16:57:30 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_energyPoints = src._energyPoints;
		this->_hitPoints = src._hitPoints;
		this->_attackDamage = src._attackDamage;
		std::cout << "\033[36mA copy was made of " << src._name << "\033[0m" << std::endl;
	}
	else
		std::cout << "\033[31mError: The copi has failed " << src._name << "\033[0m" << std::endl;
	return (*this);
}

ScavTrap::ScavTrap() : ClapTrap("Default ScavTrap") {
	
}
