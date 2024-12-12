
#include "Utils.hpp"

std::string	add_spaces(int n)
{
	std::string	str;

	while (n--)
		str.append(" ");
	return (str);
}

std::string	wide(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(10);
		str[str.size() - 1] = '.';
	}
	return (str);
}
int is_valid_input(const std::string& str)
{
    size_t i = 0;

    while (i < str.size() && std::isprint(str[i]))
	{
        i++;
    }
    if (i == str.size() && !str.empty())
        return 1;
	else 
		return 0;
}