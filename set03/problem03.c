//Write a program to check if the given number is prime

#include <stdio.h>

int input_number();
int is_prime(int n);
void output(int n, int result);

int main() {
    int number, result;

    number = input_number();
    result = is_prime(number);
    output(number, result);

    return 0;
}

int input_number() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int is_prime(int n) {
    if (n <= 1)
        return 0; // Not prime if less than or equal to 1
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; // Not prime if divisible by any number other than 1 and itself
    }
    return 1; // Prime if no divisor other than 1 and itself
}

void output(int n, int result) {
    if (result)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}
