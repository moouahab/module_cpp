/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:52:30 by moouahab          #+#    #+#             */
/*   Updated: 2024/07/05 15:52:38 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

// Déclaration du modèle de fonction iter
template<typename T, typename F>
void iter(T *a, size_t len, F func) {
    for(size_t i = 0; i < len; i++)
        func(a[i]);
}
// Fonction de test pour afficher un élément de type int
void printInt(int n);

// Fonction de test pour incrémenter un élément de type int
void incrementInt(int& n);
// Fonction de test pour afficher un élément de type double
void printDouble(double n);

// Fonction de test pour afficher un élément de type string
void printString(const std::string& str);

// Fonction de test pour convertir un élément de type string en majuscule
void toUpperCase(std::string& str);

#endif
