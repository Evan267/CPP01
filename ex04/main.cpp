/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 13:33:22 by eberger           #+#    #+#             */
/*   Updated: 2023/05/25 10:51:51 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char **argv)
{
	Sed	*sed;

	if (argc == 4)
	{
		sed = new Sed(argv[1], argv[2], argv[3]);
		delete sed;
	}
	else
		std::cerr << "Nombre d'argument incorrect" << std::endl;
	return (0);
}
