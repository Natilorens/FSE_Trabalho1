#include <wiringPi.h>
#include <stdio.h>
#include <unistd.h>


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

    wiringPiSetupGpio();
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

/*
 * DHT22 for Raspberry Pi with WiringPi
 * Original Author: Hyun Wook Choi
 * Original Version: 0.1.0
 * Forked from: https://github.com/ccoong7/DHT22
 */

static const unsigned short signal = 4;
unsigned short data[5] = {0, 0, 0, 0, 0};


short readDhtData()
{
	unsigned short val = 0x00;
	unsigned short signal_length = 0;
	unsigned short val_counter = 0;
	unsigned short loop_counter = 0;

	while (1)
	{
		// Count only HIGH signal
		while (digitalRead(signal) == HIGH)
		{
			signal_length++;

			// When sending data ends, high signal occur infinite.
			// So we have to end this infinite loop.
			if (signal_length >= 200)
			{
				return -1;
			}

			delayMicroseconds(1);
		}

		// If signal is HIGH
		if (signal_length > 0)
		{
			loop_counter++;	// HIGH signal counting

			// The DHT22 sends a lot of unstable signals.
			// So extended the counting range.
			if (signal_length < 10)
			{
				// Unstable signal
				val <<= 1;		// 0 bit. Just shift left
			}

			else if (signal_length < 30)
			{
				// 26~28us means 0 bit
				val <<= 1;		// 0 bit. Just shift left
			}

			else if (signal_length < 85)
			{
				// 70us means 1 bit
				// Shift left and input 0x01 using OR operator
				val <<= 1;
				val |= 1;
			}

			else
			{
				// Unstable signal
				return -1;
			}

			signal_length = 0;	// Initialize signal length for next signal
			val_counter++;		// Count for 8 bit data
		}

		// The first and second signal is DHT22's start signal.
		// So ignore these data.
		if (loop_counter < 3)
		{
			val = 0x00;
			val_counter = 0;
		}

		// If 8 bit data input complete
		if (val_counter >= 8)
		{
			// 8 bit data input to the data array
			data[(loop_counter / 8) - 1] = val;

			val = 0x00;
			val_counter = 0;
		}
	}
}


int main (void) {

    int opcao;
  
   printf("...............MENU..DE..COMANDOS...............\n");
        printf("1 Ligar Lampada 1\n");
        printf("2 Desligar Lampada 1\n");
        printf("3 Ligar Lampada 2\n");
        printf("4 Desligar Lampada 2\n");
        printf("5 Ligar Ar Condicionado\n");
        printf("6 Desligar Ar Condicionado\n");
        printf("7 Ligar Projetor Multimidia\n");
        printf("8 Desligar Projetor Multimidia\n");
        printf("9 Ligar Alarme\n");
        printf("10 Desligar Alarme\n");
        printf("11 Ligar todas as lampadas\n");
        printf("12 Desligar todos os aparelhos\n");
        printf("13 Mostrar temperatura e umidade\n");
        printf("\n");

  
  scanf("%d", &opcao);
  
  
  switch ( opcao ) {

    case 1 :
    acendeLampada1();
    break;
    
    case 2 :
    apagaLampada1 ();
    break;
    
    case 3 :
    acendeLampada2();
    break;
    
    case 4 :
    apagaLampada2 ();
    break;
    
    case 5 :
    ligaArCondicionado ();
    break;
    
    case 6 :
    desligaArCondicionado ();
    break;
    
    case 7 :
    ligaProjetor();
    break;

    case 8 :
    desligaProjetor();
    break;

    case 9 :
    acionaAlarme ();
    break;

    case 10 :
    desligaAlarme ();
    break;

    case 11 :
    acendeLampadas();
    break;

    case 12 :
    desligaAparelhos ();
    break;
    
    case 13 :
    readDhtData ();
    break;

    default :
    printf ("Valor invalido!\n");
  }
  

  
 // getch();

  return 0;

}

