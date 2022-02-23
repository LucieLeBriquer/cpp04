/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:51:06 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/20 22:09:36 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

static void	wrongTest(void)
{
	const WrongAnimal	*w = new WrongCat();

	std::cout << "w is " << w->getType() << " : ";
	w->makeSound();
	
	delete w;
}

static void	subjectTest(void)
{
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << "j is " << j->getType() << " : ";
	j->makeSound();
	std::cout << "i is " << i->getType() << " : ";
	i->makeSound();
	std::cout << "m is " << meta->getType() << " : ";
	meta->makeSound();

	delete i;
	delete j;
	delete meta;
}

int	main(void)
{
	subjectTest();
	std::cout << std::endl;
	wrongTest();
	return (0);
}
