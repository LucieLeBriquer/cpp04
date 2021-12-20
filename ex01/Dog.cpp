/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:49:54 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/20 23:05:52 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
**		CONSTRUCTORS AND DESTRUCTOR
*/

Dog::Dog(void) : Animal("Dog"), _brain(new Brain())
{
	this->printIdeas();
	std::cout << YELLOW << "[Dog]" << END << "constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog), _brain(new Brain(*(dog._brain)))
{
	std::cout << YELLOW << "[Dog]" << END << "copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << RED << "[Dog]" << END << "destructor called" << std::endl;
	delete _brain;
}

/*
**		OVERLOAD OPERATORS
*/

Dog	&Dog::operator=(const Dog &dog)
{
	if (this != &dog)
	{
		this->_type = dog._type;
		this->_brain = dog._brain;
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

void	Dog::printIdeas(void) const
{
	
	this->_brain->printFirstIdeas();
	std::cout << " at " << &this->_brain << std::endl;
}
