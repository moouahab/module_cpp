/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:48:23 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/17 15:14:34 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
    public:
        ~Zombie();
        Zombie();
        Zombie(std::string str);
        void    announce(void) const;
        void    setName(std::string str);
};

Zombie* zombieHorde(int N, std::string name);
Zombie* newZombie(std::string name);


#endif  