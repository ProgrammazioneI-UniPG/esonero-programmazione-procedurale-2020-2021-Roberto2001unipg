#include <stdio.h>     //inclusione delle librerie necessarie al programma
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define MAX 128 //limite dei caratteri per le stringhe

int main ( void )

{
  char M[128];
  printf( "Inserire una stringa M da cifrare\n");   //inserimento da parte dell'utente della stringa iniziale plaintext M
  scanf("%127s", M);
  fgets(M, MAX, stdin);


  printf("%s", "Inserire 1 se l'utente desidera digitare una stringa a suo piacimento \n" // dare la possibilità all'utente di decidere tra 2 opzioni
  "Inserire 2 se l'utente desidera generare casualmente una stringa k di lunghezza pari ad M : \n");
  int order;
  scanf("%d", &order);



if (order == 1) {      // istruzioni se l'utente decide la prima opzione  di inserire la stringa a piacere

  char plaintext[MAX];
  char chiave[MAX];
  int M;
  int k;
  puts("Inserire stringa a piacere di lunghezza uguale o superiore a M");
   scanf( "%d", &k);

  M=strlen(plaintext);
  k=strlen(chiave);
  if (M==k)
    printf("Le stringhe hanno lo stesso numero di caratteri\n");
    else if(M<k)
    printf("La prima stringa è minore rispetto alla seconda\n");
else
printf ("La seconda stringa è più lunga della prima");
  }
char k;
scanf ("%127s", M);
char C; scanf("%127s", M);
scanf("%127s", k);
C = M^k;
printf("\n");


 // conclusione dell'istruzione 1 sulla scelta di inserire una stringa a piacere




if ( order == 2 ) {      // istruzioni se l'utente decide di utilizzare la seconda opzione di generare una stringa casualmente
  puts("Genero casualmente una stringa k");
char r;
  srand(time(NULL)); //inizializzazione del generatore di caratteri casuali
  for(int i = 0; i<=128; i++) {
    r = ((char) (rand()%96)+ 32);
    printf ("%127d", r);}

  int i;


    char plaintext[MAX];
    char chiave[MAX];
    char M;
    char k;


    M=strlen(plaintext);
    k=strlen(chiave);
    if (M==k)
      printf("Le stringhe hanno lo stesso numero di caratteri\n");
      else if(M<k)
      printf("La prima stringa è minore rispetto alla seconda\n");
  else
  printf ("La seconda stringa è più lunga della prima");


}



} // conclusione main
