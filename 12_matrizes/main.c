#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define NUM_L 5 // definição da constante com 5 linhas
#define NUM_C 4 // definição da constante com 4 colunas

int main()
{
    setlocale(LC_ALL, "");
    int linha, coluna;

    float notas[NUM_L][NUM_C] = {{ 7.5, 6.8, 8.7, 3.6},
                                 { 5.6, 4.7, 7.9, 2.8},
                                 { 2.1, 9.7, 5.9, 3.6},
                                 { 7.5, 6.8, 8.7, 0.9},
                                 {7.1, 5.8, 9.7, 9.1}};
    printf("Exibindo  conteúdo da matriz declarada e inicializada:\n\n");

    for(linha = 0; linha < NUM_L; linha++) {
        for (coluna = 0; coluna < NUM_C; coluna++) {
            printf("%5.1f", notas[linha][coluna]);
        }
        printf("\n");
    }

    printf("\nValor do elemento na 2ª linha, 3ª coluna: %4.2f\n", notas[1][2]);

    return 0;
}
