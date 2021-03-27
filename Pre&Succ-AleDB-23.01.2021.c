#include <stdio.h>
#include <stdlib.h>
//Determina il numero precedente e il successivo di un numero intero letto in input.


int main(){
	
	
	int n, pre, post;
	
	printf("Inserisci un numero per sapere il suo precedente e successivo:");
	scanf("%d", &n);
	
	pre = n - 1;
	post = n + 1;
	
	printf("Il precedente e':%d", pre);
	printf("\nIl successivo e':%d", post);
         
}
		
	
