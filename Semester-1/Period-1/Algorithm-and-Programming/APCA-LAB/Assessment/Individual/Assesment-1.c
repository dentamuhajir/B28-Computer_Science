#include <stdio.h>

int main() {
    int a, b, c;
    float result;
    printf("Input three integer number: ");
    scanf("%d %d %d", &a, &b, &c);

    result = a + b + c;
    printf("Result of adding numbers : %.0f", result);
    result = a - b - c;
    printf("\nResult of subtracting numbers : %.0f", result);

    result = a * b * c;
    printf("\nResult of multiplying numbers : %.1f", result);

    result = a / b / c;
    printf("\nResult of dividing numbers : %.1f", result);

    result = (a + b + c) / 3;
    printf("\nResult of average numbers : %.1f", result);

    return 0;
}