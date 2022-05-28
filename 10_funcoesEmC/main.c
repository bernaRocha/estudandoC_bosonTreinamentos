#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void escreveNome(); // protótipo de função
int main()
{
    setlocale(LC_ALL, "");
    escreveNome();
    return 0;
}

void escreveNome(){
    char nome[50];
    printf("Me diga seu nome: \n");

    // Leitura de string para nomes compostos
    fgets(nome, 50, stdin);

    // %c se fosse só um caráctere > comando para nome único
    //scanf("%s", nome);

    printf("Bem vindo à Boson Treinamentos em Tecnologia %s\n", nome);
    return 0;
}
