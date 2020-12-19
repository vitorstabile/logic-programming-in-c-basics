#include <stdio.h>
#include <string.h>

int main() {

    int M, N, i, j;

    printf("How many rows the matrix will be? ");
    scanf("%d", &M);
    printf("How many columns the matrix will be? ");
    scanf("%d", &N);

    int mat[M][N];

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("Element [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nTyped Matrix:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
