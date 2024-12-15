#include<stdio.h>

int main() {
    int fib[10];
    int *ptr = fib;
    *ptr = 0;
    *(ptr + 1) = 1;

    for(int i = 2; i < 10 ; i++) {
        *(ptr + i ) = *(ptr + i - 1) + *(ptr + i - 2);
    }

    for(int i = 0; i < 10; i++) {
        printf("%d \n", *(ptr + i));
    }

    return 0;
}