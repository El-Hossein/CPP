#ifndef PHONEBOOK
#define PHONEBOOK

#include "Contact.hpp"

class PhoneBook {
    private:
        Contact contact[8];
        int     index;
    public:
        void PrintContact(int i);
        int PrintAllContacts();
        void AddContact(std::string s[5]);
};

#endif
