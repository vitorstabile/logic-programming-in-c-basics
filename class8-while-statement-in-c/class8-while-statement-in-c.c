#include <stdio.h>
#include <string.h>

int main() {

    int x, sum;

    sum = 0;
    printf("Enter the first number: ");
    scanf("%d", &x);

    while (x != 0) {
        sum = sum + x;
        printf("Enter another number: ");
        scanf("%d", &x);
    }

    printf("SUM = %d\n", sum);

    return 0;
}
