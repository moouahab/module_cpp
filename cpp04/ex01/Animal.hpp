/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:16:37 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/28 20:15:53 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string _type;
    public:
        virtual ~Animal();
        Animal();
        Animal(std::string const &type);
        Animal(Animal const &src);
        virtual std::string getType() const;
        virtual void makeSound() const;
    Animal &operator=(Animal const &rhs);
};



#endif