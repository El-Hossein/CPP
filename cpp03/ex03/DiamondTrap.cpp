#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap() {
    this->name = "default_diamond";
    ClapTrap::name = this->name + "_clap_name";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 30;
    std::cout << "DiamondTrap " << name << " has been constructed (default)!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name) {
    this->name = name;
    ClapTrap::name = this->name + "_clap_name";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 30;
    std::cout << "DiamondTrap " << this->name << " has entered the arena!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : FragTrap(other), ScavTrap(other) {
    this->name = other.name;
    ClapTrap::name = other.ClapTrap::name;
    std::cout << "DiamondTrap " << name << " has been copied!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " has been destroyed!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    if (this != &other) {
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
        this->name = other.name;
        ClapTrap::name = other.ClapTrap::name;
    }
    std::cout << "DiamondTrap " << name << " has been assigned!" << std::endl;
    return *this;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap's name is " << name << " and its ClapTrap name is " << ClapTrap::name << std::endl;
}
