#include <iostream>
#include <string.h>

using namespace std;

int main() {
    cout << "Hello World!" << endl;
    int etaDiNicolo;
    etaDiNicolo = 30 + 1;
    float altezzaDiNicolo;
    altezzaDiNicolo = 1.97;
    char nomeDiNicolo[8];
    strcpy(nomeDiNicolo, "Nicolò");
    char cognomeDiNicolo[5];
    strcpy(cognomeDiNicolo, "Rogai");
    int numeriPreferitiDiNicolo[5];
    numeriPreferitiDiNicolo[0] = 25;
    long etaDiNicoloInSecondi;
    etaDiNicoloInSecondi = etaDiNicolo * 12 * 30 * 24 * 60 * 60;
    cout << etaDiNicoloInSecondi;
}
