/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:58:57 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/25 17:04:05 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap("Default FragTrap", 100, 100, 30) {
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
    std::cout << "FragTrap named constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = src;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called for " << this->_name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
    if (this != &rhs) {
        ClapTrap::operator=(rhs);
        std::cout << "FragTrap assignment operator called for " << rhs._name << std::endl;
    }
    return *this;
}

void FragTrap::highFivesGuys(void) {
    std::cout << this->_name << " requests a high five!" << std::endl;
}
