/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 00:01:32 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/19 15:09:29 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * [QUE DOIT FAIRE LE PROGRAME]
 * 
 * il prend 3 parammetr un nom de fichier et deux string
 * 
 * le fichier <filename> sera ouvert et son contenu copié
 * dans un nouveau fichier <filename>
 * replace, où chaque occurrence de s1 sera remplacée par s2
 * 
 * [COMMMENT FAIRE]
 * 
 * ouvrir le filename en utilisant td::ifstream file(av[1]);
 *
 * 
*/

#include <iostream>
#include <fstream>
#include <string>

bool openFile(std::ifstream &filename)
{
    if (!filename.is_open())
    {
        std::cerr << "\033[31mError: can't open file\033[0m" << std::endl;
        return false;
    }    
    return true;
}

std::string creatNameCopy(const std::string& name, char c)
{
    size_t pos = name.find(c);
    if (pos != std::string::npos)
    {
        return name.substr(0, pos) + ".replace";  
    }
    else
        return name + ".replace";
}

/**
 * @brief Function to replace all occurrences of a substring in a given string.
 *
 * This function takes an input stream, an output stream, two strings (s1 and s2),
 * and replaces all occurrences of s1 in the input stream with s2.
 * The replaced strings are then written to the output stream.
 *
 * @param infile The input stream from which to read the original string.
 * @param outfile The output stream to which to write the modified string.
 * @param s1 The substring to be replaced.
 * @param s2 The substring to replace s1.
 *
 * @return void
 */

void replace(std::ifstream& infile, std::ofstream& outfile, const std::string& s1, const std::string& s2)
{
    std::string line;
    while (std::getline(infile, line))
    {
        std::string new_line;
        size_t      pos = 0;
        size_t      start = 0;
        // std::string::npos indique si l'oucurence existe ou non dans la chaine 
        while ((pos = line.find(s1, start)) != std::string::npos) 
        {
            new_line += line.substr(start, pos - start);
            new_line += s2;
            start = pos + s1.length();
        }
        new_line += line.substr(start);
        outfile << new_line << std::endl;
    }
}

/**
 * @brief Main function of the program.
 *
 * This function takes three parameters: the name of the file to be processed,
 * and two strings to replace in the file.
 *
 * The function opens the input file, creates a new output file with a ".replace"
 * extension, and replaces all occurrences of the first string with the second
 * string in the input file.
 *
 * @param ac The number of command-line arguments.
 * @param av An array of command-line arguments.
 * @return 0 if the program runs successfully, 1 otherwise.
 */

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string filename = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::ifstream infile(filename.c_str());
        if (!openFile(infile))
            return 1;
        std::ofstream outfile(creatNameCopy(filename, '.').c_str());
        if (!outfile.is_open())
        {
            std::cerr << "\033[31mError: can't open file\033[0m" << std::endl;
            infile.close();
            return 1;
        }
        replace(infile, outfile, s1, s2);
        infile.close();
        outfile.close();
    }
    else
    {
        std::cerr << "\033[31mUsage:./replace <filename> <s1> <s2>\033[0m" << std::endl;
        return 1;
    }
    return 0;
}

