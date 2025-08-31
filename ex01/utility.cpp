#include "utility.hpp"
#include <iostream>

bool	getValidInput(const std::string &prompt, std::string &param,
		bool isPhoneNumber)
{
	while (true)
	{
		std::cout << prompt;
		if (!std::getline(std::cin, param))
		{
			if (std::cin.eof())
			{
				std::cout << "Input ended unexpectedly (EOF)" << std::endl;
				return (false);
			}
			std::cin.clear();
			std::cout << "Invalid input. Please try again.\n";
			continue ;
		}
		if (isPhoneNumber)
		{
			if (!param.empty()
				&& param.find_first_not_of("0123456789") == std::string::npos)
				break ;
			std::cout << "Invalid phone number. Please try again.\n";
			continue ;
		}
		if (!param.empty())
			break ;
		std::cout << "Input cannot be empty. Please try again.\n";
	}
	return (true);
}
