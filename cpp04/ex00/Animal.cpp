/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:16:14 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/28 18:26:05 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

// constructor
Animal::Animal(void) : _type("The animal has no type") 
{
    std::cout << "\033[32mAnimal created\033[0m" << std::endl;
}

Animal::Animal(std::string const &src) : _type(src)
{
    std::cout << "\033[32mAnimal created\033[0m" << std::endl;
}

Animal::Animal(Animal const &src)  {
    *this = src;
    std::cout << "\033[32mAnimal created\033[0m" << std::endl;
}

// ----------------------------------------------------------------

Animal::~Animal(void)
{
    std::cout << "\033[32mAnimal destroyed\033[0m" << std::endl;  
}

// ----------------------------------------------------------------

Animal &Animal::operator=(Animal const &rhs)
{
    if (this!= &rhs)
        this->_type = rhs._type;
    return *this;
}

void Animal::makeSound(void) const
{
    std::cout << "\033[32m Animal sound \033[0m" << std::endl;
}

std::string Animal::getType(void) const
{
    return this->_type;
}

