/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:50:19 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/20 21:50:19 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
**		CONSTRUCTORS AND DESTRUCTOR
*/

Cat::Cat(void) : Animal("Cat")
{
	std::cout << YELLOW << "[Cat]" << END << " constructor called" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal("Cat")
{
	std::cout << YELLOW << "[Cat]" << END << " copy constructor called" << std::endl;
	*this = cat;
}

Cat::~Cat()
{
	std::cout << RED << "[Cat]" << END << " destructor called" << std::endl;
}

/*
**		OVERLOAD OPERATORS
*/

Cat	&Cat::operator=(const Cat &cat)
{
	if (this != &cat)
	{
		this->_type = cat._type;
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
