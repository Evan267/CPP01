/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:59:26 by eberger           #+#    #+#             */
/*   Updated: 2023/05/27 18:31:06 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string filename, std::string stringToReplace, std::string newString) : _filename(filename)
{
	if (this->_openSourceFile())
		return ;
	if (this->_createDestinationFile())
		return ;
	this->_replaceStringInSource(stringToReplace, newString);
	this->_closeAllFiles();
}

Sed::~Sed(void)
{
	this->_source.close();
	this->_destination.close();
	return ;
}

int	Sed::_openSourceFile(void)
{
	std::filebuf	*bufferSource;

	this->_source.open(this->_filename, std::fstream::in);
	if (this->_source.fail())
	{
		std::cerr << "Erreur de creation du fichier .replace"
			<< std::endl;
		return (1);
	}
	bufferSource = this->_source.rdbuf();
	if (bufferSource)
	{
		std::istreambuf_iterator<char> iterator(bufferSource);
		std::istreambuf_iterator<char> end;
		this->_stringBufferSource = std::string(iterator, end);
	}
	return (0);
}

int	Sed::_createDestinationFile(void)
{
	std::string	filenameReplace;

	filenameReplace = this->_filename.append(".replace");
	this->_destination.open(filenameReplace, std::fstream::out);
	if (this->_destination.fail())
	{
		std::cerr << "Erreur de creation du fichier .replace"
			<< std::endl;
		return (1);
	}
	return (0);
}

void	Sed::_closeAllFiles(void)
{
	if (this->_source.is_open())
		this->_source.close();
	if (this->_destination.is_open())
		this->_destination.close();
}

void	Sed::_replaceStringInSource(std::string stringToReplace, std::string newString)
{
	std::string	bufferDestination;
	std::size_t	pos;
	std::size_t	newPos;
	int	i = 0;

	pos = 0;
	newPos = 0;
	while (pos != std::string::npos && i < 10)
	{
		i++;
		newPos = this->_stringBufferSource.find(stringToReplace, pos);
		if (newPos != std::string::npos)
		{
			bufferDestination.append(this->_stringBufferSource, pos, newPos - pos);
			bufferDestination.append(newString);
		}
		else
			bufferDestination.append(this->_stringBufferSource, pos);
		pos = newPos;
		if (pos != std::string::npos)
			pos += stringToReplace.length();
	}
	this->_destination << bufferDestination;
	this->_closeAllFiles();
}
