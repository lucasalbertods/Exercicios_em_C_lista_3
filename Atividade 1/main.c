#include <stdio.h>
#include <stdlib.h>
/*1) Fazer um programa em C que peça duas strings de tamanho 20 e concatene as
mesmas em uma string de tamanho 40.*/

int main()
{
   char palavra1[20], palavra2[20], resultado[40];

   printf("\n Digite a 1a palavra: ");
   gets(palavra1);
   printf("\n Digite a 2a palavra: ");
   gets(palavra2);

   strcpy(resultado, palavra1);
   strcat(resultado," ");
   strcat(resultado, palavra2);

   printf("\n O resultado eh: %s \n", resultado);

}
