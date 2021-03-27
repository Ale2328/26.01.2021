//Letto numero in input stampare in output la somma dei primi n numeri

#include <stdio.h>

int main() 
{


	//Dichiarazione
	int num, somma;
	 

	//Output/Input
	printf("Inserisci un numero:");
	scanf("%d", &num);
	
	
	//Calcoli
    somma = 0;
	somma = num  * (num+1) / 2 ;

    
	//Risultato
	printf("La somma e': %d", somma);
	
	
	
}
