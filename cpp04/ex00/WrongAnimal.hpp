/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:42:14 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/28 18:27:17 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        virtual ~WrongAnimal();
        WrongAnimal();
        WrongAnimal(const std::string type);
        WrongAnimal(WrongAnimal const &src);
        
        WrongAnimal &operator=(WrongAnimal const &rhs);
        virtual std::string getType() const;
        void makeSound() const;
};

#endif