/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:22:05 by eberger           #+#    #+#             */
/*   Updated: 2023/05/19 16:19:16 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int	i;
	int	sizeHorde;

	i = 0;
	sizeHorde = 10;
	horde = zombieHorde(sizeHorde, "Evan");
	while (i < sizeHorde)
	{
		horde[i].announce();
		i++;
	}
	delete []horde;
	return (1);
}
