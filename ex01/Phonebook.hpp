
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
