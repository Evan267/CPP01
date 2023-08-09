/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:07:52 by eberger           #+#    #+#             */
/*   Updated: 2023/08/09 09:40:49 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie1;

	std::cout << "Création du premier zombie" << std::endl;
	zombie1 = newZombie("Alain");
	zombie1->announce();
	delete zombie1;

	std::cout << "Création du deuxieme zombie" << std::endl;
	randomChump("Georges");
	return (0);
}
