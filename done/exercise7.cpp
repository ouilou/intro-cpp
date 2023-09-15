#include <iostream>

int main(){
    float note;

    std::cout << "Enter a note: ";
    std::cin >> note;

    if (note >= 0 and note <= 20)
        std::cout << "Note correcte" << std::endl;
    else
        std::cout << "Note incorrecte" <<std::endl;

    return 0;

    
}