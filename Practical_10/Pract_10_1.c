#include <stdio.h>

int main() {

    // B_YAKSHITA_10371
    int r, c, i, j, a[10][10], max, min;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter array elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    max = min = a[0][0];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] > max)
                max = a[i][j];
            if (a[i][j] < min)
                min = a[i][j];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
//Output
//Enter rows and columns: 2 3
//Enter array elements:
//1 3 5
//7 9 4
//Maximum = 9
//Minimum = 1
