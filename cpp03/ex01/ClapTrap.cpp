/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:00:03 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/23 15:43:27 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("I am not my name"), _hitPoints(10),
	_energyPoints(10), _attackDamage(0)
{
	std::cout << "\033[36mA new ClapTrap is born\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10),
	_energyPoints(10), _attackDamage(0)
{
	std::cout << "\033[36mA new ClapTrap is born\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) : _name(src._name),
	_hitPoints(src._hitPoints), _energyPoints(src._energyPoints),
	_attackDamage(src._attackDamage)
{
	std::cout << "\033[36mA copy was made of \033[0m" << src._name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[36mClapTrap " << _name << " destroyed!\033[0m" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_energyPoints = src._energyPoints;
		this->_hitPoints = src._hitPoints;
		this->_attackDamage = src._attackDamage;
		std::cout << "\033[36mA copy was made of " << src._name << "\033[0m" << std::endl;
	}
	else
		std::cout << "\033[31mError: The copi has failed " << src._name << "\033[0m" << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ",\
causing " << this->_attackDamage << " points of damage !" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " cannot attack " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		std::cout << "\033[31mClapTrap " << this->_name << " suffered " << amount << " points of damage !\033[0m" << std::endl;
		this->_hitPoints -= amount;
	}
	else
	{
		std::cout << "\033[31mClapTrap " << this->_name << " died of his wounds !\033[0m" << std::endl;
		this->_hitPoints = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 10 || this->_hitPoints == 10)
	{
		this->_hitPoints = 10;
	}
	else
	{
		this->_hitPoints += amount;
	}
	std::cout << "\033[32mThe number of points will be repaired by "<< amount << "\033[0m"<< std::endl;
}

// getter 

std::string	ClapTrap::getName() const{
	return this->_name;
}

int	ClapTrap::getHitPoints() const {
	return this->_hitPoints;
}

int	ClapTrap::getEnergyPoints() const {
	return this->_energyPoints;
}

int	ClapTrap::getAttackDamage() const {
	return this->_attackDamage;
}