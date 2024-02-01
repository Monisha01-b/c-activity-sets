//Write a C program to find the [square root] of a number.

#include <stdio.h>
#include <math.h>
float input()
{
  float n;
  printf("Enter the number:\n");
  scanf("%f", &n);
  return n;
}
float square_root(float n)
  {
    float x_old = 1, x_new = n / 2;
    float precision = 0.000001;
    while (fabs(x_new - x_old) > precision)
    {
        x_old = x_new;
        x_new = (x_old + n / x_old) / 2;
    }
    return x_new;
}
void output(float n, float sqrroot)
{
  printf("the squareroot of %.2f is %.2f", n, sqrroot);
}
int main()
{
  int n, sqrroot;
  n = input();
  sqrroot = square_root(n);
  output(n, sqrroot);
  return 0;
}