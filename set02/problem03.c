//Write a program find whether a number is a composite number

#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main() {
    int n, result;

    n = input_number();
    result = is_composite(n);
    output(n, result);

    return 0;
}

int input_number() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int is_composite(int n) {
    int i, count = 0;

    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            count++;
            break;
        }
    }

    if (count == 0 && n != 1)
        return 0; // It's not a composite number
    else
        return 1; // It's a composite number
}

void output(int n, int result) {
    if (result == 1)
        printf("%d is a composite number.\n", n);
    else
        printf("%d is not a composite number.\n", n);
}
