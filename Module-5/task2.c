#include <stdio.h>


int main() {
    int a = 12 | 5;       // 1100 | 0101 = 1101
    int b = 8 | 7;        // 1000 | 0111 = 1111
    int c = 24 | 64;      // 1 1000 | 100 0000 = 01011000
    
    int andA = 27 & 3;    // 0001 1011 & 0000 0011 = 0000 0011
    int andB = 16 & 0;    // 0001 0000 & 0000 0000 = 0000 0000
    int andC = 32 & 1;    // 0010 0000 & 0000 0001 = 0000 0000

    int numA = 5 ^ 6;     // 0000 0101 ^ 0000 0110 = 0000 0011
    int numB = 5 ^ 5;     // 0000 0101 ^ 0000 0101 = 0000 0000
    int numC = 8 ^ 0;     // 0000 1000 ^ 0000 0000 = 0000 1000


    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("andA = %d\n", andA);
    printf("andB = %d\n", andB);
    printf("andC = %d\n", andC);
    printf("numA = %d\n", numA);
    printf("numB = %d\n", numB);
    printf("numC = %d\n", numC);
    return 0;
}
