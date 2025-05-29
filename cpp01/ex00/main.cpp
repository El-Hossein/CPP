#include "Zombie.hpp"

int main() {
    Zombie *heap = newZombie("heap");
    heap->announce();

    delete heap;

    randomChump("stack");
    return 0;
}