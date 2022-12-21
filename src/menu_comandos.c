#include <wiringPi.h>
#include <stdio.h>
#include <sensores.h>
#include <unistd.h>
#include <sensorDHT22.h>


int main (void) {

    int opcao;
  
   printf("...............MENU..DE..COMANDOS...............");
        printf("1 Ligar Lampada 1");
        printf("2 Desligar Lampada 1");
        printf("3 Ligar Lampada 2");
        printf("4 Desligar Lampada 2");
        printf("5 Ligar Ar Condicionado");
        printf("6 Desligar Ar Condicionado");
        printf("7 Ligar Projetor Multimidia");
        printf("8 Desligar Projetor Multimidia");
        printf("9 Ligar Alarme");
        printf("10 Desligar Alarme");
        printf("11 Ligar todas as lampadas");
        printf("12 Desligar todos os aparelhos");
        printf("\n")
  scanf("%d", &opcao);
  
  switch ( opcao )
  {
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
    ligaArCondicionado ();
    break;
    
    case 7 :
    desligaArCondicionado ();
    break;

    case 8 :
    ligaProjetor();
    break;

    case 9 :
    desligaProjetor();
    break;

    case 10 :
    desligaProjetor();
    break;

    case 11 :
    acendeLampada1();
    acendeLampada2();

    break;

    case 12 :
    apagaLampada1 ();
    apagaLampada2 ();
    desligaProjetor();
    desligaArCondicionado ();
    break;
    
    default :
    printf ("Valor invalido!\n");
  }
  
  getch();
  return 0;

}

