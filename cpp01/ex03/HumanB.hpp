/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 19:18:17 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/18 19:43:39 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
    private:
        Weapon      *arme;
        std::string name;
    public:
        HumanB();
        ~HumanB();
        HumanB(std::string  name);
        
        void    setWeapon(Weapon    &weapon);
        void    attack();
};

#endif