#include "Zombie.hpp"

void f(void){system("leaks a");}
int main()
{
    int N  = 5;
    atexit(f);
    std::string name = "ZombieHorde";
    Zombie *hord = zombieHorde(N, name);
    if (!hord) {
        return 1;
    }
    
    for (int i = 0; i < N; ++i) {
        hord[i].announce();
    }

    delete[] hord;

    return 0;
}