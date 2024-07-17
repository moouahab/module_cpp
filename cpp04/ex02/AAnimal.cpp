/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:16:14 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/28 20:58:23 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

// constructor
AAnimal::AAnimal(void) : _type("The AAnimal has no type") 
{
    std::cout << "\033[32mAAnimal created\033[0m" << std::endl;
}

AAnimal::AAnimal(std::string const &src) : _type(src)
{
    std::cout << "\033[32mAAnimal created\033[0m" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)  {
    *this = src;
    std::cout << "\033[32mAAnimal created\033[0m" << std::endl;
}

// ----------------------------------------------------------------

AAnimal::~AAnimal(void)
{
    std::cout << "\033[32mAAnimal destroyed\033[0m" << std::endl;  
}

// ----------------------------------------------------------------

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
    if (this!= &rhs)
        this->_type = rhs._type;
    return *this;
}
