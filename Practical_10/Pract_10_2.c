#include <stdio.h>

int main() {
    int n, i, j, a[10][10], sum = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
