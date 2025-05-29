#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

    FragTrap frag("FR4G-TP");
    frag.attack("Bandit");
    frag.takeDamage(25);
    frag.beRepaired(10);
    frag.highFivesGuys();

    std::cout << "-------------------------------" << std::endl;

    FragTrap fragCopy(frag);
    FragTrap fragAssigned;
    fragAssigned = frag;   

    return 0;
}
