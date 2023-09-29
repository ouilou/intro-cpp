#include <iostream>
#include <array>

using namespace std;

int main(){
    int taille;
    const int tailleMax = 10;
    cout << "Enter the number of elements: ";
    cin >> taille;

    using Table = array<float, tailleMax>;
    using Mirroir = array<float, tailleMax>;
    Table T;
    Mirroir R;

    for(int i = 0; i < taille; ++i){
        cout << "Enter " << i << " number: ";
        cin >> T[i];
    }

    for (int i = 0; i < taille; i++)
    {
        cout << "Enter " << i << " number: ";
        cin >> R[i];
    }

    int i = 0;
    bool mirroir;

    while(i < taille && not(mirroir)){
 
        if(R[i] == T[taille-i - 1])
            mirroir = true;
        i = i+1;
    cout << "Mirroir" << endl;
    }
    
    
    





}