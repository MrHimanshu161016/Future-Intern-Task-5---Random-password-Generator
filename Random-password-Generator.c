#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Password();

int main() {
    int n;
    srand(time(NULL)); 

    printf("Enter password n: ");
    scanf("%d", &n);

    Password(n);
    return 0;
}

void Password(int n) {
    char Str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()";
    int size = sizeof(Str) - 1;

    printf("Generated Password: ");
    for (int i = 0; i < n; i++) {
        printf("%c", Str[rand() % size]);
    }
    printf("\n");
}
