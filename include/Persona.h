#ifndef PERSONA_H
#define PERSONA_H

class Persona
{
    public:
        static long etaInSecondi(int eta);

        Persona(char nome[8], char cognome[8], int eta = 30, float altezza = 1.6);
        //virtual ~Persona();
        char* getNome();
        void setNome(char* nome);
        char* getCognome();
        void setCognome(char* cognome);
        float getAltezza();
        void setAltezza(float altezza);
        int getEta();
        void setEta(int eta);
        long etaInSecondi();
        void buonCompleanno();

    protected:

    private:
        char nome[8];
        char cognome[8];
        float altezza;
        int eta;
};

#endif // PERSONA_H
