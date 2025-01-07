#include <stdio.h>

int main() {
    int n;
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);
    int sum = 0;
  
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) { // Check if 'i' is odd
            sum = sum + i;
        } else {
            sum = sum - i;
        }
    }
    printf("THE SUM IS %d\n", sum);
    return 0;
}
