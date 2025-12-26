#include <stdio.h>

void printTriangle(int n) {

    //B_YAKSHITA_10371
    int i, j;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printTriangle(n);
    return 0;
}
//Output
//Enter n: 5
//*
//**
//***
//****
//*****
