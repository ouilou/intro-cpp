#include <iostream>
//#include <string>
using namespace std;

int main(){
    int a,b,reste;
    
    string d = "Enter a number ";

    cout << d << "d: " ; std::cin >> a;
    std::cout << "Enter a number b: "; std::cin >> b;

    reste = a % b;

    while ( reste != 0)
    {
        a = b;
        b = reste;
        reste = a % b;
    }
    
    std::cout << "Le reste euclidienne est: " << b << std::endl;

    return 0;

}