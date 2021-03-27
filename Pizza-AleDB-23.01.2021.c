#include <stdio.h>
#include <stdlib.h>

//400 grammi di prosciutto per 8 pizze fanno (400 / 8 =) 50 grammi di prosciutto ogni pizza
//1400 grammi di pomodoro per 12 (= 8 + 4) pizze fanno (1400 / 12 =) 116.6 grammi di pomodoro ogni pizza.
//1200 grammi di farina per 12 pizze fanno (1200 / 12 =) 100 grammi di farina ogni pizza

int main()
{
	
	
	//Dichiarazione variabili
    float prosc,  pom,  far,   Pprod;
	
	
	//Assegnazione
	prosc = 400;
	pom =  1400;
	far = 1200;
	
	
	//Output/input
	printf("Quante pizze vuoi produrre?");
	printf("\nDigita il numero di pizze:");
	scanf("%f", &Pprod);
	
	
	//Calcoli
	prosc = 400 / 8;
	pom = 1400 / 12;
	far = 1200 / 12;
	
	
	//Output/input risultati
	printf("\nLa quantita'di prosciutto necessario e':%.0f g", prosc * Pprod );
	printf("\nLa quantita'di pomodoro necessario e':%.0f g",  pom * Pprod);
	printf("\nLa quantita'di farina necessaria e':%.0f g",  far * Pprod);
	
	
	return 0;         
}
		
	

