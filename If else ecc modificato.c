#include <stdio.h>

int main()
{
	int n;
	
	printf("Inserisci un numero: ");
	scanf("%d", &n);
	
	if (n >= 0)
	{
		if (n <=10)
		{
			printf("Il numero e' compreso tra 0 e 10");
		}
	}
	else
	{
		printf("Il numero non e' compreso tra 0 e 10");
	}
	
	return 0;
	
}
