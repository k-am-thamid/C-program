#include <stdio.h>

int main() {
    int num, i = 1;
    long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (i <= num) {
        factorial *= i;
        i++;
    }

    printf("Factorial of %d = %lld\n", num, factorial);

    return 0;
}
