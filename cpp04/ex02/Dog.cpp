#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain()) {
    std::cout << "Dog constructor called." << std::endl;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain)) {
    std::cout << "Dog copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "Dog assignment operator called." << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}
