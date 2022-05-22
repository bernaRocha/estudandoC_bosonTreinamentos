#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    printf("%d\n", 6054);
    printf("%d\n", -54654);
    printf("%i\n", 3467);
    printf("%o\n", 2346);
    printf("%u\n", -2346);
    printf("%x\n", 123);
    printf("%X\n", 123);
    printf("%f\n", 123456.78);
    printf("%e\n", 123456.78);
    printf("%E\n", 1234567.78);
    printf("%s\n", "Um exemplo de string");
    printf("%c\n", 'T');
    // parei aqui https://www.youtube.com/watch?v=WC-HDwkMgGA&list=PLucm8g_ezqNqzH7SM0XNjsp25AP0MN82R&index=5
    return 0;
}
