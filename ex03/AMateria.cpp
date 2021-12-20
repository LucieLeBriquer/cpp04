/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 00:07:19 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/21 00:07:19 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
**		CONSTRUCTORS AND DESTRUCTOR
*/

AMateria::AMateria(void) : _type("unknown")
{
	return ;
}

AMateria::AMateria(const std::string &type) : _type(type)
{
	return ;
}

AMateria::AMateria(const AMateria &aMateria)
{
	*this = aMateria;
}

AMateria::~AMateria()
{
	return ;
}

/*
**		OVERLOAD OPERATORS
*/

AMateria	&AMateria::operator=(const AMateria &aMateria)
{
	if (this != &aMateria)
	{
		_type = aMateria._type;
	}
	return (*this);
}

/*
**		MEMBER FUNCTIONS
*/

std::string const	&AMateria::getType() const
{
	return (_type);
}

void		AMateria::use(ICharacter &target)
{
	std::cout << "*is doing an unkown action on " << target.getName() << "*" << std::endl;
}
