#include <stdio.h>


int main(void) {
    /* Объявляем массив A (4 строки, 5 столбцов) 
     * как float для вещественных чисел */
    float numbersA[4][5] = {
        {1.5, 2.0, 3.0, 4.0, 5.0},
        {-2.0, 1.0, -3.0, 4.0, 0.5},
        {0.0, 1.0, -3.0, 4.0, 2.0},
        {-1.0, -2.0, -3.0, -4.0, -5.9}
    };

    // Объявляем массив B (4 элемента)
    float numbersB[4];

    for (int i = 0; i < 4; i++) {
        if (numbersA[i][0] >= 0) {
        // Ищем максимум в строке i
        float max_val = numbersA[i][0];
        for (int j = 1; j < 5; j++) {
           if (numbersA[i][j] > max_val) {
               max_val = numbersA[i][j];
                 } 
            }
            numbersB[i] = max_val;
        } else {
            // Ищем минимум в строке
            float min_val = numbersA[i][0];
            for (int j = 1; j < 5; j++) {
                if (numbersA[i][j] < min_val) {
                    min_val = numbersA[i][j];
                }
            }
            numbersB[i] = min_val;
        }
    }
    // Вывод результата
    printf("Массив B\n");
    for (int i = 0; i < 4; i++){
        printf("B[ %d ] = %.2f\n", i, numbersB[i]);
    }
    return 0;
}
