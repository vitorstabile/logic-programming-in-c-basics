#include <stdio.h>
#include <string.h>

int main() {

    int N, i, x, sum;

    printf("How many number will be enter? ");
    scanf("%d", &N);

    sum = 0;
    for (i = 1; i <= N; i++) {
        printf("Enter a number: ");
        scanf("%d", &x);
        sum = sum + x;
    }

    printf("SUM = %d\n", sum);
    return 0;
}
