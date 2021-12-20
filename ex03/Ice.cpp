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
	return ;
}

Ice::Ice(const Ice &ice)
{
	*this = ice;
}

Ice::~Ice()
{
	return ;
}

/*
**		OVERLOAD OPERATORS
*/

Ice	&Ice::operator=(const Ice &ice)
{
	if (this != &ice)
	{
		this->_type = ice._type;
	}
	return (*this);
}

/*
**		MEMBER FUNCTIONS
*/
Ice		*Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
};
