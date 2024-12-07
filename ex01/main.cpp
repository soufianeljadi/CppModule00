
#include "Phonebook.hpp"

int	main()
{
	std::string	str;
	Phonebook 	ph1;

	while (str != "EXIT")
	{
		std::cout << "Enter a command > ";
		std::getline(std::cin, str);
		if (str == "ADD")
			ph1.add();
		else if (str == "SEARCH")
			ph1.search();
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}
