#include <iostream>

int main(){
    float anglais, maths, info;
    float moyenne, cfAnglais, cfMaths, cfInfo;

    cfAnglais = 0.2;
    cfMaths = 0.5;
    cfInfo = 0.3;

    std::cout << "Entrez votre note en anglais: ";
    std::cin >> anglais;
    anglais = anglais * cfAnglais;

    std::cout << "Entrez votre note en math: ";
    std::cin >> maths;
    maths = maths * cfMaths;

    std::cout << "Entrez votre note en info: ";
    std::cin >> info;
    info = info * cfInfo;

    moyenne = anglais + maths + info;
    std::cout << "La moyenne obtenue est: " << moyenne << std::endl;
    return 0;

}
