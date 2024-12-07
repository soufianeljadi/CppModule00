/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:37:19 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/12/07 17:07:53 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	search_ui(Contact contacts[8])
{
	char		c;
	int			i;
	std::string	str;

	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	c = '0';
	i = 0;
	while (++c <= '8')
	{
		if (contacts[c - 1 - 48].get_first_name().size() && ++i)
		{
			str = c;
			str = wide(str);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = wide(contacts[c - 1  - 48].get_first_name());
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = wide(contacts[c - 1 - 48].get_last_name());
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = wide(contacts[c - 1 - 48].get_nickname());
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			std::cout << "|" << std::endl;
		}
	}
	std::cout << " ------------------------------------------- " << std::endl;
	return (i);
}
