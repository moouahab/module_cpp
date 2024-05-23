/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:25:27 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/17 17:44:39 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(void)
{
    int nombreZombie = 10;

    Zombie *zombie = NULL;
    try
    {
        zombie = zombieHorde(nombreZombie, "Zombie");
        if (zombie == NULL)
            std::cerr << "Failed to allocate memory for zombie horde." << std::endl;
        else
        {
            for (int i = 0; i < nombreZombie; i++)
                zombie[i].announce();
            delete [] zombie;
        }
    }
    catch (const std::bad_alloc& e)
    {
        std::cerr << "Allocation failed: " << e.what() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "An error occurred: " << e.what() << std::endl;
    }   
    return 0;
}
