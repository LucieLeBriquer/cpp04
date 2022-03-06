/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 00:16:39 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/21 00:16:39 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*
**		CONSTRUCTORS AND DESTRUCTOR
*/

Ice::Ice(void) : AMateria("ice")
{
	if (PRINT_LOG)
		std::cout << embed("Ice", YELLOW) << "constructor called" << std::endl;
}

Ice::Ice(const Ice &ice) : AMateria(ice)
{
	if (PRINT_LOG)
		std::cout << embed("Ice", YELLOW) << "copy constructor called" << std::endl;
	*this = ice;
}

Ice::~Ice()
{
	if (PRINT_LOG)
		std::cout << embed("Ice", RED) << "destructor called" << std::endl;
}

/*
**		OVERLOAD OPERATORS
*/

Ice	&Ice::operator=(const Ice &ice)
{
	(void)ice;
	return (*this);
}

/*
**		MEMBER FUNCTIONS
*/

Ice		*Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
