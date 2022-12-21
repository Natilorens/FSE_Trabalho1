#include <wiringPi.h>
#include <stdio.h>
#include <unistd.h>


//Entradas
#define SPres 7 
#define SFum 1
#define SJan 12
#define SPor 16
#define SC_IN 20
#define SC_OUT 21
#define DHT22 4

#define LOW 0
#define HIGH 1


void sensorContagemEntrada () {

wiringPiSetupGpio () ;
 
  pinMode (SC_IN, INPUT);
  int x=0;
//   int i;
//   int j;

  for (;;) {

    estadoEntrada= digitalRead (SC_IN) ; 

    // for(j=0;j<=100;j++){
        if (x == 1){
            printf("Pessoa entrou!\n");
            // i++;
        }
        //sleep(10);
    }
    
  }

void sensorPresenca () {
    
    wiringPiSetupGpio () ;
 
  pinMode (SPres, INPUT);
  int x=0;
//   int i;
//   int j;

  for (;;) {

    estadoPresenca= digitalRead (SPres) ; 

    // for(j=0;j<=100;j++){
        if (estadoPresenca == 1){
            printf("Sensor de presença ligado!\n");
            // i++;
        }
        else {
            printf("Sensor de presença desligado!");
        }
        //sleep(10);
    }


  }

void sensorFumaca () {


}

void sensorPorta () {

    wiringPiSetupGpio () ;
    
    pinMode (SPor, INPUT);
    int estadoPorta=0;
    

    for (;;) {

        estadoPorta = digitalRead (SPor) ; 

            if (estadoPorta == 1){
                printf("Sensor de porta ligado!\n");
            
            }
            else {
                printf("Sensor de porta desligado!\n");
            
            }
            
        }


}

void sensorJanela () {

wiringPiSetupGpio () ;
    
    pinMode (SJan, INPUT);
    int estadoJanela=0;
    

    for (;;) {

        estadoJanela = digitalRead (SJan) ; 

            if (estadoJanela == 1){
                printf("Sensor de porta ligado!\n");
            
            }
            else {
                printf("Sensor de porta desligado!\n");
            
            }
            
        }

}


int main (){

    //sensorContagemEntrada();
    sensorPresenca ();
}