# Introduction to C++

## Table of Contents

- [Introduction to C++](#introduction-to-c)
  - [Table of Contents](#table-of-contents)
    - [Array and operation](#array-and-operation)
    - [String is also a type of table](#string-is-also-a-type-of-table)

### Array and operation

Un tableau est une structure de données regroupant un ensemnle de variables de même type.

```c++
#include <array> //using package array

std::array <type, taille, variable> //declaring the array by type, size and variable.
```

Example:

```c++
#include <array>

std::array <int, 8> tab //declaring "tab" of 8 intergers;
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

### String is also a type of table

String is a type of table that consists of a suite of characters.

```c++
#include <string> //declaring that we're using the package string

std::string <nom_variable>; //declaring the variable string

```

String is somewhat more pratical then table in some situation.

```c++
#include <iostream>
#include <string>
using namespace std;

int main(){
    string mot, copie;
    cout << "Mot : ";
    cin >> mot;

    copie = ""
    for (int i = 0; i < mot.size(); i++){
        copie = copie + mot[i];
    }
}
```
