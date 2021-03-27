#include <stdio.h>

int main()
{
	int n;
	
	printf("Inserisci un numero:");
	scanf("%d",  &n);
	
	if (n%5 == 0 )
	{
		printf("Il numero %d e' divisibile per 5!!");
	}
	
	else
	{
		printf("Il numero non e' divisibile per 5,riprova!");
	}
	
	return 0;
}
