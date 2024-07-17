/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:53:31 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/28 18:15:12 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const &rhs)
{
    if (this != &rhs)
    {
        WrongAnimal::operator=(rhs);
        std::cout << "WrongCat assignation operator called" << std::endl;
    }
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
}


void WrongCat::makeSound() const
{
    std::cout << " fake Meow " << std::endl;
}

std::string WrongCat::getType() const
{
    return ("WrongCat");
}