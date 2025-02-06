#include <stdio.h>
#include <string.h>
int main() {
    char password[20];
    int attempt = 0;
    const char correctPassword[] = "secret";
    printf("Enter the password: ");
    while (1) {
        scanf("%19s", password);
        if (strcmp(password, correctPassword) == 0) {
            printf("Password correct!\n");
            break; 
        } else {
            printf("Password incorrect, try again: ");
            attempt++;
            if (attempt >= 3) {
                printf("Too many failed attempts. Exiting.\n");
                break;
            }
        }
    }
    return 0;
}