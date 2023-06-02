/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:58:09 by eberger           #+#    #+#             */
/*   Updated: 2023/05/19 21:02:37 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {

public:

	HumanB(std::string name);
	~HumanB(void);
	void	setWeapon(Weapon &weapon);
	void	attack(void) const;

private:

	Weapon		*_weapon;
	std::string	_name;

};

#endif
