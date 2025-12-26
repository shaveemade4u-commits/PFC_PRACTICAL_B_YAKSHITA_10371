#include <stdio.h>

int main() {

    //B_YAKSHITA_10371
    int limit, sum = 0, i;

    printf("Enter the limit: ");
    scanf("%d", &limit);
    for (i = 1; i <= limit; i++) {
        if (i % 2 != 0) {
            continue;
        }
        sum += i;
    }
    printf("Sum of even numbers from 1 to %d is: %d\n", limit, sum);
    return 0;
}
//Output
//Enter the limit: 9
//Sum of even numbers from 1 to 9 is: 20
