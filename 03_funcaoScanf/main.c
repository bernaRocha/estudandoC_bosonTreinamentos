#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int inteiro1;
    float F1, F2;
    char letra;
    char frase[15];

    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro1);
    printf("Digite dois numeros de ponto flutuante: ");
    scanf("%f%f", &F1, &F2);
    printf("Digite um caractere: ");
    scanf(" %c", &letra); // importante o espaco
    printf("Digite uma frase: \n");
    scanf("%s", &frase);

    printf("\nNumero inteiro: %d\n", inteiro1);
    printf("Ponto flutuante: %.2f e %.2f\n", F1, F2);
    printf("Caractere %c\n", letra);
    printf("Frase: %s\n\n", frase);
    printf("-----FIM---------\n");

    int dia, mes, ano;

    printf("Digite uma data no formato dd/mm/aa: ");
    scanf("%d%*c%d%*c%d", &dia, &mes, &ano); //%*c significa ignore um caractere
    printf("\nDia: %d \n", dia);
    printf("\nMes: %d \n", mes);
    printf("\nAno: %d \n", ano);
    return 0;
}
