/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:53:09 by moouahab          #+#    #+#             */
/*   Updated: 2024/07/05 16:01:21 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// Fonction de test pour afficher un élément de type int
void printInt(int n) {
    std::cout << n << " ";
}

// Fonction de test pour incrémenter un élément de type int
void incrementInt(int& n) {
    ++n;
}

// Fonction de test pour afficher un élément de type double
void printDouble(double n) {
    std::cout << n << " ";
}

// Fonction de test pour afficher un élément de type string
void printString(const std::string& str) {
    std::cout << str << " ";
}


void toUpperCase(std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        str[i] = std::toupper(static_cast<unsigned char>(str[i]));
    }
}


int main()
{
	int intArray[] = {1, 2, 3, 4, 5};
	size_t intLength = sizeof(intArray) / sizeof(intArray[0]);
	double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	size_t doubleLength = sizeof(doubleArray) / sizeof(doubleArray[0]);
	std::string stringArray[] = {"Hello", "World", "!"};
	size_t stringLength = sizeof(stringArray) / sizeof(stringArray[0]);

	std::cout << "Tableau d'entiers initial: ";
	iter(intArray, intLength, printInt);
	std::cout << std::endl;
	iter(intArray, intLength, incrementInt);
	std::cout << "Tableau d'entiers après incrémentation: ";
	iter(intArray, intLength, printInt);
	std::cout << std::endl;
	std::cout << "Tableau de doubles: ";
	iter(doubleArray, doubleLength, printDouble);
	std::cout << std::endl;
	std::cout << "Tableau de chaînes initial: ";
	iter(stringArray, stringLength, printString);
	std::cout << std::endl;
	iter(stringArray, stringLength, toUpperCase);
	std::cout << "Tableau de chaînes après conversion en majuscules: ";
	iter(stringArray, stringLength, printString);
	std::cout << std::endl;
	return 0;
}
