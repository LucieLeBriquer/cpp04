/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 00:07:19 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/22 18:19:28 by lle-briq         ###   ########.fr       */
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
		_type = aMateria._type;
	return (*this);
}

/*
**		MEMBER FUNCTIONS
*/

std::string const	&AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "is doing an unkown action on " << target.getName() << std::endl;
}

/*
**		USEFUL FUNCTIONS
*/

std::string		embed(const std::string str, const std::string color, int size)
{
	std::string	name = str;

	if (str == "")
		return (std::string(size + 1, ' '));
	if (size < 4)
		size = 4;
	if (name.size() > (unsigned)size - 2)
		name = '[' + name.substr(0, size - 3) + '.' + ']';
	else
		name = '[' + name + ']';
	return (std::string(size - name.size(), ' ') + color + name + " " + END);
}
