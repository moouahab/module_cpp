/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 12:17:20 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/18 18:43:07 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private :
        std::string type;
    public :
        Weapon();
        Weapon(std::string name);
        void setType(const std::string &name);
        const std::string   &getType() const;
};


#endif