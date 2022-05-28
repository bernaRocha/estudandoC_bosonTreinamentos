#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float n1, n2;
    float media;
    printf("Digite a primeira nota: \n");
    scanf("%f", &n1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &n2);
    media = (n1 + n2) / 2.0;
    if(media >= 7.0) {
        printf("Aluno aprovado com media %.1f \n", media);
    }
    else if (media >= 5.0){
         printf("Aluno em recuperacao com media %.1f \n", media);
    }
    else {
        printf("Aluno reprovado com media %.1f \n", media);
    }

    return 0;
}
