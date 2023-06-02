/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:33:57 by eberger           #+#    #+#             */
/*   Updated: 2023/05/19 21:02:23 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void	attack(void) const;

private:

	Weapon		&_weapon;
	std::string	_name;

};

#endif
