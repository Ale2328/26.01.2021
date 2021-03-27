#include <stdio.h>
#include <stdlib.h>
main() {
       int n,r,x;
       printf("Il programma scinde un numero nelle sue singole cifre! \n");
       printf("\n\n\n");
       printf("Inserisci un numero intero positivo: ");
       scanf("%d", &n);
       printf("\n");
       if (n >= 10) {
             while (n > 10) {
                   r = n % 10;
                   x = (n - (r*10) );
                   printf("Singola cifra : %d", x);
                   printf("\n");  
                   n = r;
                   }                             
             }
       else if ( (n<10) &&  (n>=0) ) {
            printf("La singola cifra e': %d", n);
            printf("\n");      
            }
       else if (n < 0) {
            printf("Hai inserito un numero negativo! \n");
            printf("\n"); 
            }
       system("pause");
   }
