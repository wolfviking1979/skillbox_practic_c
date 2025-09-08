#include <stdio.h>
#define SIZE 5

int main(void) {
    int numbers[SIZE];
    int count, sum, avg;

    printf("Введите пять целых чисел: ");
    /* Заполнение массива */
    for(int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    for(int i = 0; i < SIZE; i++) {
        sum += numbers[i]; /* Сумма чисел в массиве  */
        count++;           /* Количество чисел в массиве */
    }

    avg = sum / count; /* Вычисление среднего значения */
    printf("Среднее значение массива = %d\n", avg);
    return 0;
}
