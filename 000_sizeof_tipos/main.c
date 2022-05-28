#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    printf("Tamanho do armazenamento em bytes para o tipo int: %d \n", sizeof(int));
    printf("Tamanho do armazenamento em bytes para o tipo short: %d \n", sizeof(short));
    printf("Tamanho do armazenamento em bytes para o tipo long: %d \n", sizeof(long));

    printf("Tamanho do armazenamento em bytes para o tipo float: %d \n", sizeof(float));
    printf("Tamanho do armazenamento em bytes para o tipo double: %d \n", sizeof(double));
    printf("Tamanho do armazenamento em bytes para o tipo long double: %d \n", sizeof(long double));
    return 0;
}
