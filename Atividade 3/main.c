#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome1[40], nome2[20], *p;

    printf("\n Digite um nome: ");
    gets(nome1);

    printf("\n Digite o item para procura; ");
    gets(nome2);

    p=strstr(nome1,nome2);

    printf("\n Sua busca %s",p);
}
