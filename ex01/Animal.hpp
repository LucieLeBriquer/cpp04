/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:26:17 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/20 21:38:09 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define END "\033[0m"
# include <iostream>

class Animal
{
	protected:
		std::string	_type;
		
	public:
		Animal(void);
		Animal(const std::string &type);
		Animal(const Animal &animal);
		virtual ~Animal();

		Animal	&operator=(const Animal &animal);
		
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif
