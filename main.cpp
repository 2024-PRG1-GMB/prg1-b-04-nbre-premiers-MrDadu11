#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    START:                  // Identifier for the GOTO
    char answer = ' ';      // Prompt for going back to the top of the code

    // Introduction
    cout << "Ce programme permet d'afficher tous les nombres premiers compris entre 1 et une valeur saisie par l'utilisateur" << endl << endl;

    int limit = 1; // Initialize the limit to 1

    // If the limit is not between 2 and 1000, the user is asked to re-enter a number
    while (limit < 2 || limit > 1000) {
        cout << "Entrer une valeur [2-1000]:";
        cin >> limit;
    }

    cout << endl;
    cout << "Voici la liste des nombres premiers" << endl;
    int prime_counter = 0;  // Counter for the prime numbers
    for (int i = 1; i < limit; i++) {
        int division_counter = 0;   // Counter for the number of divisions per number
        for (int j = 1; j < limit; j++) {
            // Checks each division until it reaches the limit and counts
            if(i % j == 0 && i != 1) {
                division_counter++;
            }
            // If there are more than 2 divisions possible, the number is not a prime one
            // The loop stops and continues to the next value
            if (division_counter > 2) {
                break;
            }
        }
        // If there are exactly 2 divisions possible then it is outputted in the console
        if (division_counter == 2) {
            // If there are 5 aligned numbers in one line, it adds a new line
            if (prime_counter % 5 == 0) {
                cout << endl;
            }
            // Tabulations for each number
            cout << "\t" << i;
            prime_counter++;
        }
    }
    // If the answer isn't either 'O' or 'N', then the user is asked to enter a new character
    while (!(answer == 'O' || answer == 'N')) {
        cout << endl << endl << "Voulez-vous recommencer [0/N] : ";
        cin >> answer;

        // If the answer is 'O', the control of the program jumps to "START"
        if (answer == 'O') {
            goto START;
        }
    }
    return EXIT_SUCCESS;
}
