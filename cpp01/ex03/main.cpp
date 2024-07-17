/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:14:47 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/18 19:50:36 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

/**
 * Dans quel cas pensez-vous plus judicieux d’utiliser un pointeur sur
 * Weapon ? Et une référence sur Weapon ? Pourquoi
 * 
 * L'utilisation de pointeurs sera plus judicieuse si :
 * - Il existe des cas où l'arme peut ne pas exister (c'est-à-dire, être nulle). Un pointeur permet de gérer cette nullité.
 * - Vous avez besoin de changer l'objet pointé après l'initialisation. Les pointeurs permettent de rediriger vers un autre objet.
 * - Vous devez gérer explicitement la durée de vie de l'objet (par exemple, avec new et delete).
 * 
 * L'utilisation de références est plus judicieuse si :
 * - Vous voulez vous assurer que l'arme existe toujours (les références ne peuvent pas être nulles).
 * - Vous voulez garantir que la classe utilise toujours une arme valide sans avoir à vérifier sa nullité.
 * - Vous n'avez pas besoin de changer l'objet référencé après l'initialisation.
 * 
 */

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}