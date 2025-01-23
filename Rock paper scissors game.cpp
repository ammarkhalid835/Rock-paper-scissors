#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main() {
    srand(time(0)); // Seed random number generator

    string choices[] = {"Rock", "Paper", "Scissors"};
    int computerChoice = rand() % 3; // Random choice for the computer (0 = Rock, 1 = Paper, 2 = Scissors)

    cout << "Welcome to Rock, Paper, Scissors!\n";
    cout << "Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ";
    int playerChoice;
    cin >> playerChoice;

    // Validate player input
    if (playerChoice < 0 || playerChoice > 2) {
        cout << "Invalid choice! Please choose 0, 1, or 2.\n";
        return 1;
    }

    cout << "You chose: " << choices[playerChoice] << endl;
    cout << "Computer chose: " << choices[computerChoice] << endl;

    // Determine the winner
    if (playerChoice == computerChoice) {
        cout << "It's a Tie!" << endl;
    } else if ((playerChoice == 0 && computerChoice == 2) || 
               (playerChoice == 1 && computerChoice == 0) || 
               (playerChoice == 2 && computerChoice == 1)) {
        cout << "You Win!" << endl;
    } else {
        cout << "Computer Wins!" << endl;
    }

    return 0;}