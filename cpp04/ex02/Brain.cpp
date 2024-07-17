/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:58:45 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/28 19:07:16 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain() {
    for (int i = 0; i < 100; i++)
        this->_ide[i] = "what should i do";
    std::cout << "Brain created" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain(Brain const &other)
{
    *this = other;
    std::cout << "Brain copied" << std::endl;
}

Brain& Brain::operator=(Brain const &src)
{
    if (this == &src)
    {
        for (int i = 0; i < 100; i++)
            this->_ide[i] = src._ide[i];
    }
    return *this;
}