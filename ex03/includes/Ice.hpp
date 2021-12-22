/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 00:08:09 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/21 00:14:10 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Ice : public AMateria
{
	protected:
		
	public:
		Ice(void);
		Ice(const Ice &ice);
		virtual ~Ice();

		Ice	&operator=(const Ice &ice);

		Ice		*clone() const;
		void	use(ICharacter &target);
};
