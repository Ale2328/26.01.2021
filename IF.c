#include <stdio.h>

int main()
{
	int n;
	
	printf("Inserisci un numero:");
	scanf("%d",  &n);
	
	if(n >= 0)
	{
		printf("Il numero e' positivo");
		
	}
	
	else
	{
		printf("\nIl numero e' negativo");
	
    }
	
	
	return 0;
}
