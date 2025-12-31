#include <stdio.h>

int main() {

    // B_YAKSHITA_10371
    int n, i, arr[50], sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            sum += arr[i];
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}
//Output
//Enter number of elements: 4
//Enter array elements:
//5 6 4 8
//Sum of even elements = 18

