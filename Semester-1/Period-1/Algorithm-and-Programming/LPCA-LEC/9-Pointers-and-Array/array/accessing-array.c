#include<stdio.h>

int main() {
    int x[5] = { 12, 9, 35, 6, 9};
    printf("Access array index 3 with pointer : %d", *(x+2));
}