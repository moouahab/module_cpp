/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:16:37 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/28 20:55:52 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>
#include <string>

class AAnimal {
    protected:
        std::string _type;
    public:
        virtual ~AAnimal();
        AAnimal();
        AAnimal(std::string const &type);
        AAnimal(AAnimal const &src);
        virtual std::string getType() const = 0;
        virtual void makeSound() const = 0;
        AAnimal &operator=(AAnimal const &rhs);
};



#endif