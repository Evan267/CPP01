/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:44:20 by eberger           #+#    #+#             */
/*   Updated: 2023/05/19 16:13:46 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int	i;
	Zombie	*horde;

	i = 0;
	horde = new Zombie[N];
	while (i < N)
	{
		horde[i].set_name(name);
		i++;
	}
	return (horde);
}
