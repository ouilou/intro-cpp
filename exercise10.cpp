#include <iostream>

int main(){
    int a,b,c,hold;

    std::cout << "Entrer a number a: "; std::cin >> a;
    std::cout << "Entrer a number b: "; std::cin >> b;
    std::cout << "Entrer a number c: "; std::cin >> c;

    if(a >= b)
    {
        hold = a;
        a = b;
        b = hold;
    }

    if(b >= c)
    {
        hold = b;
        b = c;
        c = hold;     
    }

    if(a >= c)
    {
        hold = a;
        a = c;
        c = hold;
    }

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;


}