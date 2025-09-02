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
		if (!getValidInput("Choose Operation[ADD | SEARCH | EXIT]: ", command,
				false))
			break;
		if (command == "ADD")
		{
			std::cout << "Fill required fields." << std::endl;
			Contact newContact;
			newContact.setContact();
			phoneBook.addContact(newContact);
		}
		else if (command == "SEARCH")
		{
			phoneBook.searchContact();
		}
		else if (command == "EXIT")
		{
			std::cout << "Exiting the program." << std::endl;
			break ;
		}
		else
			std::cout << "Invalid command." << std::endl;
	}
	return (0);
}