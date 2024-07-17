/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:05:31 by moouahab          #+#    #+#             */
/*   Updated: 2024/07/14 20:21:50 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include "Span.hpp"
#include <iostream>
#include <vector>

int main() {
    Span mySpan(10);
    
    mySpan.addNumber(5);    
    int arr[] = {89, 82, 30, 96, 100, 7, 18, 0, 10};
    std::vector<int> numbers(arr, arr + sizeof(arr) / sizeof(arr[0]));

    try {
        mySpan.addNumbers(numbers.begin(), numbers.end());
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try {
        std::cout << "Shortest span: " << mySpan.shortestSpan() << std::endl;
        std::cout << "Longest span: " << mySpan.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

