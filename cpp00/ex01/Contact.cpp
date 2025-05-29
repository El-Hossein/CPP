#include "Contact.hpp"

void Contact::set(int list, const std::string &value) {
    if (list == 0) 
        first_name = value;
    else if (list == 1)
        last_name = value;
    else if (list == 2)
        nickname = value;
    else if (list == 3)
        phone_number = value;
    else if (list == 4)
        darkest_secret = value;
}

std::string Contact::getFirstName()
{
    return first_name;
}
std::string Contact::getLastName()
{
    return last_name;
}
std::string Contact::getNickname()
{
    return nickname;
}
std::string Contact::getPhoneNumber()
{
    return phone_number;
}
std::string Contact::getDarkestSecret()
{
    return darkest_secret;
}