
#ifndef UTILS_HPP

# define UTILS_HPP

# include <iostream>
# include "Contact.hpp"

/* Returns a string with n spaces */
std::string	add_spaces(int n);

/* Ensures a string has at most 'max' chars, adding '.' when needed */
std::string	wide(std::string str);

/* Prints existing contacts with a pretty format */
int			search_display(Contact contacts[8]);

#endif
