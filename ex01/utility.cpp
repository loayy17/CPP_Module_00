#include "utility.hpp"
#include <iostream>

bool	validateCin(std::string &input)
{
	if (!std::getline(std::cin, input))
	{
		if (std::cin.eof())
		{
			std::cin.clear();
			std::cout << "Input ended unexpectedly (EOF)" << std::endl;
			return (false);
		}
		std::cin.clear();
		std::cout << "Invalid input Please try again." << std::endl;
		return (false);
	}
	return (true);
}

void	isValidInput(const std::string &prompt, std::string &param)
{
	while (true)
	{
		std::cout << prompt;
		if (!std::getline(std::cin, param))
		{
			if (std::cin.eof() || std::cin.fail())
			{
				std::cin.clear();
				std::cout << "Input ended unexpectedly (EOF)" << std::cin.eof() << std::endl;
				std::cout << param << std::endl;
				break ;
			}
			std::cin.clear();
			std::cout << "Invalid input Please try again.\n";
			continue ;
		}
		if (!param.empty())
			break ;
		std::cout << "Input cannot be empty. Please try again.\n";
	}
}

void	isValidPhoneNumber(const std::string &prompt, size_t &param)
{
	size_t	i;

	while (true)
	{
		std::cout << prompt;
		std::string input;
		if (!std::getline(std::cin, input))
		{
			if (std::cin.eof() || std::cin.fail())
			{
				std::cin.clear();
				std::cout << "Input ended unexpectedly (EOF)" << std::cin.eof() << std::endl;
				break ;
			}
			std::cin.clear();
			std::cout << "Invalid input Please try again.\n";
			continue ;
		}
		if (input.empty()
			|| input.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cout << "Phone number must contain only digits and cannot be empty. Please try again.\n";
			continue ;
		}
		param = 0;
		i = -1;
		while (++i < input.length())
			param = param * 10 + (input[i] - '0');
		break ;
	}
}