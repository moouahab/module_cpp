/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:36:25 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/18 19:18:00 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
    private:
        Weapon      &arme; // Cela permet de s'assurer que HumanA utilise la même instance de Weapon passée au constructeur
        std::string name;
    public:
        HumanA(std::string  name, Weapon &nameType);
        ~HumanA() {};
        void    attack();
};

#endif