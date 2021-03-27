#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1, num2;

    printf("Inserisci il primo numero :" );
    scanf_s("%d", &num1);

    printf("\nInserisci il secondo numero :" );
    scanf_s("%d", &num2);

    if (num1 > num2)
	{
       
	   
	    printf("Il primo numero e'maggiore del secondo numero");
	}
	
	
    else if(num1 == num2)
    {
    	printf("I numeri sono uguali");
    	
    	
	}
    
    else
    {
    	
    	printf("\nIl primo numero e'minore del secondo numero");

    	
	}
    
    return 0;
}
