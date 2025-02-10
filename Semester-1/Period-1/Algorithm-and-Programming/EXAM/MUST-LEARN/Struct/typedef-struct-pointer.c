#include<stdio.h>

struct product {
    int id;
    char name[20];
    float price;
};

typedef struct product PRD;
void InputData(PRD *ptr_s);

int main() {
    PRD prod; 
    InputData(&prod);
    printf("\n\n Product Name %19s", prod.name);
    return 0;
}


void InputData(PRD *ptr_s) {
    printf("Input product ID ");
    scanf("%d", &(*ptr_s).id );
    printf("Input product name ");
    scanf("%19s", (*ptr_s).name);
    printf("Input product price ");
    scanf("%f", &(*ptr_s).price);

}
