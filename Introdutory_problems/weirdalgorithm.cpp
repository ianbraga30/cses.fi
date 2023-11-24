#include <stdio.h>
#include <iostream>

int main()
{
    long long int entrada;
    std::cin >> entrada;
    while (true)
    {
        std::cout << entrada << std::endl;
        if (entrada == 1)
        {
            break;
        }
        if (entrada % 2 == 0)
        {
            entrada /= 2;
        }
        else
        {
            entrada = entrada * 3 + 1;
        }
    }
}
