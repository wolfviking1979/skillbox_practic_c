#include <stdio.h>

int main(){
    int day;
    printf("Введите число от 1 до 7: ");
    scanf("%d", &day);

    switch(day) {
        case 1: 
            printf("Сегодня понедельник\n");
            break;
        case 2:
            printf("Сегодня вторник\n");
            break;
        case 3:
            printf("Сегодня среда\n");
            break;
        case 4:
            printf("Сегодня четверг\n");
            break;
        case 5:
            printf("Сегодня пятница\n");
            break;
        case 6:
            printf("Сегодня суббота\n");
            break;
        case 7:
            printf("Сегодня воскресенье\n");
            break;
        default:
            printf("Error!\n");
            printf("Вы ввели неверное число!\n");    
    }
    return 0;
}
