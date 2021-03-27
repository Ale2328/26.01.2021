//Dato un numero inserito dall'utente, compreso tra 1000 e 9999, stampalo in modo che ogni cifra si separata dalle altre da uno spazio.

/* la funzione main è il punto d'inizio dell'esecuzione del programa */


int main( void )
{
    int n , r; /* dichiaro le variabili */


    printf( "Inserisci un numero: " ); /* sollecita l'inserimento */
    scanf( "%d" , &n ); /* salva il numero nella variabile n */


    int x=10;


    while(n>=x)
    {
        x*=10; // è uguale a x = x*10;
    }
        x /= 10;   
    printf("ord di grandezza : %d\n" , x );


    // Il while di sopra non è proprio il massimo :S


    int cifra=0;


    while(x>=1)
    {
        cifra = n/x;
        printf( "%d\n" , cifra ); /* visualizza la variabile cifra */
        n -= cifra*x;
        x /= 10;
    }




    return 0; /* indica che il programma è terminato con successo */


} /* fine della funzione main */
