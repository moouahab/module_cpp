/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:32:29 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/25 10:32:31 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    // Test 1: Creation of ClapTrap
    std::cout << "=== Test 1: Creation of ClapTrap ===" << std::endl;
    ClapTrap claptrap1("Clappy");
    claptrap1.attack("target1");
    claptrap1.takeDamage(30);
    claptrap1.beRepaired(20);
    std::cout << "Name: " << claptrap1.getName() << ", HitPoints: " << claptrap1.getHitPoints() << ", EnergyPoints: " << claptrap1.getEnergyPoints() << ", AttackDamage: " << claptrap1.getAttackDamage() << std::endl;

    // Test 2: Copy constructor and assignment operator
    std::cout << "\n=== Test 2: Copy constructor and assignment operator ===" << std::endl;
    ClapTrap claptrap2(claptrap1);
    ClapTrap claptrap3;
    claptrap3 = claptrap1;
    claptrap2.attack("target2");
    claptrap3.attack("target3");

    // Test 3: Creation of ScavTrap
    std::cout << "\n=== Test 3: Creation of ScavTrap ===" << std::endl;
    ScavTrap scavtrap1("Scavy");
    scavtrap1.attack("target4");
    scavtrap1.takeDamage(50);
    scavtrap1.beRepaired(30);
    scavtrap1.guardGate();
    std::cout << "Name: " << scavtrap1.getName() << ", HitPoints: " << scavtrap1.getHitPoints() << ", EnergyPoints: " << scavtrap1.getEnergyPoints() << ", AttackDamage: " << scavtrap1.getAttackDamage() << std::endl;

    // Test 4: Copy constructor and assignment operator for ScavTrap
    std::cout << "\n=== Test 4: Copy constructor and assignment operator for ScavTrap ===" << std::endl;
    ScavTrap scavtrap2(scavtrap1);
    ScavTrap scavtrap3;
    scavtrap3 = scavtrap1;
    scavtrap2.attack("target5");
    scavtrap3.attack("target6");
    scavtrap2.guardGate();
    scavtrap3.guardGate();

    // Test 5: Edge cases
    std::cout << "\n=== Test 5: Edge cases ===" << std::endl;
    claptrap1.takeDamage(120); // Should reduce hit points to 0 and prevent further actions
    claptrap1.attack("target7");
    claptrap1.beRepaired(10);
    scavtrap1.takeDamage(120); // Should reduce hit points to 0 and prevent further actions
    scavtrap1.attack("target8");
    scavtrap1.beRepaired(10);
    scavtrap1.guardGate();

    return 0;
}
