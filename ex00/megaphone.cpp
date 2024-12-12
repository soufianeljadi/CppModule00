
#include <iostream>

int	main(int ac, char **av)
{
	size_t		i;
	size_t		j;
	std::string str;

	i = 1;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (ac > 1 && av && av[i])
	{

		str = av[i];
		j = 0;
		while (j < str.length())
		{
			std::cout << (char)std::toupper(str[j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
} 