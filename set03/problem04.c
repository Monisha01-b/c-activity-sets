//Write a program to find nth number in fibonacci sequence.

#include <stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main() {
    int n, fibo;

    n = input();
    fibo = find_fibo(n);
    output(n, fibo);

    return 0;
}

int input() {
    int num;
    printf("Enter the value of n to find the nth Fibonacci number: ");
    scanf("%d", &num);
    return num;
}

int find_fibo(int n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1, temp;
    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

void output(int n, int fibo) {
    printf("The %dth Fibonacci number is: %d\n", n, fibo);
}
