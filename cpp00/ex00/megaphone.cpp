#include <iostream>

int main(int argc, char **argv)
{
    int i = 1;
    char ch;
    while(i < argc)
    {
        int j = 0;
        while(argv[i][j])
        {
            ch = std::toupper(argv[i][j]);
            std::cout  << ch;
            j++;
        }
        i++;
    }
    if(argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << "\n";
    return 0;
}