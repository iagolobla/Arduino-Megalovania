#include "pitches.h"

const int altavoz=6;
const int boton_play=2;
const int boton_velocidad=3;
const int boton_tono=4;
const int boton_mas_menos=5;

int melodiaMega[] = {
  NOTE_D4, NOTE_D4, NOTE_D5, 0, NOTE_A4, 0, NOTE_GS4, 0, NOTE_G4, 0, NOTE_F4, NOTE_D4, NOTE_F4, NOTE_G4,
  NOTE_C3, NOTE_C3, NOTE_D5, 0, NOTE_A4, 0, NOTE_GS4, 0, NOTE_G4, 0, NOTE_F4, NOTE_D4, NOTE_F4, NOTE_G4,
  NOTE_C3, NOTE_C3, NOTE_D5, 0, NOTE_A4, 0, NOTE_GS4, 0, NOTE_G4, 0, NOTE_F4, NOTE_D4, NOTE_F4, NOTE_G4,
  NOTE_B3, NOTE_B3, NOTE_D5, 0, NOTE_A4, 0, NOTE_GS4, 0, NOTE_G4, 0, NOTE_F4, NOTE_D4, NOTE_F4, NOTE_G4,
  
  NOTE_D4, NOTE_D4, NOTE_D5, 0, NOTE_A4, 0, NOTE_GS4, 0, NOTE_G4, 0, NOTE_F4, NOTE_D4, NOTE_F4, NOTE_G4,
  NOTE_C3, NOTE_C3, NOTE_D5, 0, NOTE_A4, 0, NOTE_GS4, 0, NOTE_G4, 0, NOTE_F4, NOTE_D4, NOTE_F4, NOTE_G4,
  NOTE_C3, NOTE_C3, NOTE_D5, 0, NOTE_A4, 0, NOTE_GS4, 0, NOTE_G4, 0, NOTE_F4, NOTE_D4, NOTE_F4, NOTE_G4,
  NOTE_B3, NOTE_B3, NOTE_D5, 0, NOTE_A4, 0, NOTE_GS4, 0, NOTE_G4, 0, NOTE_F4, NOTE_D4, NOTE_F4, NOTE_G4,

  NOTE_F4, 0, NOTE_F4, NOTE_F4, 0, NOTE_F4, 0, NOTE_F4, NOTE_D4, 0, NOTE_D4, 0,
  NOTE_F4, 0, NOTE_F4, NOTE_F4, 0, NOTE_G4, 0, NOTE_GS4, NOTE_G4, NOTE_F4, NOTE_D4, NOTE_F4, NOTE_G4, 0,
  NOTE_F4, 0, NOTE_F4, NOTE_F4, 0, NOTE_G4, 0, NOTE_GS4, 0, NOTE_A4, 0, NOTE_C5, 0, NOTE_A4,
  NOTE_D5, 0, NOTE_D5, 0, NOTE_D5, NOTE_A4, NOTE_D5, NOTE_C5,

  NOTE_A4, 0, NOTE_A4, NOTE_A4, 0, NOTE_A4, 0, NOTE_A4, NOTE_G4, 0, NOTE_G4, 0,
  NOTE_A4, 0, NOTE_A4, NOTE_A4, 0, NOTE_A4, 0, NOTE_G4, 0, NOTE_A4, 0, NOTE_D5, 0, NOTE_A4, NOTE_G4,
  NOTE_D5, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_C5, NOTE_G4, NOTE_F4, NOTE_E4,
  NOTE_B3, NOTE_C4, NOTE_D4, 0, NOTE_F4, 0, NOTE_C5,

  0, NOTE_F4, NOTE_D4, NOTE_F4, NOTE_G4, NOTE_GS4, NOTE_G4, NOTE_F4, NOTE_D4,
  NOTE_G4, NOTE_D4, NOTE_F4, NOTE_G4, NOTE_GS4, NOTE_A4,
  NOTE_C5, 0, NOTE_A4, NOTE_GS4, NOTE_G4, NOTE_F4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_C5,
  NOTE_CS5, NOTE_GS4, 0, NOTE_GS4, NOTE_G4, NOTE_F4, NOTE_G4, 0,

  NOTE_F4, NOTE_G4, NOTE_A4, NOTE_F5, NOTE_E5, NOTE_D5,
  NOTE_E5, NOTE_F5, NOTE_G5, NOTE_E5,
  NOTE_A5, NOTE_A5, NOTE_GS5, NOTE_G5, NOTE_FS5, NOTE_F5, NOTE_E5, NOTE_DS5, NOTE_D5,
  NOTE_CS4, NOTE_DS4,
  END
};

