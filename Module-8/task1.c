#include <stdio.h>


int main(void) {
    float a =10.6;
    float *ptr = &a; 
    printf("Address of num: %p\n", &a);
    printf("Current value of num: %.1f\n", a);

    // Новое значение переменной через указатель
    *ptr = 23.8;
    printf("Address of num: %p\n", &a);
    printf("New value of num: %.1f\n", a);

    return 0;
}
