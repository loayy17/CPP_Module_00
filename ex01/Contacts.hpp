#ifndef CONTACTS_HPP
# define CONTACTS_HPP
# include <iostream>

enum	typeName
{
	FIRST_NAME,
	LAST_NAME,
	NICK_NAME
};

class Contact
{
  private:
	std::string fName;
	std::string lName;
	std::string nickName;
	size_t phoneNumber;
	std::string darkestSecret;

  public:
	Contact();
	void setContact();
	std::string getName(int index);
};
#endif
