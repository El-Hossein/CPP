#include "PhoneBook.hpp"

void PhoneBook::AddContact(std::string s[5])
{
    contact[index].set(0, s[0]);
    contact[index].set(1, s[1]);
    contact[index].set(2, s[2]);
    contact[index].set(3, s[3]);
    contact[index].set(4, s[4]);
    index = (index + 1) % 8;
}

void    FexStrings(std::string &FirstName, std::string &LastName, std::string &NickName)
{
    if(FirstName.length() > 10)
    {
        FirstName.erase(FirstName.begin()+9, FirstName.end());
        FirstName.append(".");
    }
    else
        FirstName.insert(0, std::string(10 - FirstName.length(), ' '));
    if(LastName.length() > 10)
    {
        LastName.erase(LastName.begin()+9, LastName.end());
        LastName.append(".");
    }
    else
        LastName.insert(0, std::string(10 - LastName.length(), ' '));
    if(NickName.length() > 10)
    {
        NickName.erase(NickName.begin()+9, NickName.end());
        NickName.append(".");
    }
    else
        NickName.insert(0, std::string(10 - NickName.length(), ' '));
}

int PhoneBook::PrintAllContacts()
{
    std::string test = contact[0].getFirstName();
    if (test[0] == '\0')
    {
        std::cout << "Contact is empty" << std::endl;
        return 1;
    }
    std::cout << "---------------------------------------------\n";
    std::cout << "|   index  |First Name|Last Name | NickName |\n";
    std::cout << "---------------------------------------------\n";
    for (int i = 0; i < 8; i++)
    {
        std::string FirstName = contact[i].getFirstName();
        std::string LastName = contact[i].getLastName();
        std::string NickName = contact[i].getNickname();
        if (FirstName[0] == '\0')
            break;
        FexStrings(FirstName, LastName, NickName);
        std::cout << "|     " << (i + 1) << "    |"
                   << FirstName << "|"
                   << LastName << "|"
                   << NickName << "|\n";
    }
    std::cout << "---------------------------------------------\n";
    return 0;
}


void PhoneBook::PrintContact(int is)
{
    std::string test = contact[is].getFirstName();
    if (test[0] == '\0')
        return;
    std:: cout  << "First Name: " << contact[is].getFirstName() << "\n"
                << "Last Name: " << contact[is].getLastName() << "\n"
                << "NickName: " << contact[is].getNickname() << "\n"
                << "Phone Number: " << contact[is].getPhoneNumber() << "\n"
                << "Darest Secret: " << contact[is].getDarkestSecret() << "\n";
}
