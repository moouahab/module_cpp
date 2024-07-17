/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 23:24:14 by moouahab          #+#    #+#             */
/*   Updated: 2024/07/11 23:52:07 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    // Test avec un vector
    std::vector<int> vec;
    
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    try {
        int target = 3;
        std::cout << "Element trouvé à l'index : " << easyfind(vec, target) << std::endl; // Devrait afficher "Element trouvé à l'index : 2"
    } catch (const std::runtime_error &e) {
        std::cout << e.what() << std::endl;
    }

    // Test avec une list
    std::list<int> lst;
    
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);

    try {
        int target = 40;
        std::cout << "Element trouvé à l'index : " << easyfind(lst, target) << std::endl; // Devrait afficher "Element trouvé à l'index : 3"
    } catch (const std::runtime_error &e) {
        std::cout << e.what() << std::endl;
    }

    // Test avec un élément non présent
    try {
        int target = 6;
        std::cout << "Element trouvé à l'index : " << easyfind(vec, target) << std::endl; // Devrait lancer une exception
    } catch (const std::runtime_error &e) {
        std::cout << e.what() << std::endl; // Devrait afficher "Élément non trouvé dans le conteneur"
    }

    return 0;
}
