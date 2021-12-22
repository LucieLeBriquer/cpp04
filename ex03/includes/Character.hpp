/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 00:17:54 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/21 00:31:02 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter
{
	protected:
		static const int	_inventorySize = 4;
		AMateria			*_inventory[_inventorySize];
		std::string			_name;
		
	public:
		Character(void);
		Character(const std::string &name);
		Character(const Character &character);
		virtual ~Character();

		Character	&operator=(const Character &character);

		const std::string	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
		void				printInventory(void) const;
};

#endif
