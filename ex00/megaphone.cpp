/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:37:45 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/11/20 16:40:43 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int		i;
	int		j;

	j = -1;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (ac > 1 && av && av[++j])
	{
		i = -1;
		while (j > 0 && av[j][++i])
			std::cout << (char)std::toupper(av[j][i]);
	}
	std::cout << std::endl;
	return (0);
}