#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    long long int n;
    std::cin >> n;
    long long int j;
    j = n;
    long long int num;
    long long int sum = 0;
    long long int resultado = (n + 1) * (n / 2);
    cout << resultado << endl;
    while (j > 1)
    {
        std::cin >> num;
        sum += num;
        j--;
    }
    std::cout << resultado - sum << std::endl;
}
