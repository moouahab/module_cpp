/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 19:09:55 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/23 17:12:58 by moouahab         ###   ########.fr       */
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
		 std::cout << this->name << " attacks with his  rien" << std::endl;
	else
    	std::cout << this->name << " attacks with his " << this->arme->getType() << std::endl;
}