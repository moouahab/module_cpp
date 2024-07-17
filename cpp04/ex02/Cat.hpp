/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:05:16 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/28 20:59:36 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"


class Cat : public AAnimal
{
    private:
        Brain *myBrain;
    public:
        ~Cat();   
        Cat();
        Cat(Cat const &src);
        void          makeSound() const;
        Brain         *getBrain() const;
        std::string   getType() const;
    Cat &operator=(Cat const & rhs);
};

#endif