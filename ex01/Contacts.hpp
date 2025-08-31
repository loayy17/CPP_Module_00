#ifndef CONTACTS_HPP
# define CONTACTS_HPP
# include <iostream>

class Contact
{
  private:
	std::string fName;
	std::string lName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

  public:
	Contact();
	void setContact();
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhoneNumber();
	std::string getDarkestSecret();
};
#endif
