#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{   //Exercício corrigido por alguém com mais conhecimento que eu na época
    setlocale(LC_ALL, "");
    int  cont;
    char cod = 'C';

    while (cod != 'F') {
        float nota = 0;
        float media = 0;
        float total = 0;

        char buffer[100];

        for (int cont = 1; cont <= 4; cont++) {
            printf("Digite a nota %d: ", cont);

            memset(buffer, 0, 100); // reseta o buffer de leitura
            fgets(buffer, 100, stdin); // le a linha inteira como string

            float curr_value = atof(buffer);

            //scanf("%f", &nota);
            total = total + curr_value;
        }

        media = total / 4;
        printf("Nota média: %.2f\n\n", media);


        printf("Deseja calcular a média de mais algum aluno? Para prosseguir digite qualquer tecla ou para finalizar: 'F'");

        memset(buffer, 0, 100);
        fgets(buffer, 100, stdin);
        cod = buffer[0];
    }
    return 0;
}
