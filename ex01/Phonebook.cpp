
#include "Phonebook.hpp"
#include "Utils.hpp"

Phonebook::Phonebook(void)
{
	this->_index = 0;
	std::cout << "Hello there, a phonebook with ability to store 8 contacts was created" << std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Take care "<< std::endl << "kindely remainder : all the contacts are gone :)" << std::endl;
}

Contact	Phonebook::get_contact(int index)
{
	return (this->_contacts[index % 8]);
}

void Phonebook::add(void) 
{
    std::string str;

    if (_index > 7) {
        std::cout << "Warning: you will lose " << _contacts[_index % 8].get_first_name() << std::endl;
    }

    std::cout << "Enter the first name: ";
    while (1) {
        if (std::getline(std::cin, str) && is_valid_input(str, 0)) {
            _contacts[_index % 8].set_first_name(str);
            break;
        } else {
            std::cout << "Invalid input, Please enter a valid first name: ";
        }
    }

    std::cout << "Enter " << _contacts[_index % 8].get_first_name() << "'s last name: ";
    while (1) {
        if (std::getline(std::cin, str) && is_valid_input(str, 0)) {
            _contacts[_index % 8].set_last_name(str);
            break;
        } else {
            std::cout << "Invalid input, Please enter a valid last name: ";
        }
    }

    std::cout << "Enter " << _contacts[_index % 8].get_first_name() << "'s nickname: ";
    while (1) {
        if (std::getline(std::cin, str) && is_valid_input(str, 0)) {
            _contacts[_index % 8].set_nickname(str);
            break;
        } else {
            std::cout << "Invalid input, Please enter a valid nickname: ";
        }
    }

    std::cout << "Enter " << _contacts[_index % 8].get_first_name() << "'s phone number: ";
    while (1) {
        if (std::getline(std::cin, str) && is_valid_input(str, 1)) {
            _contacts[_index % 8].set_phone_number(str);
            break;
        } else {
            std::cout << "Invalid input, Please enter a valid phone number: ";
        }
    }

    std::cout << "Enter " << _contacts[_index % 8].get_first_name() << "'s darkest secret: ";
    while (1) {
        if (std::getline(std::cin, str) && is_valid_input(str, 0)) {
            _contacts[_index % 8].set_darkest_secret(str);
            break;
        } else {
            std::cout << "Invalid input, Please enter a valid darkest secret: ";
        }
    }

    std::cout << _contacts[_index % 8].get_first_name() << " successfully added to your phonebook" << std::endl;

    _index++;
}

void	Phonebook::infos(Contact contact)
{
	std::cout << std::endl << "Contact infos :" << std::endl;
	std::cout << std::endl << "First Name: " << contact.get_first_name() << std::endl;
	std::cout << "Last Name: " << contact.get_last_name() << std::endl;
	std::cout << "Nickname: " << contact.get_nickname() << std::endl;
	std::cout << "Phone Number: " << contact.get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << contact.get_darkest_secret() << std::endl<< std::endl;
}

void	Phonebook::search(void)
{
	int		c;
	int			i;
	std::string	str;

	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
				   
	c = 0;
	i = 0;
	while (++c <= 8)
	{
		if (this->_contacts[c - 1 ].get_first_name().size() && ++i)
		{
			str = c + 48;
			str = wide(str);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = wide(this->_contacts[c - 1  ].get_first_name());
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = wide(this->_contacts[c - 1 ].get_last_name());
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = wide(this->_contacts[c - 1 ].get_nickname());
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			std::cout << "|" << std::endl;
		}
	}
	std::cout << " ------------------------------------------- " << std::endl;
	if (_index == 0)
	{
		std::cout << std::endl << "Phonebook is empty!" << std::endl;
		return ;
	}
	while (!std::cin.eof())
	{
		std::cout << "Choose an index for more infos: ";
		if (std::getline(std::cin, str) && str != "")
		{
			if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' && this->_contacts[str[0] - 1 - '0'].get_first_name().size())
				break ;
		}
		if (str != "")
			std::cout << "Invalid index!" << std::endl;
	}
	if (!std::cin.eof())
		this->infos(this->_contacts[str[0] - 1 - '0']);
}