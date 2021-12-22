/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:52:18 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/22 17:59:37 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
**		CONSTRUCTORS AND DESTRUCTOR
*/

MateriaSource::MateriaSource(void)
{
	if (PRINT_LOG)
		std::cout << embed("MateriaSource", YELLOW)  << "constructor called" << std::endl;
	for (int i = 0; i < _inventorySize; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{
	if (PRINT_LOG)
		std::cout << embed("MateriaSource", YELLOW) << "copy constructor called" << std::endl;
	*this = materiaSource;
}

MateriaSource::~MateriaSource()
{
	if (PRINT_LOG)
		std::cout << embed("MateriaSource", RED) << "destructor called" << std::endl;
	for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

/*
**		OVERLOAD OPERATORS
*/

MateriaSource	&MateriaSource::operator=(const MateriaSource &materiaSource)
{
	if (this != &materiaSource)
	{
		for (int i = 0; i < _inventorySize; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (materiaSource._inventory[i])
				_inventory[i] = materiaSource._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}

/*
**		MEMBER FUNCTIONS
*/

void		MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i] == NULL)
		{
			std::cout << embed("MateriaSource", GRAYL) << "learning " << m->getType() << std::endl;
			_inventory[i] = m;
			return ;
		}
	}
	std::cout << embed("MateriaSource", GRAYL) << "can't learn new materia (inventory full)" << std::endl;
	std::cout << embed("", GRAYL) << "...deleting materia" << std::endl;
	delete m;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i] != NULL && _inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	}
	std::cout << embed("MateriaSource", GRAYL) << "can't create " << type << " materia (not learned)" << std::endl;
	return (NULL);
}
