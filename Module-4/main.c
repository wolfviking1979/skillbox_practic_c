#include <stdio.h>

float glob_number1 = 2.78f;
int glob_number2 = 651;
int glob_number3 = 22;
int glob_number4 = 57;
float glob_number5 = 518.f;
float glob_number6 = 43.15432f;

void printVar(void) {
    float number1 = 1.32f;
    int number2 = 15;
    float number3 = 0.1567f;
    int number4 = 22;
    int number5 = 518;
    float number6 = 287.154f;
    printf("%f; %d; %f; %d; %d; %f\n", number1, number2, number3, number4, number5, number6);
}

void printVar2(void) {
    static int number = 5;
    number++;
    printf("%d\n", number);
}

int main(void) {
    printVar();
    printf("%f; %d; %d; %d; %.1f; %f\n", glob_number1, glob_number2, glob_number3, glob_number4, glob_number5,
           glob_number6);
    printVar2();
    printVar2();
    printVar2();
    printVar2();
    printVar2();
    return 0;
}