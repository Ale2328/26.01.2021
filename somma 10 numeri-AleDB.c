#include <stdio.h>
#include <stdlib.h>


  
 int main()
{
   
   int numero, i;
   int somma=0;

   
   for(i=0;i<10;i++) {
       
	   printf("inserisci il %d numero: ", i+1);
       scanf("%d", &numero);
      
	   somma=somma + numero;
   }
   
   printf("la somma e' %d:\n ", somma);
   system("PAUSE");

}
  
	
 
                  

		
	

