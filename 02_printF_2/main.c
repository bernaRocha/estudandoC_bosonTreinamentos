#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    // Trabalhando com tamanhos de campos
    printf("%d\n",6);
    printf("%5d\n",6);
    printf("%10d\n",6);
    printf("%10d\n",700);
    printf("%c\n",'T');
    printf("%1c\n",'A');
    printf("%2c\n",'B');
    printf("%3c\n",'C');
    printf("%4c\n",'D');
    printf("%10f\n",23.8);
    // Alinhando os caracteres a esquerda
    printf("%-10d\n",700);

    // precisao da exibicao dos dados

    int x = 450;
    float f = 250.12345;
    char s[] = "Boson Treinamentos";

    printf("Precisao em inteiros:\n");
    printf("d%\n",x);
    printf("%.5d\n",x);
    printf("%.12d\n",x);
    printf("%\n\nPrecisao em ponto-flutuante:\n");
    printf("%f\n",f);
    printf("%.2f\n",f);
    printf("%\n\nPrecisao em literais:\n");
    printf("%s\n",s);
    printf("%.5s\n",s);
    printf("%.18s\n",s);
    return 0;
}
