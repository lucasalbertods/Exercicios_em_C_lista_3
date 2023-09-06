#include <stdio.h>
#include <stdlib.h>
/*2) Fazer um programa que peça duas strings de tamanho 20 e compare os conteúdos
digitados informando se os mesmos são iguais .*/

int main()
{
    char palavra1[20], palavra2[20];

   printf("\n Digite a 1a palavra: ");
   gets(palavra1);
   printf("\n Digite a 2a palavra: ");
   gets(palavra2);

   if(strcmp(palavra1, palavra2)==0){
    printf("\n Sao iguais!! \n");
   }
   else{
    printf("\n NAO sao iguais!! \n");
   }
}
