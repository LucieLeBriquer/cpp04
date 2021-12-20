/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 00:17:13 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/21 00:17:13 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*
**		CONSTRUCTORS AND DESTRUCTOR
*/

Cure::Cure(void) : AMateria("cure")
{
	return ;
}

Cure::Cure(const Cure &cure)
{
	*this = cure;
}

Cure::~Cure()
{
	return ;
}

/*
**		OVERLOAD OPERATORS
*/

Cure	&Cure::operator=(const Cure &cure)
{
	if (this != &cure)
	{
		this->_type = cure._type;
	}
	return (*this);
}

/*
**		MEMBER FUNCTIONS
*/
Cure		*Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
};
