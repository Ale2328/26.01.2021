#include <stdio.h>
#include <stdlib.h>

int main(){
  
  
    //Dichiarare le variabili  
    int nord, est, sud, ovest, temp;
  
  
    //Assegnare un valore alle variabili
    nord = 1;  
    est = 2;
    sud = 3;
    ovest = 4;
  
  
    //Definire cosa fa il programma
	printf("Questo programma effetua lo scambio incrociato\n\n");
   
   
    //Stampare l'ordine momentaneo
    printf("Questo e'il primo ordine:\n1-nord \n2-est \n3-sud \n4-ovest" );
  
  
    //Usare la variabile temporanea per effettuare lo scambio incrociato
	//Aspettative: nord-sud,est-ovest
    temp  = est;
    est   = sud;
    sud = temp;
  
  
    //Stampare a schermo l'avvenuto scambio 
    printf("\n\nOra l'ordine e':\n%d-nord \n%d-sud \n%d-est \n%d-ovest", nord, sud, est, ovest);
    
    
    
}
		
	