int tempoMega[] = {
  1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1,
  1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1,
  1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1,
  1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1,
  
  1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1,
  1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1,
  1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1,
  1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1,

  1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 4, 1,
  1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3,
  1, 1, 1, 1, 1, 1, 1, 9,

  1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 4, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2,
  2, 2, 2, 2, 2, 2, 2, 2,
  2, 1, 1, 1, 1, 1, 9,

  8, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 2, 9, 2, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2,
  2, 1, 1, 1, 1, 1, 8, 1,
  2, 2, 2, 2, 4, 4,
  4, 4, 4, 4,
  8, 1, 1, 1, 1, 1, 1, 1, 1,
  8, 8,
  
};

int speed=120;
int tone_mod=0;
int nota_base=NOTE_D4;
bool subir=true;
bool playing=false;
bool velocidad_released=true;
bool tono_released=true;
bool mas_menos_released=true;

void setup() {
  // put your setup code here, to run once:
  pinMode(altavoz, OUTPUT);
  pinMode(boton_play,INPUT);
  pinMode(boton_velocidad,INPUT);
  pinMode(boton_tono,INPUT);
  pinMode(boton_mas_menos,INPUT);
}

void playMega(){
  if(!playing){
    playing=true;
    for(int nota_i=0;melodiaMega[nota_i]!=END; nota_i++){
      int duracion = speed*tempoMega[nota_i];
      tone(altavoz, melodiaMega[nota_i]+tone_mod,duracion*0.95);
      delay(duracion);
      noTone(altavoz);
    }
    playing=false;
  }
}

void beep(){
  tone(altavoz, nota_base+tone_mod, speed*0.95);
  delay(speed);
  noTone(altavoz);
}

void mod_velocidad(){
  if(!playing){
    if(subir){
      speed-=5;
    }else{
      speed+=5;
    }

    for(int i=0;i<3;i++){
      beep();
    }
  }
}

void mod_tono(){
  if(!playing){
    if(subir){
      tone_mod+=5;
    }else{
      tone_mod-=5;
    }

    beep();
  }
}

void mod_subir_bajar(){
  if(!playing){
    if(subir){
      subir=false;
      beep();
      beep();
    }else{
      subir=true;
      beep();
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int estado_boton_play=digitalRead(boton_play);
  int estado_boton_velocidad=digitalRead(boton_velocidad);
  int estado_boton_tono=digitalRead(boton_tono);
  int estado_boton_mas_menos=digitalRead(boton_mas_menos);

  if(estado_boton_play == HIGH){
    playMega();
  }

  if(estado_boton_velocidad == HIGH){
    if(velocidad_released){
      velocidad_released=false;
      mod_velocidad();
    }
  }else{
    if(!velocidad_released){
      velocidad_released=true;
    }
  }

  if(estado_boton_tono == HIGH){
    if(tono_released){
      tono_released=false;
      mod_tono();
    }
  }else{
    if(!tono_released){
      tono_released=true;
    }
  }
  if(estado_boton_mas_menos == HIGH){
    if(mas_menos_released){
      mas_menos_released=false;
      mod_subir_bajar();
    }
  }else{
    if(!mas_menos_released){
      mas_menos_released=true;
    }
  }
}
