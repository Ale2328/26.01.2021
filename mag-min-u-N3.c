#include <stdio.h>

int main()
{
	int n1,  n2;
	
	
	printf("Questo programma individua se due numeri sono maggiori, minori o uguali.\n");
	
	
	printf("\nInserisci il primo numero:");
	scanf("%d", &n1);
	
	
	printf("\nInserisci il secondo numero:");
	scanf("%d", &n2);
	
	if (n1 > n2)
	{
		printf("\nIl primo numero e' maggiore");
	}
	
	
	else if (n1 < n2)
	{
		printf("\nIl secondo numero e' maggiore");
	}
	
	
	else
	{
		printf("\nI due numeri sono uguali");
	}
	
	
	return 0;
}
