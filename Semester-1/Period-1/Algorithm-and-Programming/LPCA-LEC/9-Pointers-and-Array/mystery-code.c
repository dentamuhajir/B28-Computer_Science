



#include<stdio.h>
#include<string.h>
#define SIZE 80

int mystery(const char *s1, const char *s2); // prototype

int main(void) {
    char string1[SIZE];
    char string2[SIZE];
    puts("Enter two strings: ");
    scanf("%79s%79s", string1, string2);

    printf("The result is %d\n", mystery(string1, string2));
    return 0;
}

int mystery(const char *s1, const char *s2) {
    int result = 1;
    for(;*s1!='\0' && *s2!='\0';++s1,++s2) {
        if(*s1!=*s2){
            result = 0;
        }
    }
    return result;
}