/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:49:40 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/22 20:06:35 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
		static const int	_inventorySize = 4;
		AMateria			*_inventory[_inventorySize];
		
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &materiaSource);
		virtual ~MateriaSource();

		MateriaSource	&operator=(const MateriaSource &materiaSource);

		void		learnMateria(AMateria *m);
		AMateria	*createMateria(const std::string &type);
};

#endif
