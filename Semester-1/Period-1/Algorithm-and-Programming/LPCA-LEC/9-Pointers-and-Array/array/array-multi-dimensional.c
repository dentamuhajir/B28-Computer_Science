#include<stdio.h>

int main() {
    int data[3][2] = {  12, 2,
                        15, 3,
                        16, 34 };

    for(int i =  0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", data[i][j]);
        }

        printf("\n");
    }
}