#ifndef FRAMEWORKARDUINO_H
#define FRAMEWORKARDUINO_H

#include <Arduino.h>
#include "../Framework.hpp"

class FrameworkArduino: public Framework{

    private:
        int velocidadSerial = 115200;

    public:
        FrameworkArduino();
        void escribir(int pin, int valor);
        int leer(int pin);
        long milisegundos();
        void demorar(int milisegundos);
        void consola(string mensaje);
};

#endif