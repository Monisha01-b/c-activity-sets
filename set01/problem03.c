// Write a C program to add two numbers using **pass by value**
#include <stdio.h>
int input()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    return n;
}
int add(int a, int b)
{
    int sum=0;
    sum=a+b;
    return sum;
}
void output(int a,int b,int sum)
{
    printf("The sum of %d and %d is %d",a,b,sum);
}
int main()
{
    int a,b,sum;
    a=input();
    b=input();
    sum=add(a,b);
    output(a,b,sum);
    return 0;
}