/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:49:54 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/20 21:49:54 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
**		CONSTRUCTORS AND DESTRUCTOR
*/

Dog::Dog(void) : Animal("Dog")
{
	std::cout << YELLOW << "[Dog]" << END << "constructor called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	std::cout << YELLOW << "[Dog]" << END << "copy constructor called" << std::endl;
	*this = dog;
}

Dog::~Dog()
{
	std::cout << RED << "[Dog]" << END << "destructor called" << std::endl;
}

/*
**		OVERLOAD OPERATORS
*/

Dog	&Dog::operator=(const Dog &dog)
{
	if (this != &dog)
	{
		this->_type = dog._type;
	}
	return (*this);
}

/*
**		MEMBER FUNCTIONS
*/

void	Dog::makeSound(void) const
{
	std::cout << "*woof-woof*" << std::endl;
}
