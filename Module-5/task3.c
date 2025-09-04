#include <stdio.h>

int main() {
    float x = 2.4f;
    float y = 3.7f;
    float b1 = x + y;
    int a = (int)(72.45 + 84.32);
    float b = (float)(44.32 + 51.54);
    float b2 = (float)53 + 2.54;
    float b3 = (float)12 + 22;
    int a2 = (int)64.2154;
    float a3 = (float)42;
    printf("%.1f\n", x);
    printf("%.1f\n", y);
    printf("%.1f\n", b1);
    printf("%d\n", a);
    printf("%.2f\n", b);
    printf("%.2f\n", b2);
    printf("%.2f\n", b3);
    printf("%d\n", a2);
    printf("%.2f\n", a3);

    return 0;
}
