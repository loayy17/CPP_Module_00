#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <limits>

PhoneBook::PhoneBook() : contacts(), totalCount(0), currentIndex(0)
{
}
void PhoneBook::addContact(const Contact &contact)
{
	contacts[currentIndex] = contact;
	currentIndex = (currentIndex + 1) % 8;
	if (totalCount < 8)
		totalCount++;
}
void PhoneBook::searchContact()
{
	int	i;
	int	index;

	i = -1;
	if (totalCount == 0)
	{
		std::cout << "No contacts available." << std::endl;
		return ;
	}
	std::cout << "|" << std::setw(10) << "Index"
				<< "|" << std::setw(10) << "First Name"
				<< "|" << std::setw(10) << "Last Name"
				<< "|" << std::setw(10) << "Nickname"
				<< "|" << std::endl;
	while (++i < totalCount)
	{
		std::cout << "|" << std::setw(10) << i << "|" << std::setw(10) << truncateString(contacts[i].getFirstName()) << "|" << std::setw(10) << truncateString(contacts[i].getLastName()) << "|" << std::setw(10) << truncateString(contacts[i].getNickName()) << "|" << std::endl;
	}
	while (true)
	{
		std::cout << "Enter index to display: ";
		if (!(std::cin >> index) || index < 0 || index >= totalCount)
		{
			std::cout << "Invalid index." << std::endl;
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			continue ;
		}
		break ;
	}
	std::cin.ignore();
	std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
	std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}
std::string PhoneBook::truncateString(const std::string &str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}