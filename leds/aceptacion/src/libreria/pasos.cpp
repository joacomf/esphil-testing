#include "pasos.hpp"

void presiono_(int boton){
  digitalWrite(boton, HIGH);
  delay(DELAY_COMPESACION);
}

void suelto_(int boton){
  digitalWrite(boton, LOW);
  delay(DELAY_COMPESACION);
}

bool deberia_encender_(int led, int segundos) {
  long espera = segundos * 1000L;
  long tiempo_inicial = millis();

  while(millis() - tiempo_inicial < espera){
    if (digitalRead(led) == HIGH) {
      Serial.println("[OK] Encendió LED");
      return true;
    }
  }

  Serial.println("[FALLÓ] Encendió LED");
  return false;
}

bool deberia_apagar_(int led, int segundos) {
  long espera = segundos * 1000L;
  long tiempo_inicial = millis();

  while(millis() - tiempo_inicial < espera){
    if (digitalRead(led) == LOW) {
      Serial.println("[OK] Apagó LED");
      return true;
    }
  }

  Serial.println("[FALLÓ] Apagó LED");
  return false;
}

void empieza(String nombre) {
    Serial.println("Empieza TEST: " + nombre);
}

void termina(String nombre) {
    Serial.println("Termina " + nombre + "\n");
}