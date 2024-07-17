/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:53:18 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/25 17:16:36 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default ScavTrap", 100, 50, 20) {
    std::cout << "ScavTrap was born with the ClapTrap gene (default constructor)" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
    std::cout << "ScavTrap was born with the ClapTrap gene" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src) {
    std::cout << "ScavTrap was born with the ClapTrap gene (copy constructor)" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called for " << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
    if (this != &rhs) {
        ClapTrap::operator=(rhs);
        std::cout << "ScavTrap assignment operator called for " << rhs._name << std::endl;
    }
    return *this;
}

void ScavTrap::guardGate() {
    std::cout << this->_name << "ScavTrap entered Gate keeper mode" << std::endl;
}