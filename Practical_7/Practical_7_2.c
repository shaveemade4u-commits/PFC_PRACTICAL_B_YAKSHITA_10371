#include <stdio.h>

int main() {
    int n, i, j, s;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        for(s = 0; s < n - i; s++)
            printf(" ");
        for(j = 1; j <= 2*i-1; j++)
            printf("*");
        printf("\n");
    }

    for(i = 2; i <= n; i++) {
        for(s = 0; s < n - i; s++)
            printf(" ");
        for(j = 1; j <= 2*i-1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
