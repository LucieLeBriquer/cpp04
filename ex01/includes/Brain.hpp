/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:28:26 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/20 22:31:37 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define END "\033[0m"
# include <iostream>
# include <ctime>
# include <cstdlib>

class Brain
{
	protected:
		std::string	_ideas[100];
		
	public:
		Brain(void);
		Brain(const Brain &brain);
		virtual ~Brain();

		Brain	&operator=(const Brain &brain);

		void	printFirstIdeas(void) const;
};

#endif
