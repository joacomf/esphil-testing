#ifndef HARDSTING_H
#define HARDSTING_H

#include "framework/Framework.hpp"
#include <string>

#define DELAY_COMPESACION 2
#define BAJO 0x0
#define ALTO 0x1

using namespace std;

class Hardsting {

    private:
        Framework* framework;

    public:
        Hardsting(Framework* framework);
        void presiono_(int boton);
        void suelto_(int boton);
        bool deberia_encender_(int led, int segundos);
        bool deberia_apagar_(int led, int segundos);

        void empieza(string nombre);
        void termina(string nombre);

        virtual ~Hardsting();

};

#endif