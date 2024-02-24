//Write a program to find whether the given 3 points form a triangle

#include <stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3);
void output(float x1, float y1, float x2, float y2, float x3, float y3, int result);

int main() {
    float x1, y1, x2, y2, x3, y3;
    int result;

    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
    result = is_triangle(x1, y1, x2, y2, x3, y3);
    output(x1, y1, x2, y2, x3, y3, result);

    return 0;
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3) {
    printf("Enter coordinates of point 1 (x1 y1): ");
    scanf("%f %f", x1, y1);

    printf("Enter coordinates of point 2 (x2 y2): ");
    scanf("%f %f", x2, y2);

    printf("Enter coordinates of point 3 (x3 y3): ");
    scanf("%f %f", x3, y3);
}

int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3) {
    // Three points form a triangle if the sum of the lengths of any two sides is greater than the length of the third side for all three combinations.
    float side1, side2, side3;

    side1 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    side2 = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
    side3 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
        return 1; // It's a triangle
    else
        return 0; // It's not a triangle
}

void output(float x1, float y1, float x2, float y2, float x3, float y3, int result) {
    if (result)
        printf("The points (%.2f, %.2f), (%.2f, %.2f), and (%.2f, %.2f) form a triangle.\n", x1, y1, x2, y2, x3, y3);
    else
        printf("The points (%.2f, %.2f), (%.2f, %.2f), and (%.2f, %.2f) do not form a triangle.\n", x1, y1, x2, y2, x3, y3);
}
