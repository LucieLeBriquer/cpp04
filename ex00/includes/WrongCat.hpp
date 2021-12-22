/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:06:20 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/20 22:08:46 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	protected:
		
	public:
		WrongCat(void);
		WrongCat(const WrongCat &wrongCat);
		~WrongCat();

		WrongCat	&operator=(const WrongCat &wrongCat);

		void	makeSound(void) const;
};

#endif
