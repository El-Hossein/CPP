#include "PhoneBook.hpp"

int CheckIsAlpha(std::string str)
{
    int i = 0;
    if (str[0] == '\0')
        return(1);
    while(str[i])
    {
        if(!(isalpha(str[i]) || isdigit(str[i]) || str[i] == ' '))
            return (1);
        i++;
    }
    return (0);
}
int CheckIsDigit(std::string str)
{
    int i = 0;
    if (str[0] == '\0')
        return(1);
    while(str[i])
    {
        if(!(isdigit(str[i])))
            return (1);
        i++;
    }
    return (0);
}

int    check_string(std::string str, int *i){
    if (*i == 0 && CheckIsAlpha(str) == 1)
        return (std::cout << "please enter a real first name\n", 1);
    else if (*i == 1 && CheckIsAlpha(str) == 1)
        return (std::cout << "please enter a real last name\n", 1);
    else if (*i == 2 && str[0] == '\0')
        return (std::cout << "please enter a real Nick name\n", 1);
    else if (*i == 3 && CheckIsDigit(str) == 1)
        return (std::cout << "please enter a real phone number\n", 1);
    else if (*i == 4 && str[0] == '\0')
        return (std::cout << "please enter a real Secret \n", 1);
    *i += 1;
    return 0;
}

void    SearchContact(PhoneBook &phoneBook){
    std::string str;
    if (phoneBook.PrintAllContacts() == 1)
        return  ;
    
    while(1)
    {
        std::cout << "Enter index in the contact: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            return ;
        if (CheckIsDigit(str) == 0 || str.length() == 1)
        {
            int index = std::atoi(str.c_str());
            if (index >= 1 && index <= 8)
                return (phoneBook.PrintContact(index - 1));
            else
                std::cout << "Please enter a number between 1 and 8." << std::endl;
        }
        else
            std::cout << "Invalid input. Please enter a valid number." << std::endl;
    }
}

void    AddOneContact(PhoneBook &phoneBook)
{
    std::string str;
    std::string s[5];
    int i = 0;
    while(1)
    {
        if(i == 0)
            std::cout << "Enter your First Name: ";
        else if(i == 1)
            std::cout << "Enter your Last Name: ";
        else if(i == 2)
            std::cout << "Enter your Nick Name: ";
        else if(i == 3)
            std::cout << "Enter your Phone Number: ";
        else if(i == 4)
            std::cout << "Enter your Secret: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            return ;
        if(check_string(str, &i) == 0)
            s[i - 1] = str;
        if(i == 5)
        {
            phoneBook.AddContact(s);
            break;
        }
    }
}

int main()
{
    std::string str;
    PhoneBook PhoneBook;
    while(1)
    {
        std::cout << ">> ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            return 0;
        if(str == "ADD")
            AddOneContact(PhoneBook);
        else if(str == "SEARCH")
            SearchContact(PhoneBook);
        else if(str == "EXIT")
            return (std::cout << "Good Bye!\n",0);
        else
            std::cout << "The program only accepts ADD, SEARCH and EXIT" << std::endl;
    }
}
