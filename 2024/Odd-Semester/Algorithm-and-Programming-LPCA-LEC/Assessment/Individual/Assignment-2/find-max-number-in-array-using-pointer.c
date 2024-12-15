#include<stdio.h>

int main() {
    int num[5];
    
    printf("Please input total 5 data integer: ");
    scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
    
    int *ptr = num;
    int max_num = 0;
    
    for(int i= 0 ;i < 5; i++) {
        if(*(ptr + i) > max_num) {
            max_num = *(ptr + i);
        }
    }

    printf("Max number : %d", max_num);
    return 0;
}