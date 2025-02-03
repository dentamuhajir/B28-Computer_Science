#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionShort(int data[], int n) {
    int i, j, min_index;
    for(i = 0; i < n - 1; i++) {
        min_index = i;

        for(j = i + 1; j < n; j++)
            if(data[j] < data[min_index]) 
                min_index = j;
        swap(&data[i], &data[min_index]);
    }
}

int main() {
    int data[] = {12, 43, 76, 64, 9, 41, 15};
    int n = sizeof(data) / sizeof(data[0]);
    selectionShort(data, n);
    puts("Array after sorting");
    for(int i = 0; i < n; i++ ) {
        printf("%d ", data[i]);
    }
}




