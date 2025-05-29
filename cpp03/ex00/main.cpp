
#include "ClapTrap.hpp"

int main() {

    ClapTrap clap1("CL4P-TP");
    ClapTrap clap2(clap1);
    ClapTrap clap3;
    clap3 = clap1;

    clap1.attack("Target1");
    clap1.takeDamage(5);
    clap1.beRepaired(3);

    return 0;
}
