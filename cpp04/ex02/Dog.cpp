/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:38:15 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/28 20:59:36 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog(void) : AAnimal("Dog")
{
    this->myBrain = new Brain;
    std::cout << "\033[34mDog constructor called\033[0m" << std::endl;
}


Dog::Dog(Dog const &src) : AAnimal(src)
{
    std::cout << "\033[34mDog copy constructor called\033[0m" << std::endl;
    *this = src;
}


Dog &Dog::operator=(Dog const &rhs) {
    if (this != &rhs) {
        AAnimal::operator=(rhs);
        delete myBrain;
        myBrain = new Brain(*rhs.myBrain); // deep copy
    }
    std::cout << "\033[34mDog assignation operator called\033[0m" << std::endl;
    return *this;
}

Dog::~Dog(void)
{
    delete this->myBrain;
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

Brain *Dog::getBrain() const{
    return (this->myBrain);
}
