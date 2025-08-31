#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contacts.hpp"
# include <iostream>

class PhoneBook
{
    private:
        Contact contacts[8];
        int totalCount;
        int currentIndex;

    public:
        PhoneBook();
        void addContact(const Contact &contact);
        void searchContact();
        std::string truncateString(const std::string &str) const;
};
#endif