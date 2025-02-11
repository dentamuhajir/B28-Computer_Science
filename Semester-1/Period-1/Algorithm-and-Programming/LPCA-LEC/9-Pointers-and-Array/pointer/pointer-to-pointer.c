#include<stdio.h>

int main() {
    int i, *ptr, **ptr_ptr;
    i = 89;
    ptr = &i;
    ptr_ptr = &ptr;
    printf("print value from *ptr = %p", ptr_ptr);
    puts("");
    printf("print value from *ptr = %d", **ptr_ptr);

}