#include <stdio.h>

int main() {

    //B_YAKSHITA_10371
    int correct_pin = 1234; 
    int entered_pin;        
    int attempts = 0;       
    int max_attempts = 3;   

    while (attempts < max_attempts) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &entered_pin);

        if (entered_pin == correct_pin) {
            printf("\nPIN authenticated successfully! Welcome.\n");
            break; 
        } else {
            attempts++;
            printf("\nIncorrect PIN. You have %d attempts remaining.\n", max_attempts - attempts);
        }
    }
    if(attempts == max_attempts) {
       printf("\nToo many incorrect attempts. Your card is blocked.\n"); 
    }
    return 0; 
}
//Output
//Enter your 4-digit PIN: 4566

//Incorrect PIN. You have 2 attempts remaining.
//Enter your 4-digit PIN: 8764

//Incorrect PIN. You have 1 attempts remaining.
//Enter your 4-digit PIN: 1234

//PIN authenticated successfully! Welcome.
