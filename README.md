# Introduction to C++

## Tableaux

Un tableau est une structure de données regroupant un ensemnle de variables de même type.

```c++
#include <array>
std::array <type, taille, variable>
```

Example:

```c++
#include <array>
std::array <int, 8> tab // declaring "tab" of 8 intergers;
```
Les instructions de lecture et d'écriture ne s'appliquent pas au tableau tout entier, mais à ses éléments:

```c++
#include <iostream>
#include <array>
using namespace std;

int main(){
    const int Nmax = 100; //limite de taille du tableau
    array <int,Nmax> T;

    int n;

    cout << "Combien de valeurs (< " << Nmax << ") ?" << endl;
    
}
```

Declaring a domaine of definition for a tableaux:

```c++
const int taille = 1000;
using tab_reels = std::array <float, taille>;
tab_reels T;
```

By using ```using```, we declare the alias that will be using the variable.

