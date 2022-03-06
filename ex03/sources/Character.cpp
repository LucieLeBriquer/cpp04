/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 00:30:50 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/22 17:38:54 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
**		CONSTRUCTORS AND DESTRUCTOR
*/

Character::Character(void) : _name("random")
{
	if (PRINT_LOG)
		std::cout << embed("Character", YELLOW) << "constructor called" << std::endl;
	for (int i = 0; i < _inventorySize; i++)
		_inventory[i] = NULL;
}


Character::Character(const std::string &name) : _name(name)
{
	if (PRINT_LOG)
		std::cout << embed("Character", YELLOW) << "constructor called" << std::endl;
	for (int i = 0; i < _inventorySize; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &character)
{
	if (PRINT_LOG)
		std::cout << embed("Character", YELLOW) << "copy constructor called" << std::endl;
	*this = character;
}

Character::~Character()
{
	if (PRINT_LOG)
		std::cout << embed("Character", RED) << "destructor called" << std::endl;
	for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

/*
**		OVERLOAD OPERATORS
*/

Character	&Character::operator=(const Character &character)
{
	if (this != &character)
	{
		_name = character._name;
		for (int i = 0; i < _inventorySize; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (character._inventory[i])
				_inventory[i] = character._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}

/*
**		MEMBER FUNCTIONS
*/

const std::string	&Character::getName(void) const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	
	std::cout << embed(_name, BLUE);
	for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << "equips " << m->getType() << " in slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "can't equips " <<  m->getType() << " (inventory full)" << std::endl;
	std::cout << embed("", BLUE) << "...deleting materia" << std::endl;
	delete m;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < _inventorySize)
	{
		std::cout << embed(_name, BLUE) << "unequips " << _inventory[idx]->getType() << " from slot " << idx << std::endl;
		_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	std::cout << embed(_name, GREEN);
	if (idx >= 0 && idx < _inventorySize && _inventory[idx])
	{
		_inventory[idx]->use(target);
		return ;
	}
	std::cout << "do nothing" << std::endl;
}

static std::string	centering(const std::string str, int size = 6)
{
	int n, s1, s2;
	std::string	centered;
	std::string	toCenter = str; 
	
	n = toCenter.size();
	if (n > size)
	{
		toCenter = toCenter.substr(0, size - 2);
		toCenter[size - 4] = '.';
		toCenter[size - 3] = ' ';
		n = toCenter.size();
	}
	s1 = (size - n) / 2;
	s2 = size - n - s1;
	centered = std::string(s1, ' ') + toCenter + std::string(s2, ' ');
	return (centered);
}

void	Character::printInventory(void) const
{
	std::cout << embed(_name, ORANGE) << "|";
	for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i])
			std::cout << centering(_inventory[i]->getType()) << "|";
		else
			std::cout << centering("") << "|";
	}
	std::cout << std::endl;
}
