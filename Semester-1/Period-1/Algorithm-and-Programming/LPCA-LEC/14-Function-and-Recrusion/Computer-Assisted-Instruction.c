#include<stdio.h>                                                                                   
#include<stdlib.h>
#include<time.h>

void generateQuestion() {
    srand(time(NULL));
    int number1 = rand() % 10;
    int number2 = rand() % 10;
    int result = 0;
    int answer;
    question:
    printf("How much is %d times %d? ", number1, number2);
    scanf("%d", &answer);
    result = number1 * number2;
    if(answer == result) {
        puts("Very good!");
        generateQuestion();
    } else {
        puts("No. Please try again");
        goto question;  
    }
}

int main() {
    generateQuestion();
    return 0;
}