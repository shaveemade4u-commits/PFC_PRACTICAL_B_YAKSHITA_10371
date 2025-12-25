#include <stdio.h>

int main() {
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
