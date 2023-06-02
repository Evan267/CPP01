/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:08:23 by eberger           #+#    #+#             */
/*   Updated: 2023/05/18 13:55:38 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class	Zombie
{

public:

	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);

private:

	std::string	_name;

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
