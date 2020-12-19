#include <stdio.h>
#include <string.h>

int main() {

    int N, i;

    printf("How many numbers will be enter? ");
    scanf("%d", &N);

    double vet[N];

    for (i = 0; i < N; i++) {
        printf("Enter a number: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nTyped Numbers:\n");
    for (i = 0; i < N; i++) {
        printf("%.1lf\n", vet[i]);
    }

    return 0;
}
