/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:10:30 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/17 17:34:02 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << "N must be greater than 0" << std::endl;
		return (NULL);
	}
	Zombie *zombies = NULL;
	try
    {
        zombies = new Zombie[N];
    }
    catch (const std::bad_alloc &e)
	{
		std::cerr << "Allocattion faild: " << e.what() << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		zombies[i].setName(name);
	return (zombies);
}