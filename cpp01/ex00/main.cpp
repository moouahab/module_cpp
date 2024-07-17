/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:58:05 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/17 14:12:08 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie sarah("sarah");
    Zombie *zombie = newZombie("zombie");
    sarah.announce();
    randomChump("amin");
    zombie->announce();
    delete zombie;
    return 0;
}
