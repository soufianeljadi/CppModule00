/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:37:07 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/11/29 15:40:38 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP

# define UTILS_HPP

# include <iostream>
# include "Contact.hpp"

/* Returns a string with n spaces */
std::string	add_spaces(int n);

/* Ensures a string has at most 'max' chars, adding '.' when needed */
std::string	fix_width(std::string str, long unsigned max);

/* Prints existing contacts with a pretty format */
int			search_ui(Contact contacts[8]);

#endif
