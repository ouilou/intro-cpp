#include <iostream>

int main(){
    float x, y, produit;

    std::cout << "Entrez un entier? ";
    std::cin >> x ;
    std::cout << "Entrez un autre entier? ";
    std::cin >> y;
    produit = x * y;
    std::cout << "Le produit de " << x << " par " << y << " est " << produit << std::endl;
    return 0 ;

}

