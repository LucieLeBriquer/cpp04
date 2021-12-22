/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 00:08:09 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/21 00:14:10 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Cure : public AMateria
{
	protected:
		
	public:
		Cure(void);
		Cure(const Cure &cure);
		virtual ~Cure();

		Cure	&operator=(const Cure &cure);

		Cure	*clone() const;
		void	use(ICharacter &target);
};
