#include <string.h>
#include "Persona.h"

using namespace std;

long Persona::etaInSecondi(int eta) {
    long calcolo;
    calcolo = eta;
    calcolo *= 12;
    calcolo *= 30;
    calcolo *= 24;
    calcolo *= 60;
    calcolo *= 60;
    return calcolo;
}

Persona::Persona(char nome[8], char cognome[8], int eta, float altezza) {
    strcpy(this->nome, nome);
    strcpy(this->cognome, cognome);
    this->eta = eta;
    this->altezza = altezza;
}

/*Persona::~Persona()
{
    //dtor
}*/

char* Persona::getNome() {
    return this->nome;
}

void Persona::setNome(char* nome) {
    strcpy(this->nome, nome);
}

char* Persona::getCognome() {
    return this->cognome;
}

void Persona::setCognome(char* cognome) {
    strcpy(this->cognome, cognome);
}

float Persona::getAltezza() {
    return this->altezza;
}

void Persona::setAltezza(float altezza) {
    this->altezza = altezza;
}

int Persona::getEta() {
    return this->eta;
}

void Persona::setEta(int eta) {
    this->eta = eta;
}

long Persona::etaInSecondi() {
    return Persona::etaInSecondi(this->eta);
}

void Persona::buonCompleanno() {
    this->eta++;
}
