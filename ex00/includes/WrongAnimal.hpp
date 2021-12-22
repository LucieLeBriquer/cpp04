/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:00:47 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/20 22:00:47 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define END "\033[0m"
# include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
		
	public:
		WrongAnimal(void);
		WrongAnimal(const std::string &type);
		WrongAnimal(const WrongAnimal &wrongAnimal);
		virtual ~WrongAnimal();

		WrongAnimal	&operator=(const WrongAnimal &wrongAnimal);

		std::string	getType(void) const;
		void		makeSound(void) const;
};

#endif
