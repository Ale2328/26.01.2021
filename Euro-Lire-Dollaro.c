#include <stdio.h>
#include <stdlib.h>

int main(){
    
    
    //Dichiarare le variabili
    float euro,cambio=0;
	int c;
	
	
	//Stampare a video la frase scelta
	printf("Questo programma consente di cambiare la valuta della moneta da Euro ad altre monete\n\n");
	printf("Inserisci l'importo in Euro da convertire:\n");
	
	//Prendere in input il valore
	scanf("%f",&euro);
	
	//usare il do while per ripetere il ciclo
	do {
	
	//Output/input 	
	printf("Inserisci 0 (per Dollaro USA), 1 (per Lira ):\n\n");
	scanf("%d",&c);
	
	
    
	switch (c){
		case 0 :
			cambio=((euro)*1.35344);
			break;
		case 1 :
			cambio=((euro)*1936.27);
			break;
	
		default: 
			printf("Errore\n");
			cambio=0;}}
	while (cambio == 0);
	
	
	
	printf("il valore e' %.2f\n\n",cambio);
	system ("pause");
	
	
	
	return 0;
}
	

