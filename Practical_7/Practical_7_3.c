#include <stdio.h>

int main() {

    //B_YAKSHITA_10371
    char i, j;
    for(i = 'A'; i <= 'D'; i++) {
        for(j = 'A'; j <= i; j++)
            printf("%c", j);
        printf("\n");
    }
    return 0;
}
//Output
//A
//AB
//ABC
//ABCD
