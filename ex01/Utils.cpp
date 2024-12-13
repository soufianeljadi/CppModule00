
#include "Utils.hpp"

int allSpcs(const std::string &s)
{
	size_t i = 0;
	size_t size = s.size();

	while (i < size && isspace(s[i]))
		i++;
	if (i == size)
        return 1;
	else 
		return 0;
}

int is_valid_input(const std::string& str)
{
    size_t i = 0;

	if (allSpcs(str))
		return (0);
    while (i < str.size() && std::isprint(str[i]))
	{
        i++;
    }
    if (i == str.size() && !str.empty())
        return 1;
	else 
		return 0;
}
std::string add_spaces(int n)
{
    std::string str = "";
    int i = 0;

    while (i < n) 
	{
        str = str + " ";
        i++;
    }
    return str;
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
