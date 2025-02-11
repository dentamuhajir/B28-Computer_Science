#include<stdio.h>

int main() {
    int data[] = { 1, 2, 3, 4, 5 };

    for(int i = 0; i< sizeof(data) / sizeof(data[0]); i++) {
        printf("\n%i", data[i]);
    }

}