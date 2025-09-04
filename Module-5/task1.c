#include <stdio.h>


int main() {
    // операции сложения
    short numA = 25 + 35;
    float numB = 12.78 + 18.22;
    float numC = 21.35 + 15;
    // операции вычитания
    short numD = 17 - 6;
    short numE = 25 - 42;
    float numF = 21 - 13.54;
    // операции умножения
    short multA = 65 * 3;
    float multB = 3.14 * 2.71;
    float multC = 9.8 * 4;
    // операции деления
    short devA = 32 / 2;
    short devB = 35 / 2;
    float devC = 16.8 / 4;
    float devD = 20 / 2.5;
    // остаток от деления
    short resA = 12 % 4;
    short resB = 15 % 4;
    short resC = 27 % 3;
    short resD = (int)21.4 % 4;

    printf("%d\n", numA);
    printf("%.2f\n", numB);
    printf("%.2f\n", numC);
    printf("%d\n", numD);
    printf("%d\n", numE);
    printf("%.2f\n", numF);
    printf("%d\n", multA);
    printf("%.2f\n", multB);
    printf("%.2f\n", multC);
    printf("%d\n", devA);
    printf("%d\n", devB);
    printf("%.2f\n", devC);
    printf("%.2f\n", devD);
    printf("%d\n", resA);
    printf("%d\n", resB);
    printf("%d\n", resC);
    printf("%d\n", resD);
    return 0;
}
