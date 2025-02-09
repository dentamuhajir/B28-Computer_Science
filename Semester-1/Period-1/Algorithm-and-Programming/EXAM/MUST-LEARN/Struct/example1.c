#include<stdio.h>


struct automobile {
    int year;
    char *model;
    float weight;
};


int main() {
    struct automobile sedan;
    sedan.year = 2012;
    sedan.model = "BMW";
    sedan.weight = 175.6544;


    printf("Sedan Years %d", sedan.year);
    printf("\nSedan Model %s", sedan.model);
    printf("\nSedan Weight %.2f", sedan.weight);

    return 0;
}