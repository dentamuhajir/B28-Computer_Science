#include<stdio.h>

int main() {
    int i;
    int list_data[10];
    for(i = 0; i < sizeof(list_data) / sizeof(list_data[0]); i++){
        list_data[i] = i + 1;
        printf("\nData listnya adalah %d", list_data[i]);
    }
    return 0;
}