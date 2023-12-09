#include <iostream>
using namespace std;

int main() {
    string password;
    string guess;
    int tries = 3;
    int tries_used = 0;
    cout << "Enter a password: ";
    cin >> password;
    do {
        cout << "Can you guess the password?: ";
        cin >> guess;
        tries_used++;
        if (guess == password){
            cout << "Congrats! you guessed it right in " <<tries_used <<" tries." << endl;
            break;
        }
        else {
            if (tries_used < tries){
                cout << "Wrong. Try Again. " << endl;
            }
            else{
                cout << "You used your tries, you couldn't guess it.";
                break;
            }
        }
    } while (tries_used < tries);
    return 0;
}
