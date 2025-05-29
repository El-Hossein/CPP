#include "Animal.hpp"

Animal::Animal() : type("Unknown") {
    std::cout << "Animal constructor called." << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal(std::string type) : type(type) {
    std::cout << "Animal constructor with type called." << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal copy constructor called." << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    std::cout << "Animal assignment operator called." << std::endl;
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

std::string Animal::getType() const {
    return type;
}