/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:54:10 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/18 17:34:53 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str) 
{
     this->name = str;
}

Zombie::Zombie() 
{
    this->name = "Unnamed Zombie";
}


void Zombie::setName(std::string str)
{
   this->name = str;
}

Zombie::~Zombie()
{
    std::cout <<  this->name << " is dead" << std::endl;
}

void Zombie::announce(void) const
{
    std::cout <<  this->name <<  ":  BraiiiiiiinnnzzzZ..." << std::endl;   
}

