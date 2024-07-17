/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:38:15 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/28 17:25:39 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog(void) : Animal("Dog")
{
    std::cout << "\033[34mDog constructor called\033[0m" << std::endl;
}


Dog::Dog(Dog const &src) : Animal(src)
{
    std::cout << "\033[34mDog copy constructor called\033[0m" << std::endl;
    *this = src;
}


Dog& Dog::operator=(Dog const &src)
{
    if (&src != this)
    {
        Animal::operator=(src);
        std::cout << "\033[34mDog assignation operator called\033[0m" << std::endl;
    }
    return (*this);
}


Dog::~Dog(void)
{
    std::cout << "\033[34mDog destructor called \033[0m" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "\033[34m Woof! \033[0m" << std::endl;
}

std::string Dog::getType(void) const
{
    return (this->_type);
}