#include <iostream>
using namespace std;

int main() {
    int cash= 0;
    if (cash == 0){
        cout << "Please Deposit some cash first." << endl;
        cin>>cash;
    }
    cout << "You have " << cash << "$ to gamble." <<endl;
    return 0;
}
