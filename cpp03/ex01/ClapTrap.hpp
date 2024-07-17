/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:00:00 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/25 16:31:55 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
	protected :
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	public :
		ClapTrap();
		~ClapTrap();
		ClapTrap(ClapTrap const &src);
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
		ClapTrap	&operator=(ClapTrap const &src);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		// getter :
		std::string	getName() const;
		int			getHitPoints() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;
};




#endif