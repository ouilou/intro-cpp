#include <iostream>

int main(){
    int a,b,c;

    std::cout << "Enter a number a: ";
    std::cin >> a;

    std::cout << "Enter a number b: ";
    std::cin >> b;

    c = a;
    a = b;
    b = c;

    std::cout << "a est: " << a << std::endl;
    std::cout << "b est: " << b << std::endl;

}