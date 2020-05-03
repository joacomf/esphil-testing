#ifndef PASOS_H
#define PASOS_H

#include <Arduino.h>

#define DELAY_COMPESACION 2

void presiono_(int boton);
void suelto_(int boton);
bool deberia_encender_(int led, int segundos);
bool deberia_apagar_(int led, int segundos);

void empieza(String nombre);
void termina(String nombre);

#endif