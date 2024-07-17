/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:44:37 by moouahab          #+#    #+#             */
/*   Updated: 2024/07/05 15:46:44 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template<typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
T  max(T a, T b)
{
  return (a > b) ? a : b;
}

template<typename T>
T  min(T a, T b)
{
  return (a > b) ? a : b;
}


#endif
