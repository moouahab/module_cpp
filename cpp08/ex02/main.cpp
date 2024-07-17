/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 22:07:05 by moouahab          #+#    #+#             */
/*   Updated: 2024/07/17 22:07:06 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main() {
    // Test avec MutantStack
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "MutantStack Top element: " << mstack.top() << std::endl; // Devrait afficher 17
    mstack.pop();
    std::cout << "MutantStack size after pop: " << mstack.size() << std::endl; // Devrait afficher 1
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << "MutantStack elements:" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << std::endl;
    }

    std::cout << "MutantStack elements in reverse:" << std::endl;
    for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit) {
        std::cout << *rit << std::endl;
    }

    // Test de copie et d'affectation avec MutantStack
    MutantStack<int> copyStack(mstack);
    MutantStack<int> assignedStack;
    assignedStack = mstack;

    std::cout << "Copied MutantStack elements:" << std::endl;
    for (MutantStack<int>::iterator it = copyStack.begin(); it != copyStack.end(); ++it) {
        std::cout << *it << std::endl;
    }

    std::cout << "Assigned MutantStack elements:" << std::endl;
    for (MutantStack<int>::iterator it = assignedStack.begin(); it != assignedStack.end(); ++it) {
        std::cout << *it << std::endl;
    }

    // Test avec std::list
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    std::cout << "std::list Top element: " << lst.back() << std::endl; // Devrait afficher 17
    lst.pop_back();
    std::cout << "std::list size after pop: " << lst.size() << std::endl; // Devrait afficher 1
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    std::cout << "std::list elements:" << std::endl;
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << std::endl;
    }

    std::cout << "std::list elements in reverse:" << std::endl;
    for (std::list<int>::reverse_iterator rit = lst.rbegin(); rit != lst.rend(); ++rit) {
        std::cout << *rit << std::endl;
    }

    // Test de copie et d'affectation avec std::list
    std::list<int> copyList(lst);
    std::list<int> assignedList;
    assignedList = lst;

    std::cout << "Copied std::list elements:" << std::endl;
    for (std::list<int>::iterator it = copyList.begin(); it != copyList.end(); ++it) {
        std::cout << *it << std::endl;
    }

    std::cout << "Assigned std::list elements:" << std::endl;
    for (std::list<int>::iterator it = assignedList.begin(); it != assignedList.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}
