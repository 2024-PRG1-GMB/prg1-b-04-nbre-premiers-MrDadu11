#include <iostream>
#include <cstdlib>
#include <math.h>
#include <valarray>
using namespace std;

int main() {
    char answer = 'O';



    while (answer == 'O' || answer == 'o') {

        system("CLS");

        cout << "Ce programme permet d'afficher tous les nombres premiers compris entre 1 et une valeur saisie par l'utilisateur" << endl << endl;
        int limite = 1;
        while (limite < 2 || limite > 1000) {
            cout << "Entrer une valeur [2-1000]: ";
            cin >> limite;
            cout << endl;
        }



        cout << "Voici la liste des nombres premiers" << endl;
            for (int i = 1; i < limite; i++) {
                for (int j = 1; j*j<=i; j++) {
                    if(i % j == 0) {
                        break;
                    }else if (j+1 > sqrt(i)) {
                        cout << i << " ";
                    }

                }

            }



        cout << "Voulez-vous recommencer [0/N] :" << "" << endl;
        cin >> answer;
    }
    return EXIT_SUCCESS;
}
