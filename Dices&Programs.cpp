#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to roll a dice with the given number of sides
int rollDice(int sides) {
    return (rand() % sides) + 1;
}

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    int choice;

    cout << "Welcome to Dices & Programs!" << endl;

    while (true) {
        cout << "\nChoose a dice to throw (from 2 to 20 sides), or enter 0 to exit: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting the program. Goodbye!";
            break;
        } else if (choice >= 2 && choice <= 20) {
            int result = rollDice(choice);
            cout << "You rolled a " << choice << "-sided dice and got: " << result << endl;
        } else {
            cout << "Invalid choice!! Please enter a number between 2 and 20, or enter 0 to exit." << endl;
        }
    }

    return 0;
}
