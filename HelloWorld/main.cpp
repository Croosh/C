#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double obtained_marks;
    double total_marks;
    cout << "Enter your marks: ";
    cin >> obtained_marks;
    cout << "Enter Total marks: ";
    cin >> total_marks;
    double percentage = (obtained_marks/total_marks) * 100 ;
    cout << "Your percentage is : " << round(percentage) << "%";
    return  0;
}