#include <stdio.h>

void swap(int *a, int *b) {

    //B_YAKSHITA_10371
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("After swap: %d %d", x, y);
    return 0;
}
//Output
//Enter two numbers: 6 7
//After swap: 7 6
