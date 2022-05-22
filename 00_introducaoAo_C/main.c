#include <stdio.h>
#include <stdlib.h>

void main()  /* void indica o tipo de retorno*/
{
    printf("Bem-vindo ao curso de linguagem C!\n");
    int num1, num2, soma;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("Soma: %d\n\n", soma);

    printf("----------Outra parte-------\n\n\n");
    printf("Tamanho do armazenamento para int: %d \n", sizeof(int));
    printf("Tamanho do armazenamento para short: %d \n", sizeof(short));
    printf("Tamanho do armazenamento para long: %d \n", sizeof(long));

}
