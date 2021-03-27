#include <stdio.h>
#include <stdlib.h>

int main(){
  
     //Dichiarare le variabili
     float area,  perimetro,  PiGreco,  raggio;
  
  
     //Stampare e prendere in input
     printf("Inserisci il valore dell'area:");
     scanf("%f", &area);
 
  
     //Eseguire i calcoli
     PiGreco = 3.14;
     raggio = area / PiGreco;
     perimetro = ( PiGreco * PiGreco )  * raggio;
  
 
     //Stampare il risultato
     printf("\nIl valore del perimetro e':%.1f", perimetro);
     
    return 0;
  
}
		
	

