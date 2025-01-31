#include<stdio.h>
#include <stdlib.h>

typedef struct {
    int accountNumber;
    char name[30];
    char address[50];
    char phoneNumber[12];
    double outstandingBalance;
    double creditLimit;
} OldMast;

typedef struct { 
    int AccountNumber;
    double Amount;
} Transaction;

void saveOldMastToFile(OldMast oldMast[], int size,const char *filename) {
    FILE *file = fopen(filename, "w");  
    if (file == NULL) {
        printf("Error open file!\n");
        exit(1);
    }

    fprintf(file, "Account number\tName\t\tAddress\t\tTelephone number\tOutstanding balance\tCredit limit\n");
    
    //fprintf(file, "%d\t%s\t%s\t%s\t%.2f\t%.2f\n", oldMast.accountNumber, oldMast.name, oldMast.address, oldMast.phoneNumber, oldMast.outstandingBalance, oldMast.creditLimit);
    for (int i = 0; i < size; i++) {
        fprintf(file, "%d\t\t\t\t%s\t%s\t%s\t\t\t%.2f\t\t\t\t%.2f\n", 
            oldMast[i].accountNumber, oldMast[i].name, oldMast[i].address, oldMast[i].phoneNumber, oldMast[i].outstandingBalance, oldMast[i].creditLimit);
    }
    fclose(file);
    printf("Data berhasil disimpan di %s\n", filename);
}

void saveTransactionToFile(Transaction transaction[], int size,const char *filename) {
    FILE *file = fopen(filename, "w");  
    if (file == NULL) {
        printf("Error open file!\n");
        exit(1);
    }

    fprintf(file, "Account number\tAmount\n");
    
    for (int i = 0; i < size; i++) {
        fprintf(file, "%d\t\t\t\t%.2f\n", transaction[i].AccountNumber, transaction[i].Amount);
    }
    // fprintf(file, "%d\t\t%.2f\n", transaction.AccountNumber, transaction.Amount);

    fclose(file);
    printf("Data berhasil disimpan di %s\n", filename);
}

int main() {

    OldMast oldMast[] = {
        {100, "Alan Jones", "New York", "100-000-000", 348.17, 100.00},
        {300, "Mary Smith",	"Pasadena",	"200-000-000", 127.19,	50.00},
        {400, "Sam Sharp", "Texas", "300-000-000", 10.00, 25.00},
        {700, "Suzy Green", "Washington DC", "400-000-000", 74.22, 25.00},
    };
    const char *file1 = "oldmast.dat";
    int sizeOldMast = sizeof(oldMast) / sizeof(oldMast[0]);

    saveOldMastToFile(oldMast, sizeOldMast ,file1);

    // Transaction transaction = {200, 27.14};

    Transaction transactions[] = {
        {100, 27.14},
        {200, 35.00},
        {300, 50.25}
    };

    const char *file2= "trans.dat";

    int sizeTransaction = sizeof(transactions) / sizeof(transactions[0]);

    saveTransactionToFile(transactions, sizeTransaction ,file2);

    return 0; 1 
}