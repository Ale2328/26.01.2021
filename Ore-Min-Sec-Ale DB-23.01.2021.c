#include <stdio.h>
#include <stdlib.h>
//Ore=  ore*3600
//minuti=  minuti*60

//Leggi tre numeri corrispondenti a ore, minuti e secondi e calcolane il valore totale in secondi.
int main(){
	
	//Dichiarazone delle variabili
	int ore,  min,  sec, sommaS;
	
   
    //Stampare a video la frase scelta
	printf("Inserisci le ore, i minuti e i secondi:\n");

    
	
	//Prendere in input i valori delle variabili
	scanf("%d", &ore);
	scanf("%d", &min);
	scanf("%d", &sec);
	
	
	//Svolgimento del calcolo
	ore = ore * 3600;
	min = min *  60;
	sec = sec;
	sommaS = ore + min + sec;
	
	//Stampare a video il risultato
    printf("La somma (ore/min/sec) in secondi e':%d", sommaS);
	
	
	
  
           
           
}
		
	

