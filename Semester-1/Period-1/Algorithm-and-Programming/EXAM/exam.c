#include <stdio.h>

int main() {
    int data[] = {1, 2, 3, 4, 5};

    int n = sizeof(data) / sizeof(data[0]);

    for(int i = 0; i < n; i++) {
        printf("%d\n", *(data + i));
    }

    return 0;
}