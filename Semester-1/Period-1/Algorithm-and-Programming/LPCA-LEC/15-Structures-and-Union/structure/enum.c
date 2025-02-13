#include<stdio.h>

enum day { SUNDAY, MONDAY , TUESDAY, WEDNESDAY};
int main() {
    enum day hari;
    hari = SUNDAY;
    printf("Hari ini :  %d", hari);
    return 0;

}