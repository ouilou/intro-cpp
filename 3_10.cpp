#include <iostream>
using namespace std;

int main(){
    int i, sommeDiviseur, position, testingNumber, limit;

    cout << "Enter a limit to be test: "; cin >> limit;

    position = 1;

    while (testingNumber != limit){ 
        testingNumber = position,   
        i = 1;
        sommeDiviseur = 0;
        

        while(i != testingNumber + 1){
            if(testingNumber % i == 0){
                sommeDiviseur = sommeDiviseur + i;
            }
            ++i;
        }
        
        if ( sommeDiviseur / 2 == testingNumber){
            cout << testingNumber << " is a perfect number" << endl;
            
        }
        position = position + 1;
    }

    return 0;
}