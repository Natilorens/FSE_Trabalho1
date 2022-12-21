#include <wiringPi.h>
#include <stdio.h>
#include <sensores.h>
#include <unistd.h>
#include <sensorDHT22.h>

// Saídas
#define L_01 18
#define L_02 23
#define AC 24
#define PR 25
#define AL_BZ 8

#define LOW 0
#define HIGH 1



void acendeLampada1 (){

wiringPiSetupGpio () ;
  pinMode (L_01, OUTPUT) ;

  
  for (;;) {

    digitalWrite (L_01, HIGH) ; 
    delay (2000) ;
       
  }

}
void acendeLampada2 (){

wiringPiSetupGpio () ;
  pinMode (L_02, OUTPUT) ;
  
  
  for (;;) {

    digitalWrite (L_02, HIGH) ; 
    delay (2000) ;
  
  
  }

}

void acendeLampadas () {

    wiringPiSetupGpio () ;
    pinMode (L_01, OUTPUT) ;
    pinMode (L_02, OUTPUT) ;

    for (;;) {

    digitalWrite (L_01, HIGH) ; 
    digitalWrite (L_02, HIGH) ; 
    delay (2000) ;
  
  
  }


}

void apagaLampada1 (){

wiringPiSetupGpio () ;
  pinMode (L_01, OUTPUT) ;
  
  
  for (;;) {
    
    digitalWrite (L_01,  LOW) ; 
    delay (2000) ;
    
  }

}

void apagaLampada2 (){

wiringPiSetupGpio () ;
  pinMode (L_02, OUTPUT) ;
  
  for (;;) {
    
    digitalWrite (L_02,  LOW) ; 
    delay (2000) ;
    
  }

}

void ligaArCondicionado (){

wiringPiSetupGpio () ;
  pinMode (AC, OUTPUT) ;



  for (;;) {

    digitalWrite (AC, HIGH) ; 
    delay (2000) ;
    
  }

}

void desligaArCondicionado (){

wiringPiSetupGpio () ;
  pinMode (AC, OUTPUT) ;



  for (;;) {
    
    digitalWrite (AC,  LOW) ; 
    delay (2000) ;
  }

}

void ligaProjetor(){

wiringPiSetupGpio () ;
  pinMode (PR, OUTPUT) ;

 

  for (;;) {

    digitalWrite (PR, HIGH) ; 
    delay (2000) ;
    
  }

}

void desligaProjetor (){

wiringPiSetupGpio () ;
  pinMode (PR, OUTPUT) ;

 
  for (;;) {

    digitalWrite (PR,  LOW) ; 
    delay (2000) ;
  }

}


void acionaAlarme () {

    wiringPiSetupGpio () ;
    pinMode (AL_BZ, OUTPUT) ;
   
    for (;;) {

    digitalWrite (AL_BZ, HIGH) ; 
    delay (2000) ;
    
  }

}

void desligaAlarme () {

    wiringPiSetupGpio () ;
    pinMode (AL_BZ, OUTPUT) ;
   
    for (;;) {

    digitalWrite (AL_BZ, LOW) ; 
    delay (2000) ;
    
  }

}

void desligaAparelhos (){

    wiringPi();
    pinMode (L_01, OUTPUT) ;
    pinMode (L_02, OUTPUT) ;
    pinMode (AC, OUTPUT) ;
    pinMode (PR, OUTPUT) ;
    pinMode (AL_BZ, OUTPUT) ;


    for (;;) {
    

    digitalWrite (L_01,  LOW) ; 
    digitalWrite (L_02,  LOW) ; 
    digitalWrite (AC,  LOW) ;
    digitalWrite (PR,  LOW) ; 
    digitalWrite (AL_BZ, LOW) ; 
    digitalWrite (AL_BZ, LOW) ; 
    
    
  }

}
int main (void) {

//acendeLampadas ();
//apagaLampadas ();
//ligaArCondicionado ();
//desligaArCondicionado ();
//ligaProjetor ();
//desligaProjetor ();
//ligaAlarme();

    return 0 ;
}



