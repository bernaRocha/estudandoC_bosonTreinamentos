#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int X, Z, W, K, M, N;
    float F;
    X = -2 * 3;
    Z = 4 % 2;
    W = 8 /4;
    K = 7 / 2;
    F = 7.0 / 2.0;
    M = W + X;
    N = M - K;

    printf("X = -2 * 3 > X = %d\n", X);
    printf("Z = 4 % 2 > Z = %d\n", Z);
    printf("W = 8 /4 > W = %d\n", W);
    printf("K = 7 / 2 > K = %d\n", K);
    printf("F = 7.0 / 2.0 > F = %.2f\n", F);
    printf("M = W + X > M = %d\n", M);
    printf("N = M - K > N = %d\n", N);

    return 0;
}
