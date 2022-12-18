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

int main (void) {

//acendeLampadas ();
//apagaLampadas ();


    return 0 ;
}



