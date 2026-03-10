#include <stdio.h>

int main() {
    int a, b, sum, substract, multiply;
    float division; // Use float to handle decimal division

    printf("Enter any two numbers to add, subtract, multiply, and divide: ");
    scanf("%d%d", &a, &b);

    sum = a + b;
    substract = a - b;
    multiply = a * b;
    division = (float)a / b; // Cast to float for correct division

    printf("sum = %d\nsubstract = %d\nmultiply = %d\ndivision = %.2f",
           sum, substract, multiply, division);

    return 0;
}
