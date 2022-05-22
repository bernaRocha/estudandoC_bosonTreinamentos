#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b;
   printf("Soma de dois numeros.\n");
   printf("Digite o primeiro numero: \n");

   scanf("%d", &a);
   printf("Digite o segundo numero: \n");
   scanf("%d", &b);
   printf("\n");
   printf("A soma de %d com o %d deu: %d\n", a, b, a + b);
   return 0;
}    



