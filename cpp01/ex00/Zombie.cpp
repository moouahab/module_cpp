/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:54:10 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/17 13:53:36 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str) 
{
    name = str;
}


Zombie::~Zombie()
{
    std::cout << name << " is dead" << std::endl;
}

void Zombie::announce(void) const
{
    std::cout << name <<  ":  BraiiiiiiinnnzzzZ..." << std::endl;   
}

