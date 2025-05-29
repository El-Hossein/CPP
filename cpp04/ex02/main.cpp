#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound(); // Outputs: "Meow!"
    dog->makeSound(); // Outputs: "Woof! Woof!"

    delete dog;
    delete cat;

    return 0;
}