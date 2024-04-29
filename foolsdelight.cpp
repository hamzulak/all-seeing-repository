#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generateRandomNumber() {
    return rand() % 20 + 1;
}

int main () {
    srand (time(0));
    int N = 100000;
    int matches = 0;
    int i = 0;
    int CompA, CompB, CompC;
    int FoolsA, FoolsB, FoolsC;

    cout << "Welcome to Fools' Delight" << endl;
    cout << "Input a series of 3 numbers: ";
    cin >> FoolsA >> FoolsB >> FoolsC;
    cout << endl;

    while (i != N) {
        CompA = generateRandomNumber();
        CompB = generateRandomNumber();
        CompC = generateRandomNumber();
        i++;
        if (CompA == FoolsA && CompB == FoolsB && CompC == FoolsC) {
            matches++;
        }
    }

    cout << "Matches found: " << matches << endl;
    cout << "Turns taken: " << i << endl;

    double probability = (1.0 * matches / N) * 100;
    cout << "Probability of getting the series randomly: " << probability << "%" <<endl;

    return 0;
}
