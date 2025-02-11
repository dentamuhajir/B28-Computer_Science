#include<stdio.h>
void pattern1();
void pattern2();
void pattern3();
void pattern4();

int main(){
    // pattern1();
    // pattern2();
    pattern3();
    //pattern4();
}

// 000000
// 111111
// 222222
// 333333
// 444444
// 555555
void pattern1() {
     for(int i=0; i < 10;i++){
        for(int j = 0; j <10; j++) {
            printf("%d", i);
        }
        puts("");
    }
}

// 0
// 0 1
// 0 1 2
// 0 1 2 3
// 0 1 2 3 4
void pattern2() {
    for(int i = 0; i < 5 ; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%d ", j);
        }
        puts("");
    }
}

// * * * *
//   * * * *
// * * * *
//   * * * *
// * * * *
//   * * * *
void pattern3() {

    for(int i=0 ; i<6; i++) {
        if(i%2 != 0) {
            printf(" ");
        }
        for(int j = 0; j < 4; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
}

// 0
// 1  2
// 3  4  5
// 6  7  8  9
// 10 11 12 13 14
void pattern4() {
    int num = 0;
    for(int i = 0; i < 5 ; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%d ", num++);
        }
        puts("");
    }
}