#include <iostream>
#include <string>
using namespace std;

int main(){
    string a = "Hello, my name is Nghia";
    char letter;

    cout << "Enter a letter to be search: ";
    cin >> letter;

    int location = 0;
    for(unsigned int i = 0; i < a.length(); i++){
        if(a[i] == letter){
            location = location + 1;
            cout << "Found at index " << i << endl;
            
        }
    }
    if(location == 0){
        cout << "Not found" << endl;
    }
    else {
        cout << "Repeated " << location << endl;
    }
}