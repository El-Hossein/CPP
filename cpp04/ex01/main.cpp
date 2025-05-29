#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void f ()
{
    system("leaks BrainTest");
}

int main() {
    atexit(f);

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    j->makeSound();
    i->makeSound();
    delete j;
    delete i;

    int size = 10;
    Animal* animals[size];
    for (int i = 0; i < size / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = size / 2; i < size; ++i) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < size; ++i) {
        animals[i]->makeSound();
    }

    for (int i = 0; i < size; ++i) {
        delete animals[i];
    }

    // deep copy
    Dog original;
    Dog copy = original;
    copy.makeSound();
    return 0;
}