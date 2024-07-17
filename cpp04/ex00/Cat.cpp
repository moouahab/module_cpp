/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:05:11 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/28 18:09:50 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "\033[35mCat default constructor called\033[0m" << std::endl;
}

Cat::Cat(Cat const  &src) : Animal("Cat")
{
    std::cout << "\033[35mCat copy constructor called\033[0m" << std::endl;
    *this = src;
}

Cat::~Cat()
{
    std::cout << "\033[35mCat destructor called\033[0m" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs) {
    if (this != &rhs) {
        Animal::operator=(rhs);
    }
    std::cout << "\033[35mCat assignation operator called\033[0m" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << " Meow" << std::endl;
}

std::string Cat::getType() const
{
    return this->_type;
}