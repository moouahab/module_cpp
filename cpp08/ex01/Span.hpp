/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:21:45 by moouahab          #+#    #+#             */
/*   Updated: 2024/07/14 20:15:23 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <climits>
#include <algorithm>
#include <stdexcept>
#include <vector>

class Span {
    private:
        std::vector<int> _array;
        Span();
    public:
        Span(size_t N);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();
        void addNumber(int value);
        template <typename Iterator>
        void addNumbers(Iterator begin, Iterator end);
        long int shortestSpan() const;
        long int longestSpan() const;
};

template <typename Iterator>
void Span::addNumbers(Iterator begin, Iterator end) {
    size_t distance = std::distance(begin, end);
    if (_array.size() + distance > _array.capacity()) {
        throw std::runtime_error("Not enough capacity to add all elements");
    }
    _array.insert(_array.end(), begin, end);
}

#endif