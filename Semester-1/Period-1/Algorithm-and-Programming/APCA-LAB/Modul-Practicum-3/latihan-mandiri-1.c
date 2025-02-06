#include<stdio.h>
#include<string.h>

struct mhs {
    char nim[9];
    char name[26];
    float gpa;
};

int main() {
    struct mhs lia;
    float wgpa;
    scanf("&s", lia.nim);
    fflush(stdin);
    gets(lia.name);
    scanf("%f", &wgpa);
    lia.gpa = wgpa;
    printf("%s %s %.2f", lia.nim, lia.name, lia.gpa);
    return 1;
}