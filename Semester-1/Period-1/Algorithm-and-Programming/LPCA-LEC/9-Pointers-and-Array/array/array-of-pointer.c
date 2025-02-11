#include<stdio.h>

int main() {
    int i;
    int *ptr[4];
    int x = 1, y = 23, z = 65;
    ptr[0] = &x;
    ptr[1] = &y;
    ptr[2] = &z;

    for(i = 0; i < sizeof(ptr) / sizeof(ptr[0]); i++) {
        printf("\n%d", *ptr[i]);
    }    
    return 0;
}