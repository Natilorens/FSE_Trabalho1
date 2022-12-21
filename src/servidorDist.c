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
  pinMode (L_01, OUTPUT) ;
  
 

  for (;;) {

    digitalWrite (L_01, HIGH) ; 
    delay (500) ;
       
  }

}
void acendeLampada2 (){

wiringPiSetupGpio () ;
  pinMode (L_02, OUTPUT) ;
  pinMode (L_02, OUTPUT) ;
  

  for (;;) {

    digitalWrite (L_02, HIGH) ; 
    delay (500) ;
  
  
  }

}

void apagaLampada1 (){

wiringPiSetupGpio () ;
  pinMode (L_01, OUTPUT) ;
  pinMode (L_01, OUTPUT) ;
  

  for (;;) {
    
    digitalWrite (L_01,  LOW) ; 
    delay (500) ;
    
  }

}

void apagaLampada2 (){

wiringPiSetupGpio () ;
  pinMode (L_02, OUTPUT) ;
  pinMode (L_02, OUTPUT) ;
  
  for (;;) {
    
    digitalWrite (L_02,  LOW) ; 
    delay (500) ;
    
  }

}

void ligaArCondicionado (){

wiringPiSetupGpio () ;
  pinMode (AC, OUTPUT) ;



  for (;;) {

    digitalWrite (AC, HIGH) ; 
    delay (500) ;
    
  }

}

void desligaArCondicionado (){

wiringPiSetupGpio () ;
  pinMode (AC, OUTPUT) ;



  for (;;) {
    
    digitalWrite (AC,  LOW) ; 
    delay (500) ;
  }

}

void ligaProjetor(){

wiringPiSetupGpio () ;
  pinMode (PR, OUTPUT) ;

 

  for (;;) {

    digitalWrite (PR, HIGH) ; 
    delay (500) ;
    
  }

}

void desligaProjetor (){

wiringPiSetupGpio () ;
  pinMode (PR, OUTPUT) ;

 
  for (;;) {

    digitalWrite (PR,  LOW) ; 
    delay (500) ;
  }

}

void Buzzer(unsigned int tempo_apito){

    unsigned int tempo_apito = 0;
    tone(AL_BZ, 4000); 
    delay(tempo_apito);
    noTone(AL_BZ); 
}

void acionaAlarme () {

    wiringPiSetupGpio () ;
    pinMode (AL_BZ, OUTPUT) ;
   
    
    do {
        
        digitalWrite (AL_BZ,  HIGH) ; 
        Buzzer(200);
        delay (2000) ;
        
    
     }while(estadoPorta == 1 && estadoJanela == 1);

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



