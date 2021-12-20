/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 00:30:50 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/21 00:35:35 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
**		CONSTRUCTORS AND DESTRUCTOR
*/

Character::Character(void) : _name("random")
{
	return ;
}


Character::Character(const std::string &name) : _name(name)
{
	return ;
}

Character::Character(const Character &character) : _name(character._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (character._inventory[i] != NULL)
			_inventory[i] = character._inventory[i]->clone();
	}
	*this = character;
}

Character::~Character()
{
	return ;
}

/*
**		OVERLOAD OPERATORS
*/

Character	&Character::operator=(const Character &character)
{
	if (this != &character)
	{
		_name = character._name;
		for (int i = 0; i < 4; i++)
			_inventory[i] = character._inventory[i];
	}
	return (*this);
}

/*
**		MEMBER FUNCTIONS


		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
*/

const std::string	&Character::getName(void) const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	int	i = -1;

	while (++i < 4)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (_inventory[idx] != NULL)
		return (_inventory[idx]->use(target));
	std::cout << "* do nothing *" << std::endl;
}