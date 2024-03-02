//Write a program to evaluate a polynomial at a given point using [Horner's Method]

#include <stdio.h>

int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);

int main() {
    int degree;
    float x, result;

    degree = input_degree();
    float coefficients[degree + 1];
    input_coefficients(degree + 1, coefficients);
    x = input_x();
    result = evaluate_polynomial(degree + 1, coefficients, x);
    output(degree, coefficients, x, result);

    return 0;
}

int input_degree() {
    int degree;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);
    return degree;
}

void input_coefficients(int n, float a[n]) {
    printf("Enter the coefficients of the polynomial (from highest degree to constant term):\n");
    for (int i = 0; i < n; i++) {
        printf("Coefficient of x^%d: ", n - i - 1);
        scanf("%f", &a[i]);
    }
}

float input_x() {
    float x;
    printf("Enter the value of x to evaluate the polynomial: ");
    scanf("%f", &x);
    return x;
}

float evaluate_polynomial(int n, float a[n], float x) {
    float result = a[0];
    for (int i = 1; i < n; i++) {
        result = result * x + a[i];
    }
    return result;
}

void output(int n, float a[n], float x, float result) {
    printf("The polynomial with coefficients ");
    for (int i = 0; i < n; i++) {
        printf("%.2f*x^%d", a[i], n - i - 1);
        if (i < n - 1)
            printf(" + ");
    }
    printf(" evaluated at x=%.2f is %.2f\n", x, result);
}