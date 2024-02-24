//Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.

#include <stdio.h>
#include <stdbool.h>

int input_array_size();
void init_array(int n, int a[n]);
void eratosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main() {
    int n = input_array_size();
    int primes[n + 1];
    
    init_array(n + 1, primes);
    eratosthenes_sieve(n, primes);
    output(n, primes);
    
    return 0;
}

int input_array_size() {
    int num;
    printf("Enter the upper limit (n): ");
    scanf("%d", &num);
    return num;
}

void init_array(int n, int a[n]) {
    for (int i = 0; i < n; i++) {
        a[i] = 1; // Initialize all numbers as potential primes
    }
}

void eratosthenes_sieve(int n, int a[n]) {
    for (int i = 2; i * i <= n; i++) {
        if (a[i] == 1) {
            for (int j = i * i; j <= n; j += i) {
                a[j] = 0; // Mark multiples of prime numbers as non-prime
            }
        }
    }
}

void output(int n, int a[n]) {
    printf("Prime numbers between 2 and %d are: ", n);
    for (int i = 2; i <= n; i++) {
        if (a[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
