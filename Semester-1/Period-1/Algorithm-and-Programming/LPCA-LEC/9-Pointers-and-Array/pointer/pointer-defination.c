#include<stdio.h>

int main(){
    int i, *ptr;
    i = 5;
    ptr = &i;
    printf("%p", ptr);
    return 0;
}
