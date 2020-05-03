#include <Arduino.h>
#include "libreria/claves.hpp"
#include "libreria/pasos.hpp"

#define LED_ROJO 4
#define BOTON_ROJO 5

void setup() {
    Serial.begin(115200);

    pinMode(LED_ROJO, INPUT);
    pinMode(BOTON_ROJO, OUTPUT);
    Serial.println("\nComienzan las pruebas\n");
}

prueba presionar_boton_enciende_led(){
  empieza("presionar boton enciende led");

  cuando presiono_(BOTON_ROJO);
  entonces deberia_encender_(LED_ROJO, 5);

  termina("presionar boton enciende led");
}

prueba presionar_boton_enciende_led_al_presionarlo_nuevamente_lo_apaga(){
  empieza("presionar boton enciende led al presionarlo nuevamente lo apaga");

  cuando presiono_(BOTON_ROJO);
  entonces deberia_encender_(LED_ROJO, 5);
  y_ suelto_(BOTON_ROJO);
  entonces deberia_apagar_(LED_ROJO, 5);

  termina("presionar boton enciende led al presionarlo nuevamente lo apaga");
}

void loop() {

  PRUEBA presionar_boton_enciende_led();
  PRUEBA presionar_boton_enciende_led_al_presionarlo_nuevamente_lo_apaga();

  TERMINA_PRUEBAS
}