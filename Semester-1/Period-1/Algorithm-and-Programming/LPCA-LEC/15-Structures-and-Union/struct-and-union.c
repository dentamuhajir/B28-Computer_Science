#include<stdio.h>
#include<string.h>

struct Address {
    char streetAddress[25];
    char city[20];
    char state[30];
    char zipCode[6];
};

union Data {
    char c[20];
    short s;
    long b;
    float f;
    double d;
};

void printAddressStruct();
void printDataUnion();

int main(){
    printAddressStruct();
    printDataUnion();
    return 0; 
}

void printDataUnion() {
    union Data data;
    puts("====== Union ======");
    strcpy(data.c, "data");
    printf("Print data type char %s:", data.c);
    data.s = 7;
    printf("Print data type short: %d\n", data.s);
    data.b = 74;
    printf("Print data type long: %ld\n", data.b);
    data.f = 7.6f;
    printf("Print data type float: %f\n", data.f);
    data.d = 76.4;
    printf("Print data type double: %f\n", data.d);
}

void printAddressStruct() {
    struct Address address;
    puts("====== Struct ======");
    strcpy(address.streetAddress, "jl. MH Thamrin");
    strcpy(address.city, "Jakarta");
    strcpy(address.state, "Indonesia");
    strcpy(address.zipCode, "57721");

    printf("Street address : %s\n", address.streetAddress);
    printf("City : %s\n", address.city);
    printf("State : %s\n", address.state);
    printf("Zip Code : %s\n", address.zipCode);

}

