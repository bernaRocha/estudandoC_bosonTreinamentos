#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declarando variáveis
    int idade;
    float salario, valor;
    idade = 25;
    valor = 4500.50;
    salario = valor;

    printf("Idade: %d\n", idade);
    printf("E o salario: %.2f\n", salario);

    return 0;
}
