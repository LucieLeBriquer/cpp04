/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:38:03 by lle-briq          #+#    #+#             */
/*   Updated: 2022/03/10 14:51:44 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* 
**		CONSTRUCTORS AND DESTRUCTOR
*/

Animal::Animal(void) : _type("Unknown")
{
	std::cout << YELLOW << "[Animal]" << END << " constructor called" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type)
{
	std::cout << YELLOW << "[Animal]" << END << " constructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	std::cout << YELLOW << "[Animal]" << END << " copy constructor called" << std::endl;
	*this = animal;
}

Animal::~Animal()
{
	std::cout << RED << "[Animal]" << END << " destructor called" << std::endl;
}

/* 
**		OVERLOAD OPERATORS
*/

Animal	&Animal::operator=(const Animal &animal)
{
	if (this != &animal)
	{
		this->_type = animal._type;
	}
	return (*this);
}

/* 
**		MEMBER FUNCTIONS
*/

std::string		Animal::getType(void) const
{
	return (this->_type);
}
