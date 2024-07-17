/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:55:36 by moouahab          #+#    #+#             */
/*   Updated: 2024/07/10 13:55:59 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template<typename T>
Array<T>::Array() : data(NULL), m_size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : data(new T[n]()), m_size(n) {}

template<typename T>
Array<T>::Array(const Array& other) : data(new T[other.m_size]), m_size(other.m_size) {
    for (unsigned int i = 0; i < m_size; ++i) {
        data[i] = other.data[i];
    }
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other) {
        delete[] data; // Libère l'ancienne mémoire
        m_size = other.m_size;
        data = new T[m_size];
        for (unsigned int i = 0; i < m_size; ++i) {
            data[i] = other.data[i];
        }
    }
    return *this;
}

template<typename T>
Array<T>::~Array() {
    delete[] data;
}

template<typename T>
T& Array<T>::operator[](unsigned int index) {
  // superieur ou egale car un tableau == size - 1
  // vue que un tableau commence a 0
    if (index >= m_size) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= m_size) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

template<typename T>
unsigned int Array<T>::size() const {
    return m_size;
}

#endif