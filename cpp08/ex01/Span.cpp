/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:32:35 by moouahab          #+#    #+#             */
/*   Updated: 2024/07/14 20:22:33 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(const Span &other) : _array(other._array) {}

Span &Span::operator=(const Span &other) {
    if (this != &other) {
        _array = other._array;
    }
    return *this;
}

Span::Span(size_t N) {
    _array.reserve(N);
}

Span::~Span() {}

void Span::addNumber(int value) {
    if (_array.size() == _array.capacity())
        throw std::runtime_error("Array is full");
    _array.push_back(value);
}

long int Span::shortestSpan() const {
    if (_array.size() < 2)
        throw std::runtime_error("Array must contain at least two elements");

    std::vector<int> sortedArray = _array; // Faire une copie non-const du vecteur
    std::sort(sortedArray.begin(), sortedArray.end());

    int min_span = INT_MAX;
    for (size_t i = 1; i < sortedArray.size(); ++i)
        min_span = std::min(min_span, sortedArray[i] - sortedArray[i - 1]);

    return min_span;
}

long int Span::longestSpan() const {
    if (_array.size() < 2)
        throw std::runtime_error("Array must contain at least two elements");

    return *std::max_element(_array.begin(), _array.end()) -
           *std::min_element(_array.begin(), _array.end());
}
