/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:30:52 by eberger           #+#    #+#             */
/*   Updated: 2023/08/09 10:12:33 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	stringVar = "HI THIS IS BRAIN";
	std::string	*stringPTR = &stringVar;
	std::string	&stringREF = stringVar;

	std::cout << "addresse de str: " << &stringVar << std::endl;
	std::cout << "addresse stockée dans ptr: " << stringPTR << std::endl;
	std::cout << "addresse stockée dans ref: " << &stringREF << std::endl;
	std::cout << "valeur de str: " << stringVar << std::endl;
	std::cout << "valeur stockée dans ptr: " << *stringPTR << std::endl;
	std::cout << "valeur stockée dans ref: " << stringREF << std::endl;

	return (0);
}
