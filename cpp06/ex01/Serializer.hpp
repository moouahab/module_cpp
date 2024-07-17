/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:42:19 by moouahab          #+#    #+#             */
/*   Updated: 2024/07/04 21:32:39 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

# include "data.hpp"
# include <stdint.h>
# include <iostream>

class Serializer
{
    private:
        Serializer();
        ~Serializer();
    public:
        static uintptr_t   serialize(Data* ptr);
        static Data*       deserialize(uintptr_t data);
};

# endif