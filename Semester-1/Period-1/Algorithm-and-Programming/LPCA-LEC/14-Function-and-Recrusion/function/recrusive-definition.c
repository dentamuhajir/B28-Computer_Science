#include<stdio.h>

void factorial_iteration(int num);
int factorial_recrusive(int num);

int main() {
    int num;
    printf("Input a factorial number ");
    scanf("%d", &num);
    int result = factorial_recrusive(num);
    printf("Result :%d", result);
    //printf("Result %d", result);
    //factorial_iteration(num);
    puts("");
    return 0; 
}

void factorial_iteration(int n) {
    int i ;
    int fac = 1;
    for(i = 1; i <= n; i++ ){
        fac *=i;
        printf("\n %d", fac);
    }
}

int factorial_recrusive(int n) {
    if(n == 0) {
        return 1;
    } else {
        printf("");
        return  n * factorial_recrusive(n - 1);
    }
}

