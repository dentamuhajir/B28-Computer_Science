#include <stdio.h>

int main() {
    float value[5];
    float *ptr = value;
    printf("Exam score input program\n");
    for(int index = 0; index < 5; index++) {
        printf("Input score %d :",index + 1);
        scanf("%f", ptr + index + 1);        
    }   

    float max_score = 0;
    float min_score = 0;
    float avg_score = 0;    

    for(int i = 0; i < 5; i++) {
        if(i == 0) {
            min_score = *(ptr + i + 1); 
        } 

        if( *(ptr + i + 1) > max_score) {
            max_score = *(ptr + i + 1);
        } 

        if( *(ptr + i + 1) < min_score) {
            min_score = *(ptr + i + 1);
        }

        avg_score += *(ptr + i + 1);  
    }

    avg_score = avg_score / 5;

    printf("Maximal Score : %.1f \n", max_score );
    printf("Minimal Score : %.1f \n", min_score );
    printf("Average Score : %.1f \n", avg_score );
    return 0;
}