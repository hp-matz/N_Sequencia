#include <stdio.h>
/*Elabore um programa, fluxograma e algoritmo com português estruturado para demonstrar os N números da sequencia a seguir. Deverá entrar com o valor de N. SEQUENCIA:1 1 2 3 5 8 13 21 34 55*/
int main(void) {
    int a = 0;
    int b = 1;
    int c ;

  printf("%d ", b);

  do{

    {	
      c = a + b;
      a = b;
      b = c;
    }
      printf("%d ", b);
    }while(c<55);

  return 0;
}