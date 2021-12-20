/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 00:42:10 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/21 00:47:42 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void)
{
	ICharacter	*hero = new Character("Lucie");
	ICharacter	*enemy = new Character("Correcteur");
	Ice			ice1;
	Ice			ice2;
	Ice			ice3;
	Cure		cure1;
	Cure		cure2;

	hero->equip(&ice1);
	hero->equip(&ice2);
	hero->equip(&cure1);
	hero->equip(&ice3);

	hero->use(0, *enemy);
	hero->use(1, *enemy);
	hero->use(2, *enemy);
	hero->use(3, *enemy);

	hero->unequip(1);
	hero->use(1, *enemy);
	hero->equip(&cure2);
	hero->use(1, *enemy);
	return (0);
}
