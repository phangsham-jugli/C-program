#include <stdio.h>
#include <math.h>

int main() {
    int n, i, num, digit, sum, count, temp;

    printf("Enter the range (n): ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are:\n", n);

    for(i = 1; i <= n; i++) {
        num = i;
        sum = 0;

        // count digits
        count = 0;
        temp = i;
        while(temp > 0) {
            count++;
            temp /= 10;
        }

        // calculate sum of digits^count
        temp = i;
        while(temp > 0) {
            digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }

        if(sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
