#include <iostream>
#include <string>
using namespace std;

int main(){
    string askedString = "";
    string outputString = "";

    cout << "Please enter a string: ";
    getline(cin, askedString);

    for (unsigned int i = 0; i < askedString.length(); i++){
        outputString += askedString[i] + "''" ;
    }

    cout << outputString;
}