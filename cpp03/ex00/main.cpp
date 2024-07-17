/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:59:57 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/23 15:43:56 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	player1("player1");
	ClapTrap	player2("player2");

	player1.attack("player2");
	std::cout << "Before attack " << player1.getName() << " has " << player1.getHitPoints() << " hit point" << std::endl;
	player1.takeDamage(2);
	std::cout << "After attack " << player1.getName() << " has " << player1.getHitPoints() << " hit point" << std::endl;

	player1.beRepaired(2);
	std::cout << std::endl;
	std::cout << std::endl;
	// ----------------- //

	player2.attack("player1");
	player1.takeDamage(player2.getAttackDamage());
}
