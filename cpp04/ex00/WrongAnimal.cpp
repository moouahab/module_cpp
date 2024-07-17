/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:48:07 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/28 18:28:14 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(void) : _type("Wrong Animal") {
    std::cout << "WrongAnimal default constructor called" << std::endl;
};

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}


WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
    std::cout << "WrongAnimal constructor called" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

std::string WrongAnimal::getType(void) const {
    return this->_type;
}


void WrongAnimal::makeSound(void) const {
    std::cout << " WrongAnimal makeSound called" << std::endl;
}

