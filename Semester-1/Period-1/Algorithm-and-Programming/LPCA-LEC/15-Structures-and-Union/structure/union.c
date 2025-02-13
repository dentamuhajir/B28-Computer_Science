#include<stdio.h>
#include<string.h>

union Data {
    int i;
    float j;
    char z[10];

};
int main() {
    union Data data;
    data.i = 1;
    printf("data  i = %d", data.i);
    data.j = 1.5;

    printf("data  j = %f", data.j );
    printf("data  i = %d", data.i);
    strcpy(data.z, "data");
    printf("data  i = %f", data.j);
    printf("data  i = %s", data.z);
    return 0;    
}