/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:50:19 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/20 23:45:08 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
**		CONSTRUCTORS AND DESTRUCTOR
*/

Cat::Cat(void) : Animal("Cat"), _brain(new Brain())
{
	std::cout << YELLOW << "[Cat]" << END << "constructor called" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat), _brain(new Brain(*(cat._brain)))
{
	std::cout << YELLOW << "[Cat]" << END << "copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << RED << "[Cat]" << END << "destructor called" << std::endl;
	delete _brain;
}

/*
**		OVERLOAD OPERATORS
*/

Cat	&Cat::operator=(const Cat &cat)
{
	if (this != &cat)
	{
		this->_type = cat._type;
		this->_brain = cat._brain;
	}
	return (*this);
}

/*
**		MEMBER FUNCTIONS
*/

void	Cat::makeSound(void) const
{
	std::cout << "*meooow*" << std::endl;
}

void	Cat::printIdeas(void) const
{
	this->_brain->printFirstIdeas();
	std::cout << " at " << &this->_brain << std::endl;
}
