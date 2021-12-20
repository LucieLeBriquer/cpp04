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

#endif
