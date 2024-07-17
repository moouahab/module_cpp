/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:05:16 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/28 18:25:45 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"


class Cat : public Animal
{
    public:
        ~Cat();   
        Cat();
        Cat(Cat const &src);
        void          makeSound() const;
        std::string   getType() const;
    Cat &operator=(Cat const & rhs);
};

#endif