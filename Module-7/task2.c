#include <stdio.h>
#define SIZE 10

int main(void) {
    int numbers[SIZE];
    int maxNum = numbers[0];
    int indexMaxNumber;

    printf("Введите 10 целых чисел: ");
    for(int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 1; i < SIZE; i++) {
        if(numbers[i] > maxNum) {
            maxNum = numbers[i];
            indexMaxNumber = i;
        }
    
    }
    printf("Максимальное число в массиве = %d, номер элемента = %d\n", maxNum, indexMaxNumber + 1);
    return 0;
}
