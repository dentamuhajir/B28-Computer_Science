#include<stdio.h>

int main() {
    int num[] = { 1, 2, 3, 3, 2, 56, 2, 4 };
    int mode, count1 = 0, count2 = 0;
    int n = sizeof(num) / sizeof(num[0]);

    int temp;

    for(int i = 1; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(num[i] > num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }   
    }

    for(int i=0; i<n; i++) {
        printf("%d ", num[i]);
    }

    puts("");
    mode = num[0];
    count1 = 0;
    int j;
    for(int i = 0; i< n;) {
        for(j = i; j < n; j++) {
            if(num[i] == num[j]) {
                count2++;
            } else {
                if(count2 > count1) {
                    count1 = count2;
                    mode = num[i];
                }
                count2=0;
                break;
            }
        }
        i = j;
    }
    printf("Mode = %d ", mode);
    puts("");

}
