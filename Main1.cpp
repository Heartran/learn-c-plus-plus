#include <iostream>
#include <string.h>

using namespace std;

struct PersonaStruct {
    char nome[8];
    char cognome[8];
    float altezza;
    int eta;
};

long etaInSecondi(int eta) {
    long calcolo;
    calcolo = eta;
    calcolo *= 12;
    calcolo *= 30;
    calcolo *= 24;
    calcolo *= 60;
    calcolo *= 60;
    return calcolo;
}

long etaInSecondi(PersonaStruct p) {
    return etaInSecondi(p.eta + 2);
}

int main() {
    cout << "Hello World!" << endl;
    PersonaStruct nicoloS;
    strcpy(nicoloS.nome, "Nicolò");
    strcpy(nicoloS.cognome, "Rogai");
    nicoloS.altezza = 1.97;
    nicoloS.eta = 30 + 1;
    cout << etaInSecondi(nicoloS) << endl;
    PersonaStruct federicoS;
    strcpy(federicoS.nome, "Federico");
    strcpy(federicoS.cognome, "Viola");
    federicoS.altezza = 1.83;
    federicoS.eta = 23 + 1;
    cout << etaInSecondi(federicoS) << endl;
}
