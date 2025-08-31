#include "Contacts.hpp"
#include "utility.hpp"
#include <iostream>
#include <limits>

Contact::Contact()
{
	fName = "";
	lName = "";
	nickName = "";
	phoneNumber = "";
	darkestSecret = "";
}

void Contact::setContact()
{
	// first name
	if (!getValidInput("Enter First Name: ", fName, false))
		return ;
	// last name
	if (!getValidInput("Enter Last Name: ", lName, false))
		return ;
	// nick name
	if (!getValidInput("Enter Nick Name: ", nickName, false))
		return ;
	// phone number
	if (!getValidInput("Enter Phone Number: ", phoneNumber, true))
		return ;
	// darkest secret
	if (!getValidInput("Enter Darkest Secret: ", darkestSecret, false))
		return ;
	std::cout << "Contact added successfully." << std::endl;
}

std::string Contact::getFirstName()
{
	return (fName);
}

std::string Contact::getLastName()
{
	return (lName);
}

std::string Contact::getNickName()
{
	return (nickName);
}

std::string Contact::getPhoneNumber()
{
	return (phoneNumber);
}

std::string Contact::getDarkestSecret()
{
	return (darkestSecret);
}