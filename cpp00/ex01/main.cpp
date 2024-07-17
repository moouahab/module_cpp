/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:27:39 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/15 13:54:47 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	displayOption(std::string &option)
{
	std::cout << "\033[35m-----------------------------" << std::endl;
	std::cout << "| OPTION :                  |" << std::endl;
	std::cout << "| ADD      SEARCH     EXIT  |" << std::endl;
	std::cout << "-----------------------------\033[0m" << std::endl;
	std::cout << "\033[36mwhat is your option : ";
	getline(std::cin, option);
	if (!std::cin)
		std::exit(EXIT_FAILURE);
}

Contact newContact()
{
	Contact contact;
	
	contact.initData();
	return contact;
}

int main(int ac, char *av[])
{
    bool exitProg;
    std::string tmp;
    PhoneBook repertoire;

    if (ac > 1)
    {
        std::cerr << "Error: too many arguments. Usage: " << av[0] << std::endl;
        return 1;
    }
    exitProg = false;
    std::cout << "Welcome to my directory" << std::endl;
    while (!exitProg)
    {
        std::string option;
        displayOption(option);
        if (option == "ADD")
            repertoire.addContact(newContact());
        else if (option == "SEARCH")
        {
            repertoire.displayDirectory();
            std::cout << "\033[35mPlease search by contact index: ";
            getline(std::cin, tmp);
			if (!std::cin)
				std::exit(EXIT_FAILURE);
            std::istringstream iss(tmp);
            int num;
            if (iss >> num)
                repertoire.searchContact(num);
            else
                std::cout << "\033[31mInvalid input: please enter a valid number\033[0m" << std::endl;
        }
        else if (option == "EXIT")
            exitProg = true;
        else
            std::cout << "\033[31mOPTION IS NOT CORRECT\033[0m" << std::endl;
    }
    return 0;
}

