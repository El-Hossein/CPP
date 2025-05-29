#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap clap("CL4P-TP");
    clap.attack("Bandit");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "-------------------------------" << std::endl;

    ScavTrap scav("SC4V-TP");
    scav.attack("Bandit");
    scav.takeDamage(20);
    scav.beRepaired(15);
    scav.guardGate();

    std::cout << "-------------------------------" << std::endl;

    ScavTrap scavCopy(scav);
    ScavTrap scavAssigned;
    scavAssigned = scav;

    return 0;
}
