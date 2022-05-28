#include <stdio.h>
#include <stdlib.h>

int main (){
    float notas[ 4 ];
    int i;

    for(i = 0; i < 4; i++) {
        printf("Entre com a %d nota do aluno: \n", i + 1);
        scanf("%f", &notas[i]);
    }

    for(i = 0; i < 4; i++){
        printf("Nota %d = %4.2f\n", i + 1, notas[i]);
    }
}
