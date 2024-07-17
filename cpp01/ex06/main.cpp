/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:23:32 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/19 16:02:50 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int argc, char const *argv[])
{
    if (argc == 2)
    {
        std::string level = argv[1];
        Harl harl;

        harl.complain(level);
    }
    else
        std::cerr << "\033[31mUsage: " << argv[0] << " < level > \033[0m"<< std::endl;
    return 0;
}
