#include <iostream>

int main(){

    float x, xR, y, z, image;

    std::cout << "Entrez un x: ";
    std::cin >> x;

    if (x > 0)
        xR = -x;
    else 
        xR = x;

    if (xR == 3)
        std::cout << "Impossible, division par 0";
    
    y = xR + 3*x*x;
    z = 2/3 * x*x -6;
    image = y/z;
    
    std::cout << "L'image est: " << image << std::endl;

    return 0;


    


    
}