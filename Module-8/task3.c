#include <stdio.h>

#define SIZE 5

int main() {
    int arr[] = {7, 2, 9, 1, 5};  // произвольная последовательность
    int *p = arr;  // указатель на первый элемент массива
                   
    // Сортировка массива по возрастанию через указатели (для медианы)
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (*(p + j) > *(p + j + 1)) {
                int temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
                
    // Вывод массива в строку через указатели
    printf("Массив: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    // Нахождение суммы для среднего
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += *(p + i);
    }
    double average = (double)sum / 5.0;
    
    // Медиана в зависимости от четности массива
    int mediana;
    if (SIZE != 0) {
        mediana = arr[SIZE / 2];
    } else {
        mediana = (arr[(SIZE - 1) / 2] + arr[SIZE / 2]) / 2.0;
    }

    // Нахождение минимума и максимума
    int min = *p;
    int max = *p;
    for (int i = 1; i < SIZE; i++) {
        if (*(p + i) < min) min = *(p + i);
        if (*(p + i) > max) max = *(p + i);
    }

    // Вывод результатов
    printf("Среднее значение: %.2f\n", average);
    printf("Медиана: %d\n", mediana);
    printf("Минимум: %d\n", min);
    printf("Максимум: %d\n", max);

    return 0;
}
