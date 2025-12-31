#include <stdio.h>

int main() {

    //B_YAKSHITA_10371
    int r, c, i, j, a[10][10], sum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter array elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        sum = 0;
        for (j = 0; j < c; j++) {
            sum += a[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
//Output
//Enter rows and columns: 2 3
//Enter array elements:
//2 5 6
//5 7 9
//Sum of row 1 = 13
//Sum of row 2 = 21
