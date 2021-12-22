/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 23:53:44 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/21 00:07:06 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define END "\033[0m"
# define PRINT_LOG 0
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
		
	public:
		AMateria(void);
		AMateria(const std::string &type);
		AMateria(const AMateria &aMateria);
		virtual ~AMateria();

		AMateria	&operator=(const AMateria &aMateria);

		std::string const	&getType() const;

		virtual	AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};

std::string		embed(const std::string str, const std::string color, int size = 11);

#endif
