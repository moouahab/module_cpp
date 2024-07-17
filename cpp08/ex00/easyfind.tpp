/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 21:39:15 by moouahab          #+#    #+#             */
/*   Updated: 2024/07/11 22:39:35 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

# include "easyfind.hpp"

template <typename T>
int easyfind(T &container, int number)
{
    typename T::iterator it = std::find(container.begin(), container.end(), number);
    if (it == container.end())
        throw std::runtime_error("Item not found in container");
    return std::distance(container.begin(), it);
}

#endif