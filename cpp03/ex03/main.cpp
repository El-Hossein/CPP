#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamond1;
    diamond1.attack("Bandit");
    diamond1.takeDamage(10);
    diamond1.beRepaired(5);
    diamond1.whoAmI();

    std::cout << "-------------------------------" << std::endl;

    DiamondTrap diamond2("DiamondMaster");
    diamond2.attack("Bandit");
    diamond2.takeDamage(20);
    diamond2.beRepaired(10);
    diamond2.whoAmI();

    std::cout << "-------------------------------" << std::endl;

    DiamondTrap diamondCopy(diamond2);
    DiamondTrap diamondAssigned;
    diamondAssigned = diamond1;

    return 0;
}
