#include <iostream>
using namespace std;

int main() {
    int age = 18;
    int input = 0;
    while (input!=age){
        cout << "Guess my age?" <<endl;
        cin >> input;

        if (input == age){
            cout << "You guessed it right" <<endl;
        }
        else{
            cout << "Incorrect Guess" << endl;
        }
    }
    return 0;
}
