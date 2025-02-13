#include<stdio.h>
#include<string.h>

struct club {
    char name[20];
    int ranked;
    double revenue; 
} manu, liv;

typedef struct klub {
    char nama[20];
    int ranking;
    double penghasilan;
} che;
int main() {

    strcpy(manu.name, "Manchester United");
    manu.revenue = 123333;;

    printf("Struct manu name %s", manu.name);

}