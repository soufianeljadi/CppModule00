/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:54:46 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/11/29 16:24:31 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP


#include "Contact.hpp"
#include "Utils.hpp"

class	Phonebook
{
	private:
		Contact	_contacts[8];
		int		_index;
	public:
		Phonebook();
		~Phonebook();
		void	add();
		void	search();
		void	print(Contact contact);
		Contact	get_contact(int index);
};

#endif
