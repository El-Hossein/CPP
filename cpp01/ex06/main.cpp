#include "Harl.hpp"

int main(int ac, char **av) {
    Harl harl;
    if(ac != 2)
    {
        std::cerr << "./harlFilter 'level'(DEBUG, INFO, WARNING, ERROR), only 2 args" << std::endl;
        return (1);
    }
    std::string av1 = av[1];
    harl.complain(av1);

    return 0;
}
