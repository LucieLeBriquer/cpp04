/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:47:37 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/20 22:47:37 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "Dog.hpp"
#include "Cat.hpp"
#define SIZE 5

static void	printTitle(std::string title)
{
	std::string	toPrint;
	int	size = 50;
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
	std::cout << toPrint.substr(n / 2, n);
	std::cout << std::setfill('=') << std::setw(size / 2 - n + n / 2) << "" << std::endl;
	std::cout << std::setfill('=') << std::setw(size) << "" << std::endl;

}

static void	testLeaks(void)
{
	printTitle("LEAKS");
	const Animal	*dog = new Dog();
	const Animal	*cat = new Cat();

	delete dog;
	delete cat;
}

static void	testDeepCopy(void)
{
	printTitle("DEEP COPY");
	Dog	dog1;
	Dog	dog2;

	dog1.printIdeas();
	dog2.printIdeas();

	Cat	cat1;
	Cat	cat2(cat1);

	cat1.printIdeas();
	cat2.printIdeas();
}

static void	testSubject(void)
{
	printTitle("SUBJECT");
	Animal	*arrayAnimals[2 * SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arrayAnimals[i] = new Dog();
		arrayAnimals[SIZE + i] = new Cat();
	}

	for (int i = 0; i < 2 * SIZE; i++)
		delete arrayAnimals[i];
}

int	main(void)
{
	testSubject();
	testLeaks();
	testDeepCopy();
	return (0);
}
