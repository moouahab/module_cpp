/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 19:09:55 by moouahab          #+#    #+#             */
/*   Updated: 2024/06/23 21:07:50 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"


HumanB::HumanB(std::string name) : name(name) {
    this->arme = NULL;
}

HumanB::HumanB()
{
    this->name = "is not a name";
    this->arme = NULL;
}


HumanB::~HumanB() {
}

void HumanB::setWeapon(Weapon &name)
{
    this->arme = &name;
}

void HumanB::attack()
{
    if (this->arme == NULL)
    {
        std::cout << this->name << " has no arme" << std::endl;
        return ;
    }
    std::cout << this->name << " attacks with his " << this->arme->getType() << std::endl;
}