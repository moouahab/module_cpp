/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:16:44 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/18 18:46:22 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() { type = "is not type defined"; }

Weapon::Weapon(std::string name) : type(name) {}

const std::string& Weapon::getType() const { return type; }

void Weapon::setType(const std::string &name) { type = name;}
