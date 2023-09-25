#include <iostream>
#include <array>
using namespace std;

int main(){
    const int taille = 1000;
    using Table = array<float, taille>;
    Table T;

    int counter;

    int breakCondition = -1;
    float unknown;

    while(unknown != breakCondition){
        cout << "Enter a number: ";
        cin >> unknown;
        T[unknown];
        ++counter;
    }

    for (int i =0; i < counter; ++i){
        cout << T[i];
    }

    return 0;
}