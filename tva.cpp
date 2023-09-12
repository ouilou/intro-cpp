#include <iostream>

int main(){
    float prixTTC, prixHT, tauxTVA;

    std::cout << "Quel est le prix TTC? ";
    std::cin >> prixTTC ;
    std::cout << "Quel taux TVA s'applique en %? ";
    std::cin >> tauxTVA;
    tauxTVA = tauxTVA / 100;
    prixHT = prixTTC / (1 + tauxTVA);
    std::cout << "Le prix HT est de "; prixHT;
    std::cout << "Le montant de TVA est de " << prixHT * tauxTVA << std::endl;
    return 0 ;

}

