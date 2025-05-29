#include "Weapon.hpp"

const std::string & Weapon::getType() const {
    return type;
}

void Weapon::setType(std::string t) {
    type = t;
}

Weapon::Weapon(std::string t) {
    type = t;
}

Weapon::Weapon(){}
Weapon::~Weapon(){}