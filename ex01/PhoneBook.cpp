#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>

PhoneBook::PhoneBook() : contacts(), totalCount(0), currentIndex(0)
{
}
void PhoneBook::addContact(const Contact &contact)
{
	contacts[currentIndex] = contact;
	currentIndex = (currentIndex + 1) % 8;
	totalCount++;
}
void PhoneBook::searchContact(std::string &name)
{
	int	i;

	i = 0;
	int counter = 0;
	if (!totalCount)
		std::cout << "No contacts available." << std::endl;
	while (i < totalCount)
	{
		if (contacts[i].getName(FIRST_NAME) == name
			|| contacts[i].getName(LAST_NAME) == name
			|| contacts[i].getName(NICK_NAME) == name)
		{
			counter++;
			std::cout << "| " << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
			std::cout << "| " << std::setw(10) << contacts[i].getName(FIRST_NAME) << "|" << std::setw(10) << contacts[i].getName(LAST_NAME) << "|" << std::setw(10) << contacts[i].getName(NICK_NAME) << "|" << std::endl;
		}
		i++;
	}
	if (!counter)
		std::cout << "No contact found for Search " << name << std::endl;
}

void PhoneBook::displayAll()
{
	if (totalCount == 0)
	{
		std::cout << "No contacts available." << std::endl;
		return ;
	}
	std::cout << "| " << std::setw(10) << "First Name"
				<< "|" << std::setw(10) << "Last Name"
				<< "|" << std::setw(10) << "Nickname"
				<< "|" << std::endl;
	for (int i = 0; i < totalCount && i < 8; i++)
	{
		std::cout << "| " << std::setw(10) << contacts[i].getName(FIRST_NAME) << "|" << std::setw(10) << contacts[i].getName(LAST_NAME) << "|" << std::setw(10) << contacts[i].getName(NICK_NAME) << "|" << std::endl;
	}
}