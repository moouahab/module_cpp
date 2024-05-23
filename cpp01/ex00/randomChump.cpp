/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:11:12 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/17 14:20:40 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * la function cree un nouveau zombie puis il presentra et moeurs
*/

void    randomChump(std::string name)
{
    Zombie* zombie = newZombie(name);
    zombie->announce();
    delete zombie;
}