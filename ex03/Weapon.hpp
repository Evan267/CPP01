/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:19:25 by eberger           #+#    #+#             */
/*   Updated: 2023/08/09 10:36:11 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {

public:

	std::string const &	getType(void) const;
	void				setType(std::string type);
	Weapon(std::string type);
	~Weapon(void);

private:

	std::string	_type;

};

#endif
