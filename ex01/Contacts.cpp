#include "Contacts.hpp"
#include "utility.hpp"
#include <iostream>
#include <limits>

Contact::Contact()
{
	fName = "";
	lName = "";
	nickName = "";
	phoneNumber = 0;
	darkestSecret = "";
}

void Contact::setContact()
{
	// first name
	isValidInput("Enter First Name: ", fName);
	// last name
	isValidInput("Enter Last Name: ", lName);
	// nick name
	isValidInput("Enter Nick Name: ", nickName);
	// phone number
	isValidPhoneNumber("Enter Phone Number: ", phoneNumber);
	// darkest secret
	isValidInput("Enter Darkest Secret: ", darkestSecret);
	std::cin.clear();
	std::cout << "Contact added successfully." << std::endl;
}

std::string Contact::getName(int index)
{
	switch (index)
	{
	case FIRST_NAME:
		return (fName);
	case LAST_NAME:
		return (lName);
	case NICK_NAME:
		return (nickName);
	default:
		return ("");
	}
}