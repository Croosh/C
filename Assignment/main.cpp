#include <iostream>
#include <conio.h>
using namespace std;

int calculator(){
    double num1, num2;
    char calc_operator, user_choice;
    do {
        system("cls");
        cout<<"Calculator";
        cout<<"Enter Operator (+,-,*,/): "<<endl;
        cin>>calc_operator;
        cout<<"Enter the first number: ";
        cin>>num1;
        cout<<"Enter the second number: ";
        cin>>num2;
        switch (calc_operator) {
            case '+':
                cout<<"Answer: "<<num1 + num2<<endl;
                break;
            case '-':
                cout<<"Answer: "<<num1 - num2<<endl;
                break;
            case '*':
                cout<<"Answer: "<<num1 * num2<<endl;
                break;
            case '/':
                cout<<"Answer: "<<num1 / num2<<endl;
                break;
            default:
                cout<<"Error: (Either operator selection or Math error"<<endl;
                break;
        }
        cout<< "Start Again? (Y/N) ";
        cin>>user_choice;
    }while(user_choice == 'y' || user_choice == 'Y');
    return 0;
}

int changeCalculator(){
    int hundreds, fifties, tens, fives;
    char user_choice;
    do {
        system("cls");
        cout<<"Change Calculator";
        cout << "How many hundreds do you have? ";
        cin>>hundreds;
        cout  << "How many fifties do you have? ";
        cin>>fifties;
        cout << "How many tens do you have? ";
        cin>>tens;
        cout << "How many fives do you have? ";
        cin>>fives;
        cout << "Your Total Money: " << (hundreds * 100) + (fifties * 50) + (tens * 10) + (fives * 5);
        cout << endl << "Want to start again?: (Y/N)";
        cin>>user_choice;
    }while(user_choice == 'Y'|| user_choice == 'y');
    return 0;
}

int rectangleAreaCalculator(){

    double height, width;
    char user_choice;
    do {
        system("cls");
        cout<<"Rectangle Area Calculator";
        cout << "Enter the Width of the rectangle (cm): ";
        cin>>width;
        cout  << "Enter the Height of the rectangle (cm): ";
        cin>>height;
        cout << "Your Total Money: " << width * height<<"cm"
        << endl << "Want to start again?: (Y/N)";
        cin>>user_choice;
    }while(user_choice == 'Y'|| user_choice == 'y');
    return 0;
}

int bookReadingCalculator(){
    int pages_read_each_day, days_read, book_pages;
    char user_choice;
    do {
        system("cls");
        cout<<"Book Reading Calculator";
        cout  << "Total pages of the book: ";
        cin>>book_pages;
        cout << "How many pages read in one day: ";
        cin>>pages_read_each_day;
        cout << "How many days have you read?: ";
        cin>>days_read;
        cout << endl << "Total Pages Remaining: "<< book_pages - (pages_read_each_day * days_read)<< " pages." <<endl
             <<"Days it will take to complete the book: " << (book_pages - (pages_read_each_day * days_read)) / pages_read_each_day <<" days."
             << endl << endl << "Want to start again?: (Y/N)";
        cin>>user_choice;
    }while(user_choice == 'Y'|| user_choice == 'y');
    return 0;
}

int petrolCalculator(){

    int pages_read_each_day, days_read, book_pages;
    char user_choice;
    do {
        system("cls");
        cout  << "Total pages of the book: ";
        cin>>book_pages;
        cout << "How many pages read in one day: ";
        cin>>pages_read_each_day;
        cout << "How many days have you read?: ";
        cin>>days_read;
        cout << endl << "Total Pages Remaining: "<< book_pages - (pages_read_each_day * days_read)<< " pages." <<endl
             <<"Days it will take to complete the book: " << (book_pages - (pages_read_each_day * days_read)) / pages_read_each_day <<" days."
             << endl << endl << "Want to start again?: (Y/N)";
        cin>>user_choice;
    }while(user_choice == 'Y'|| user_choice == 'y');
    return 0;
}
int dataDisplay(){
    system("cls");
    cout<< "Data Display" <<endl<<endl
        << "\tSr." << "\t\tSubject" << "\t\tMarks" << endl
        << "\t1-" << "\t\tC++" <<"\t\t56" << endl
        << "\t2-" << "\t\tEconomics" <<"\t78" << endl
        << "\t3-" << "\t\tMaths" <<"\t\t91" << endl;
    return 0;
}
int main() {
    int user_input;
    system("cls");
    do {
        cout<<"Select a question by answering between 1-7: " <<endl
            <<" - Question #1: Calculator"<<endl
            <<" - Question #2: Change Calculator"<<endl
            <<" - Question #3: Rectangle Area Calculator"<<endl
            <<" - Question #4: Book Reading Calculator"<<endl
            <<" - Question #5: Petrol Calculator"<<endl
            <<" - Question #6: 10 Calculations"<<endl
            <<" - Question #7: Data Display"<<endl;
        cin>>user_input;
        if (user_input < 1 || user_input > 7 ){
            system("cls");
            cout<<"You Dumb Shit, Select the Appropriate Option"<< endl;
            getch();
            system("cls");
        }
        else{
            switch (user_input) {
                case 1:
                    calculator();
                    break;
                case 2:
                    changeCalculator();
                    break;
                case 3:
                    rectangleAreaCalculator();
                    break;
                case 4:
                    bookReadingCalculator();
                    break;
                case 5:
                    petrolCalculator();
                    break;
                case 7:
                    dataDisplay();
                    break;
                default:
                    cout<<"Hello World";
                    break;
            }
            break;
        }
    }while(true);
    return 0;
}