#include<stdio.h>
int main() {
    int num = 8;    
    for(int i=0; i<num; i++) {
        if(i%2 == 1) {
            printf("%s"," ");
        }
        for(int j=0; j<num; j++) {
            printf("%s","* ");   
        }
        puts("");
    }
    return 0;
}