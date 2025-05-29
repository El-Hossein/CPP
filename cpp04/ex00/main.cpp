#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound(); // Outputs: "Meow!"
    dog->makeSound(); // Outputs: "Woof! Woof!"
    meta->makeSound(); // Outputs: "Animal makes a generic sound."

    delete meta;
    delete dog;
    delete cat;

    std::cout << "\nTesting WrongAnimal and WrongCat classes:\n";

    // Test lack of polymorphism with WrongAnimal and WrongCat
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound(); // Outputs: "WrongAnimal makes a generic sound."
    wrongMeta->makeSound(); // Outputs: "WrongAnimal makes a generic sound."

    delete wrongMeta;
    delete wrongCat;

    return 0;
}