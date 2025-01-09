#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

bool flip() {
    bool flip = rand() & 1;
    return flip;
}

int main() {
    srand(time(NULL));
    bool result;
    int countHeads = 0,countTails = 0;
    for(int i = 0; i<100; i++) {
        result = flip();
        if(result) {
            puts("heads");
            countHeads++;
        } else {
            puts("tails");
            countTails++;
        }
    }

    printf("Total heads : %d", countHeads);
    printf("\nTotal tails : %d", countTails);
    return 0;
}