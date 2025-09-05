#include <stdio.h>

int main() {
    int size;
   
    printf("Введите количество чисел: ");
    scanf("%d", &size);

    int numbers[size];

    printf("Введите %d чисел:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);

    }
    
    // Вывод исходных данных
    printf("Исходные данные:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Сортировка пузырьком по возрастанию
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - 1 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Обмен значение
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Вывод отсортированных данных
    printf("Отсортированные данные:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}
