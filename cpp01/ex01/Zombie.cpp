#include "Zombie.hpp"

Zombie::Zombie() : name("Unnamed Zombie") {
    std::cout << "Default Zombie constructed." << std::endl;
}

Zombie::Zombie(std::string name) : name(name) {
    std::cout << "Zombie constructed: " << name << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie destroyed: " << name << std::endl;
}

void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(std::string name) {
    this->name = name;
}