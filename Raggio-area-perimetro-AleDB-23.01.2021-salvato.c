#include <stdio.h>
#include <stdlib.h>

int main(){
  
  
  //Dichiarare le variabili  
  float raggio,  perimetro,  area,  PiGreco;
  
  
  //Stampare a video la frase scelta
  printf("Inserisci il valore del raggio:");
  
 
 
  //Prendere in input il valore
  scanf("%f",&raggio);
  
 
  //Svolgimento del calcolo
  PiGreco = 3.14;
  perimetro  =  ( 2 *  PiGreco) * raggio;
  area = (raggio * raggio) * PiGreco;
  
  
  //Stampare a video i risultati
  printf("\nIl valore del perimetro e':%f", perimetro);
  printf("\n valore dell'area e':%f", area);
  
  return 0;
  
  
}
		
	

