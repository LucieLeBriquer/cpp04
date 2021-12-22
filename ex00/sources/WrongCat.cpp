/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:11:21 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/20 22:11:21 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
**		CONSTRUCTORS AND DESTRUCTOR
*/

WrongCat::WrongCat(void) : WrongAnimal("Cat")
{
	std::cout << YELLOW << "[WrongCat]" << END << " constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat)
{
	std::cout << YELLOW << "[WrongCat]" << END << " copy constructor called" << std::endl;
	*this = wrongCat;
}

WrongCat::~WrongCat()
{
	std::cout << RED << "[WrongCat]" << END << " destructor called" << std::endl;
}

/*
**		OVERLOAD OPERATORS
*/

WrongCat	&WrongCat::operator=(const WrongCat &wrongCat)
{
	if (this != &wrongCat)
	{
		this->_type = wrongCat._type;
	}
	return (*this);
}

/*
**		MEMBER FUNCTIONS
*/

void	WrongCat::makeSound(void) const
{
	std::cout << "*meooow*" << std::endl;
}
