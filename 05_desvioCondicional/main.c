#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    float media;
    printf("Digite a primeira nota: \n");
    scanf("%f", &n1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &n2);
    media = (n1 + n2) / 2.0;
    //scanf("%f", &media);
    if (media >= 7.0) {
        printf("Aluno aprovado com media %.1f!", media);
    }
    return 0;
}
