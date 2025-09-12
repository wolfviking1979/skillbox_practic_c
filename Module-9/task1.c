#include <stdio.h>


unsigned long long fibonachiNum(int num) {
    if (num < 2) return 0;     
    return fibonachiNum(num - 1) + fibonachiNum(num - 2);
}

int main(void) {
    int num;
    unsigned long long res;

    printf("Введите положительное целое число:\n");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Ошибка!\nВведено отрицательное число\n");
        return 1;
    }
    
    printf("Result: %llu\n", res);
    return 0;
}
