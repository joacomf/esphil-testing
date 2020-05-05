#include "FrameworkArduino.hpp"

FrameworkArduino::FrameworkArduino(){
    Serial.begin(this->velocidadSerial);
}

void FrameworkArduino::escribir(int pin, int valor){
    digitalWrite(pin, valor);
}

int FrameworkArduino::leer(int pin){
    return digitalRead(pin);
}

long FrameworkArduino::milisegundos(){
    return millis();
}

void FrameworkArduino::demorar(int milisegundos){
    delay(milisegundos);
}

void FrameworkArduino::consola(string mensaje){
    Serial.println(mensaje.c_str());
}
