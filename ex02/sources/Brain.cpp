/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:41:46 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/20 23:17:02 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

static std::string	randomString(int size)
{
	static int			add;
	const std::string	alphaNum = "abcdefghijklmnopqrstuvwxyz";
	std::string			randomStr = "";

	for (int i = 0; i < size; i++)
	{
		add += 11;
		randomStr += alphaNum[add % 26];
	}
	return (randomStr);
}

/*
**		CONSTRUCTORS AND DESTRUCTOR
*/

Brain::Brain(void)
{
	std::cout << YELLOW << "[Brain]" << END << "constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = randomString(5);
}

Brain::Brain(const Brain &brain)
{
	std::cout << YELLOW << "[Brain]" << END << "copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = randomString(5);
	*this = brain;
}

Brain::~Brain()
{
	std::cout << RED << "[Brain]" << END << "destructor called" << std::endl;
}

/*
**		OVERLOAD OPERATORS
*/

Brain	&Brain::operator=(const Brain &brain)
{
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = brain._ideas[i];
	}
	return (*this);
}

/*
**		MEMBER FUNCTIONS
*/

void	Brain::printFirstIdeas(void) const
{
	std::cout << BLUE << "[Ideas] " << END << _ideas[0] << "," << _ideas[1] << "," << _ideas[2] << "," << _ideas[3] << "," << _ideas[4] << ",... ";
}
