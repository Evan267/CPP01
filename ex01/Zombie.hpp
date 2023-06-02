/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:08:23 by eberger           #+#    #+#             */
/*   Updated: 2023/05/19 16:12:12 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class	Zombie
{

public:

	Zombie(void);
	~Zombie(void);
	void	set_name(std::string name);
	void	announce(void);

private:

	std::string	_name;

};

Zombie	*zombieHorde(int N, std::string name);

#endif
