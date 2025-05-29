#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    type = "WrongCat";
    std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout << "WrongCat copy constructor called." << std::endl;
    type = other.type;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    std::cout << "WrongCat assignment operator called." << std::endl;
    if (this != &other) {
        WrongAnimal::operator=(other);
    }
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat makes a generic sound." << std::endl;
}
