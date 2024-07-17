/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:40:59 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/28 18:27:32 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat const & src);
        WrongCat& operator=(WrongCat const & rhs);
        void makeSound() const;
        std::string getType() const;
        ~WrongCat();
};

#endif