#include <iostream>
#include <array>
using namespace std;

int main(){
    const int NMAX = 100;
    using TabEntiers = array<int, NMAX>;
    TabEntiers tab;

    int swap, nb;

    cout << "Enter the number of elements: ";
    cin >> nb;

    for (int i=0; i<nb; ++i){
        cout << "tab[" << i << "] = ";
        cin >> tab[i];
    }
    
    
    swap = tab[0];

    for (int i=0; i<nb-1; ++i){
        tab[i] = tab[i+1];
    }

    tab[nb-1] = swap;

    cout << "Table: ";

    for (int i=0; i<nb; ++i){
        cout <<" "<<tab[i];
    }



    return 0;
}