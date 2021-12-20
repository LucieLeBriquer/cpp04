/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:05:42 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/20 22:05:42 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
**		CONSTRUCTORS AND DESTRUCTOR
*/

WrongAnimal::WrongAnimal(void)
{
	std::cout << YELLOW << "[WrongAnimal]" << END << "constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type)
{
	std::cout << YELLOW << "[WrongAnimal]" << END << "constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal)
{
	std::cout << YELLOW << "[WrongAnimal]" << END << "copy constructor called" << std::endl;
	*this = wrongAnimal;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << YELLOW << "[WrongAnimal]" << END << "destructor called" << std::endl;
}

/*
**		OVERLOAD OPERATORS
*/

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	if (this != &wrongAnimal)
	{
		this->_type = wrongAnimal._type;
	}
	return (*this);
}

/*
**		MEMBER FUNCTIONS
*/

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "*undefined*" << std::endl;
}
