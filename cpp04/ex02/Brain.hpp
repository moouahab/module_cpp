/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:47:44 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/28 18:57:34 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
    public:
        Brain();
        ~Brain();
        Brain(Brain const &other);
        Brain &operator=(Brain const &other);
    private:
        std::string _ide[100];
};

#endif