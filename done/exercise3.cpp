#include <iostream>
#include <cmath>

int main(){
    float x, function;

    std::cout << "Entrez un x: ";
    std::cin >> x;
    function = (pow(x,2)-3*x+0.5*(x-3));

    std::cout << "Valeur de la function est: " << function << std::endl;  
    return 0;

}