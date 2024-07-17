/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:59:57 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/28 20:35:52 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    const Cat* cat = new Cat();
	 const Dog* dog = new Dog();
    const Animal* animals[10];

    std::cout << cat->getType() << " address of brain: \033[33m" << cat->getBrain() << "\033[0m and it makes\033[35m";
    cat->makeSound();
	std::cout << "\033[0m";
	std::cout << dog->getType() << " address of brain: \033[33m" << dog->getBrain() << "\033[0m and it makes ";
    dog->makeSound();

    for (size_t i = 0; i < 5; ++i) {
        animals[i] = new Dog();
    }
    for (size_t i = 5; i < 10; ++i) {
        animals[i] = new Cat();
    }

    std::cout << "\nTesting makeSound and getType:\n" << std::endl;
    for (size_t i = 0; i < 10; ++i) {
        std::cout << animals[i]->getType() << ": ";
        animals[i]->makeSound();
    }

    std::cout << std::endl;

    for (size_t i = 0; i < 10; ++i) {
        delete animals[i];
    }

	delete dog;
    delete cat;
    return 0;
}

