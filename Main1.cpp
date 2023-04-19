#include <iostream>
#include <string.h>

using namespace std;

struct PersonaStruct {
    char nome[8];
    char cognome[8];
    float altezza;
    int eta;
};

int main() {
    cout << "Hello World!" << endl;
    PersonaStruct nicoloS;
    strcpy(nicoloS.nome, "Nicolò");
    strcpy(nicoloS.cognome, "Rogai");
    nicoloS.altezza = 1.97;
    nicoloS.eta = 30 + 1;
    long etaDiNicoloInSecondi;
    etaDiNicoloInSecondi = nicoloS.eta * 12 * 30 * 24 * 60 * 60;
    cout << etaDiNicoloInSecondi << endl;
    PersonaStruct federicoS;
    strcpy(federicoS.nome, "Federico");
    strcpy(federicoS.cognome, "Viola");
    federicoS.altezza = 1.83;
    federicoS.eta = 23 + 1;
    long etaDiFedericoInSecondi;
    etaDiFedericoInSecondi = federicoS.eta * 12 * 30 * 24 * 60 * 60;
    cout << etaDiFedericoInSecondi << endl;
}
