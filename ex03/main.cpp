/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 00:42:10 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/22 16:42:04 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include <iomanip>

static void	printTitle(std::string title)
{
	std::string	toPrint;
	int	size = 54;
	int	n;

	toPrint = " " + title + " ";
	n = toPrint.size();
	if (n > size)
	{
		toPrint = toPrint.substr(0, size - 2);
		toPrint[size - 4] = '.';
		toPrint[size - 3] = ' ';
		n = toPrint.size();
	}
	std::cout << std::endl << std::setfill('=') << std::setw(size) << "" << std::endl;
	std::cout << std::setw(size / 2) << toPrint.substr(0, n / 2);
	std::cout << toPrint.substr(n / 2, n - n / 2);
	std::cout << std::setfill('=') << std::setw(size - size / 2 - n + n / 2) << "" << std::endl;
	std::cout << std::setfill('=') << std::setw(size) << "" << std::endl;
}

static void testSubject(void)
{
	printTitle("SUBJECT");
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("unknown");
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

static void	testCharacter(void)
{
	printTitle("CHARACTER");
	ICharacter	*hero = new Character("Lucie");
	ICharacter	*enemy = new Character("Correcteur");
	Ice			*ice = new Ice();

	hero->equip(new Ice());
	hero->equip(ice);
	hero->equip(new Cure());
	hero->equip(new Ice());
	enemy->equip(new Cure());
	enemy->equip(new Cure());
	enemy->equip(new Cure());

	hero->printInventory();
	enemy->printInventory();

	hero->use(0, *enemy);
	hero->use(1, *enemy);
	hero->use(3, *enemy);
	enemy->use(2, *hero);

	hero->unequip(1);
	hero->printInventory();
	hero->use(1, *enemy);

	hero->equip(new Cure());
	hero->printInventory();
	hero->use(1, *enemy);

	delete hero;
	delete enemy;
	delete ice;
}

static void	testMateriaSource()
{
	printTitle("MATERIA SOURCE");
	IMateriaSource	*matSource = new MateriaSource();
	ICharacter		*hero = new Character("Lucie");
	ICharacter		*enemy = new Character("Correcteur");
	
	matSource->learnMateria(new Ice());
	matSource->learnMateria(new Cure());
	matSource->learnMateria(new Cure());
	matSource->learnMateria(new Cure());
	matSource->learnMateria(new Cure());

	hero->printInventory();
	hero->equip(matSource->createMateria("ice"));
	hero->equip(matSource->createMateria("cure"));
	hero->equip(matSource->createMateria("cure"));
	hero->equip(matSource->createMateria("ice"));
	hero->printInventory();
	hero->equip(matSource->createMateria("cure"));
	hero->printInventory();

	hero->use(0, *enemy);
	hero->use(2, *enemy);

	delete matSource;
	delete hero;
	delete enemy;
}

int	main(void)
{
	testSubject();
	testCharacter();
	testMateriaSource();
	return (0);
}
