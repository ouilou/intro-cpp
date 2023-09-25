#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int random, guess;
    int n = 101;
    srand(time(NULL));
    
    random = rand()%n;    

    cout << random << endl;

    while (guess != random){
        cout << "Please guess a number in range of 0 and 100: "; cin >> guess;
            if(guess > random){
                cout << "Your guess is too high!" << endl;
            }

            if (guess == random){
                cout << "You're correct" << endl;
            }

            if (guess < random){
                cout << "Your guess is too low!" << endl;
            }
    }

    return 0;
}