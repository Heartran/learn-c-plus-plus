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
    return etaInSecondi(p.eta);
}

void buonCompleanno(PersonaStruct* p) {
    //p.eta = p.eta + 1;
    //p->eta += 1;
    p->eta++;
}

class PersonaClass {
public:
    char nome[8];
    char cognome[8];
    float altezza;
    int eta;

    static long etaInSecondi(int e) {
        long calcolo;
        calcolo = e;
        calcolo *= 12;
        calcolo *= 30;
        calcolo *= 24;
        calcolo *= 60;
        calcolo *= 60;
        return calcolo;
    }

    long etaInSecondi() {
        /*long calcolo;
        calcolo = eta;
        calcolo *= 12;
        calcolo *= 30;
        calcolo *= 24;
        calcolo *= 60;
        calcolo *= 60;
        return calcolo;*/
        return PersonaClass::etaInSecondi(eta);
    }

    void buonCompleanno(){
        eta++;
    }
};

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
    buonCompleanno(&federicoS);
    cout << etaInSecondi(federicoS) << endl;
    cout << endl << "Adesso usiamo le classi" << endl;
    PersonaClass nicoloC;
    strcpy(nicoloC.nome, "Nicolò");
    strcpy(nicoloC.cognome, "Rogai");
    nicoloC.altezza = 1.97;
    nicoloC.eta = 30 + 1;
    cout << nicoloC.etaInSecondi() << endl;
    PersonaClass federicoC;
    strcpy(federicoC.nome, "Federico");
    strcpy(federicoC.cognome, "Viola");
    federicoC.altezza = 1.83;
    federicoC.eta = 23 + 1;
    cout << federicoC.etaInSecondi() << endl;
    federicoC.buonCompleanno();
    cout << federicoC.etaInSecondi() << endl;
    cout << PersonaClass::etaInSecondi(1) << endl;
}
