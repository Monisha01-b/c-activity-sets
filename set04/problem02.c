//Write a program to find the smallest of three fractions

#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction(char *prompt_msg);
Fraction find_smallest_fraction(Fraction f1, Fraction f2, Fraction f3);
void output(Fraction smallest);

int main() {
    Fraction f1, f2, f3, smallest;

    printf("Enter fractions:\n");
    f1 = input_fraction("1st fraction (numerator denominator): ");
    f2 = input_fraction("2nd fraction (numerator denominator): ");
    f3 = input_fraction("3rd fraction (numerator denominator): ");

    smallest = find_smallest_fraction(f1, f2, f3);

    output(smallest);

    return 0;
}

Fraction input_fraction(char *prompt_msg) {
    Fraction f;
    printf("%s", prompt_msg);
    scanf("%d %d", &f.num, &f.den);
    return f;
}

Fraction find_smallest_fraction(Fraction f1, Fraction f2, Fraction f3) {
    double value1 = (double)f1.num / f1.den;
    double value2 = (double)f2.num / f2.den;
    double value3 = (double)f3.num / f3.den;

    if (value1 <= value2 && value1 <= value3)
        return f1;
    else if (value2 <= value1 && value2 <= value3)
        return f2;
    else
        return f3;
}

void output(Fraction smallest) {
    printf("The smallest fraction is %d/%d\n", smallest.num, smallest.den);
}
