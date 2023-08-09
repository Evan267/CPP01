/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:47:07 by eberger           #+#    #+#             */
/*   Updated: 2023/08/09 09:40:04 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " destructor called" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->_name
		<< ": BraiiiiiiinnnzzzZ..."
		<< std::endl;
}
