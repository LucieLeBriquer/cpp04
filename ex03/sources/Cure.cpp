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
	if (PRINT_LOG)
		std::cout << embed("Cure", YELLOW) << "constructor called" << std::endl;
}

Cure::Cure(const Cure &cure) : AMateria(cure)
{
	if (PRINT_LOG)
		std::cout << embed("Cure", YELLOW) << "copy constructor called" << std::endl;
	*this = cure;
}

Cure::~Cure()
{
	if (PRINT_LOG)
		std::cout << embed("Cure", RED) << "destructor called" << std::endl;
}

/*
**		OVERLOAD OPERATORS
*/

Cure	&Cure::operator=(const Cure &cure)
{
	(void)cure;
	return (*this);
}

/*
**		MEMBER FUNCTIONS
*/
Cure	*Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
