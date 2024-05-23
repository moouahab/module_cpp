/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:22:04 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/13 10:54:27 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdarg>
#include <iostream>

/**
 * À savoir :
 *
 * std::cout ==> sortie standard (en mémoire tampon)
 *   - Utilisé pour afficher des informations à l'utilisateur.
 *  
	- Les données sont stockées dans un tampon avant d'être envoyées à la sortie standard (écran),

	*     ce qui peut améliorer les performances en réduisant le nombre d'opérations d'écriture.
 *
 * std::cerr ==> sortie d'erreur (sans mémoire tampon)
 *   - Utilisé pour rapporter des erreurs.
 *   - Les messages sont immédiatement écrits à la sortie d'erreur (écran),
	sans passer par un tampon,
 *     ce qui garantit que les messages d'erreur sont affichés immédiatement,
	même en cas de crash.
 *
 * std::clog ==> sortie d'historique (en mémoire tampon)
 *   - Similaire à std::cout, mais utilisé pour le journalisation (logging).
 *   - Les données sont aussi tamponnées,
	ce qui signifie qu'elles ne sont pas immédiatement visibles.
 *
 * std::endl ==> '\n' + flush
 *  
	- Insère un caractère de nouvelle ligne ('\n') et effectue un flush sur le flux,

	*     ce qui force la vidange du tampon associé au flux. Cela garantit que tout le contenu du tampon
 *     est écrit à la sortie avant de continuer.
 *
 * Un flush est un système qui permet de vider la mémoire tampon.
 *  
	- Cela envoie toutes les données en attente dans le tampon vers leur destination (par exemple,
	l'écran ou un fichier),

	*     ce qui est utile pour s'assurer que toutes les données sont affichées ou enregistrées jusqu'à ce point.
 */

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		for (size_t i = 1; av[i]; i++)
			for (size_t j = 0; av[i][j]; j++)
				std::cout << (char)std::toupper(av[i][j]);
		std::cout << std::endl;
	}
	else
		std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std ::endl;
	return (0);
}
