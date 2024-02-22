//Write a program to find if a triangle is scalene

#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main() {
    int a, b, c;
    int is_scalene;

    a = input_side();
    b = input_side();
    c = input_side();

    is_scalene = check_scalene(a, b, c);

    output(a, b, c, is_scalene);

    return 0;
}

int input_side() {
    int side;
    printf("Enter the length of a side: ");
    scanf("%d", &side);
    return side;
}

int check_scalene(int a, int b, int c) {
    if (a != b && b != c && a != c)
        return 1; // Scalene triangle
    else
        return 0; // Not a scalene triangle
}

void output(int a, int b, int c, int is_scalene) {
    printf("Side a: %d\n", a);
    printf("Side b: %d\n", b);
    printf("Side c: %d\n", c);
    if (is_scalene)
        printf("The triangle with sides %d, %d, %d is scalene.\n", a, b, c);
    else
        printf("The triangle with sides %d, %d, %d is not scalene.\n", a, b, c);
}
