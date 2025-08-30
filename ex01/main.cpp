#include "Contacts.hpp"
#include "PhoneBook.hpp"
#include "utility.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook phoneBook;
	std::string command;
	while (true)
	{
		std::cout << "Choose Operation: ADD | SEARCH | EXIT" << std::endl;
		if (!validateCin(command))
			continue ;
		if (command == "ADD")
		{
			std::cout << "Fill required fields." << std::endl;
			Contact newContact;
			newContact.setContact();
			phoneBook.addContact(newContact);
		}
		else if (command == "SEARCH")
		{
			std::cout << "Enter name to search (first name | last name | nickname): ";
			std::string searchName;
			if (!validateCin(searchName))
				continue ;
			phoneBook.searchContact(searchName);
		}
		else if (command == "EXIT")
		{
			std::cout << "Exiting the program." << std::endl;
			break ;
		}
        else if(command == "displayAll")
        {
            phoneBook.displayAll();
        }
		else
			std::cout << "Invalid command." << std::endl;
	}
	return (0);
}