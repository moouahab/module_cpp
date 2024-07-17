/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:36:18 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/18 19:05:27 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/***
 * [A SAVOIR]
 * 
 * L'orde d'initilisation des attribue a une importance car 
 * elle premet d'éviter des comportements indéterminés et 
 * garantit que toutes les dépendances potentielles entre 
 * les membres sont respectées. 
 *
*/

HumanA::HumanA(std::string name, Weapon &nameType) :  arme(nameType), name(name) {}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << this->arme.getType() << std::endl;
}
