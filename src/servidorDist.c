#include <wiringPi.h>
#include <stdio.h>

// Saídas
#define L_01 18
#define L_02 23
#define AC 24
#define PR 25
#define AL_BZ 8



void acendeLampadas (){

wiringPiSetupGpio () ;
  pinMode (L_01, OUTPUT) ;
  pinMode (L_02, OUTPUT) ;
  
 

  for (;;) {

    digitalWrite (L_01, HIGH) ; 
    delay (500) ;
   
    digitalWrite (L_02, HIGH) ; 
    delay (500) ;
    
  }

}

void apagaLampadas (){

wiringPiSetupGpio () ;
  pinMode (L_01, OUTPUT) ;
  pinMode (L_02, OUTPUT) ;
  
 

  for (;;) {
    
    digitalWrite (L_01,  LOW) ; 
    delay (500) ;
    
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

int main (void) {

//acendeLampadas ();
//apagaLampadas ();
//ligaArCondicionado ();
//desligaArCondicionado ();
//ligaProjetor ();
//desligaProjetor

    return 0 ;
}



