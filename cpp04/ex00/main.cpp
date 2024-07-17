/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:59:57 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/28 18:27:58 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	
	std::cout << std::endl;
	
	std::cout << "\033[34mAnimal type is " << dog->getType();
	dog->makeSound();
	std::cout << "\033[35mAnimal type is " << cat->getType();;
	cat->makeSound();
	std::cout << "\033[32mAnimal type is " << meta->getType();
    meta->makeSound();
	std::cout << std::endl;

	std::cout << "\033[33mWrongAnimal type is " << wrong->getType();
	wrong->makeSound();
	
	std::cout << "\033[31mWrongAnimal type is " << wrongCat->getType();
    wrongCat->makeSound();
	
	
	std::cout << std::endl;
	
	delete meta;
	delete dog;
	delete cat;
	delete wrong;
	delete wrongCat;
	return 0;
}