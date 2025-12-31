#include <stdio.h>

int main() {

    // B_YAKSHITA_10371
    int n, i, arr[50];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
//Output
//Enter number of elements: 5
//Enter array elements:
//3 5 2 7 6
//Reversed array:
//6 7 2 5 3

