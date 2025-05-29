#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout << "ClapTrap " << name << " has been constructed (default)!" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
    this->name = name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "ClapTrap " << name << " has entered the arena!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
    std::cout << "ClapTrap " << name << " has been copied!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other){
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap " << name << " has been assigned!" << std::endl;
    return *this;
}


ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    if (hitPoints > 0 && energyPoints > 0){
        energyPoints--;
        std::cout << "ClapTrap " << name << " attacks " << target 
                    << ", causing " << attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " cannot attack because it is out of hit points or energy!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    if (hitPoints > 0){
        if (amount >= hitPoints)
            hitPoints = 0;
        else
            hitPoints = hitPoints - amount;
        std::cout << "ClapTrap " << name << " took " << amount 
                    << " points of damage! Current hit points: " << hitPoints << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (energyPoints > 0){
        energyPoints--;
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " repairs itself for " << amount 
                    << " points! Current hit points: " << hitPoints << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " cannot repair itself because it has no energy!" << std::endl;
    }
}

