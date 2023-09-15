#include <iostream>

int main(){
    int a, origin;

    std::cout << "Enter a number: ";
    std::cin >> a;

    origin = a;

    if (a % 2 == 0) 

    if (a <= 0) a = -a;
    std::cout << "Valeur absolue de " << origin << " est " << a << std::endl;

    return 0;
}