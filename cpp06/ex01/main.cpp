/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:02:35 by moouahab          #+#    #+#             */
/*   Updated: 2024/07/04 21:36:04 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main() {
    Data originalData;
    originalData.num = 42;

    uintptr_t raw = Serializer::serialize(&originalData);
    std::cout << "Raw Data: " << raw << std::endl;
    Data* deserializedData = Serializer::deserialize(raw);
    std::cout << "Original Data address: " << &originalData << std::endl;
    std::cout << "Deserialized Data address: " << deserializedData << std::endl;

    if (&originalData == deserializedData) {
        std::cout << "Success: The deserialized pointer is the same as the original pointer." << std::endl;
    } else {
        std::cout << "Failure: The deserialized pointer is different from the original pointer." << std::endl;
    }

    return 0;
}
