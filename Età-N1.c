#include <stdio.h>

int main()
{
	int eta;
	
	printf("Inserisci l'eta':");
	scanf("%d", &eta);
	
	if (eta >= 18)
	{
		printf("\nSei maggiorenne!!");
	}
	
	else
	{
		printf("\nSei minorenne !!");
	}
	
	return 0;
	
}
