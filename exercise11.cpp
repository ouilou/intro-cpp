#include <iostream>

int main(){
    int a,b,c,d;

    std::cout << "Saisir une année: "; std::cin >> a;

    b = a % 4;
    c = a % 100;
    d = a % 400;


    if(b == 0 and c>0){
        std::cout << a << " est bissextile" <<std::endl;
    }
    else{
        if (d == 0)
        {
            std::cout << a << " est bissextile" <<std::endl;
        }
        
    std::cout << a << " est pas bissextile" <<std::endl;
    }

}