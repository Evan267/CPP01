/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 21:18:58 by eberger           #+#    #+#             */
/*   Updated: 2023/05/27 22:33:47 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl	*harl;
	if (argc < 2)
	{
		std::cerr << "Ajoutez le genre de commentaires de Harl !!"
			<< std::endl;
		return (1);
	}
	else if (argc > 2)
	{
		std::cerr << "Le programme n'accepte qu'un seul parametre !!"
			<< std::endl;
		return (1);
	}
	else
	{
		harl = new Harl;
		harl->complain(argv[1]);
		delete harl;
		return (0);
	}
}
