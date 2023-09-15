#include <iostream>
#include <cmath>

int main(){
    int a,b,c;
    float delta;

    std::cout << "Enter a valeur for a: "; std::cin >> a;
    std::cout << "Enter a valeur for b: "; std::cin >> b;
    std::cout << "Enter a valeur for c: "; std::cin >> c;

    delta = b*b - 4*a*c;

    if (delta < 0){
        std::cout << "Fonction n'a pas de racine" << std::endl;
    }
    else{
        if (delta == 0)
            std::cout << "Il existe qu'une racine: " << -b/(2*a) << std::endl;
        else{
            std::cout << "Deux racine: " << std::endl;
            std::cout << "Racine 1: " << (-b-sqrt(delta))/(2*a) << std::endl;
            std::cout << "Racine 2: " << (-b+sqrt(delta))/(2*a) << std::endl;
        }
    }
    return 0;
}