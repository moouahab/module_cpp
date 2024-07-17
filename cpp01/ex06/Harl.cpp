/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:23:47 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/19 16:14:09 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

void    Harl::debug(void)
{
    std::cout << "\033[32mI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !\033[0m" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "\033[32mI cannot believe adding extra bacon costs more money. You didn't put enough\
    bacon in my burger ! If you did, I wouldn't be asking for more !\033[32m" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "\033[32mI think I deserve to have some extra bacon for free. I’ve been coming\
for years whereas you started working here since last month\033[32m" << std::endl;   
}

void    Harl::error(void)
{
    std::cout << "\033[32mThis is unacceptable ! I want to speak to the manager now.\033[0m" << std::endl;   
}

void Harl::complain(std::string level)
{
    int i = 0;
    const std::string message[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (i < 4)
    {
        if (message[i] == level)
            break ;
        i++;
    }
    switch (i)
    {
        case 0:
            Harl::debug();
            break;
        case 1:
            Harl::info();
            break;
        case 2:
            Harl::warning();
            break;
        case 3:
            Harl::error();
            break;
        default:
            std::cerr << "\033[31mError : level is not correct !\033[0m" << std::endl;
            break;
    }
}
