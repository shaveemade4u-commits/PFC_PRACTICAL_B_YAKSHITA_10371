#include <stdio.h>

int main() {
    
    // B_YAKSHITA_10371
    int a, b, i;

    printf("Enter the starting number (a): ");
    scanf("%d", &a);
    printf("Enter the ending number (b): ");
    scanf("%d", &b);

    printf("Numbers from %d to %d are: ", a, b);
    for (i = a; i <= b; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
//Output
//Enter the starting number (a): 4
//Enter the ending number (b): 9
//Numbers from 4 to 9 are: 4 5 6 7 8 9 
