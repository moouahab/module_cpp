/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:29:27 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/28 18:25:58 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GOG_HPP
# define GOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
    public:
        ~Dog();
        Dog();
        Dog(Dog const & src);
        void            makeSound() const;
        Dog             &operator=(Dog const & rhs);
        std::string     getType() const;
};

#endif