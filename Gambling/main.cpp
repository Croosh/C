#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Function to generate a random choice for computer
string computer_choice() {
    int computer_move;
    srand(time(nullptr));
    computer_move = rand() % 3;

    if (computer_move == 0) {
        return "Rock";
    } else if (computer_move == 1) {
        return "Paper";
    }
    return "Scissors";
}

// Choice Comparison Function
int choice_comparison(const string& player_choice, const string& computer_choice) {
    if ((player_choice == "Paper" && computer_choice == "Rock") ||
        (player_choice == "Scissors" && computer_choice == "Paper") ||
        (player_choice == "Rock" && computer_choice == "Scissors")) {
        return 1;
    } else

    if ((player_choice == "Rock" && computer_choice == "Paper") ||
        (player_choice == "Paper" && computer_choice == "Scissors") ||
        (player_choice == "Scissors" && computer_choice == "Rock")) {
        return -1;
    } else {
        return 0;
    }
}
// Unnecessary function to convert user input (1,2,3 to R,P,S)
string player_choice_selection(int player_input) {
    if (player_input == 1) {
        return "Rock";
    } else if (player_input == 2) {
        return "Paper";
    } else {
        return "Scissors";
    }
}

int main() {
    // Start of the program.
    cout << "\t\t\t\tWelcome to Paper Scissor Game!" << endl;
    // Player Scores
    int score = 0;
    do {
        // Player Choice
        cout << "Score: " << score << endl;
        cout <<endl<< "Select an option or type 'Quit' to exit:" << endl<<
             "\t1. Rock" << endl <<
             "\t2. Paper" << endl <<
             "\t3. Scissors" << endl;

        string input;
        cin >> input;

        // Check if user wants to quit
        if (input == "Quit" || input == "quit") {
            break;
        }

        // Convert input to integer for comparison
        int player_input = stoi(input);

        // Validate player input
        if (player_input < 1 || player_input > 3) {
            cout << "Invalid input. Please enter a number between 1 and 3." << endl;
            continue;
        }

        system("cls");

        string player_choice = player_choice_selection(player_input);
        cout << "Player: " << player_choice << endl;

        // Function to get random choice from computer
        string c_choice = computer_choice();
        cout << "Computer: " << c_choice << endl;

        // Comparison of both choices to declare result
        int result = choice_comparison(player_choice, c_choice);

        if (result == 1) {
            cout << "You won!" << endl;
            score++;
        } else if (result == -1) {
            cout << "You lost." << endl;
            if(score > 0){
                score--;
            }
            else{
                continue;
            }
        } else {
            cout << "It was a draw." << endl;
        }

        cout << "Score: " << score << endl;
        cout << "Play again? (Y/N): ";
        string answer;
        cin >> answer;
        system("cls");
        // Check answer and break the loop if user says no
        if (answer == "N" || answer=="n") {
            break;
        }
        system("cls");
    } while (true);

    cout << "Thanks for playing!" << endl;
    return 0;
}