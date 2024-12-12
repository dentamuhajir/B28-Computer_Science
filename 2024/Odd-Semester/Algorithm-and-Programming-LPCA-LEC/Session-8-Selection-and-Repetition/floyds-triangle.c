#include<stdio.h>
int main() {
    int number;
    printf("Enter a number to define the rows in Floyd's triangle:");
    scanf("%d", &number);
    int temp =1 ;
    for(int baris = 1; baris<=number; baris++) {
        for(int kolom = temp ; kolom<= baris + (temp - 1); kolom++) {
            printf("%d ", kolom );
        }     
        if(baris >= 1) {
            temp = baris + temp;
        }   
        printf("\n");         
    }
    return 0;
}