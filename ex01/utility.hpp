#ifndef UTILITY_HPP
# define UTILITY_HPP

# include <iostream>
# include <string>

bool	validateCin(std::string &input);
void	isValidInput(const std::string &prompt, std::string &param);
void	isValidPhoneNumber(const std::string &prompt, size_t &param);

#endif // UTILITY_HPP