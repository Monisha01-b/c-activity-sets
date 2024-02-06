//Write a C program to compare three numbers using **pass by reference**

#include <stdio.h>
int input()
{
    int n;
    printf("Enter the first number\n");
    scanf("%d",&n);
    return n;
}
void compare(int a, int b, int c, int *largest)
{
    if(a>=b && a>=c)
    {
        *largest=a;
    }
       else if(b>=a && b>=c)
    {
        *largest=b;
    }
    else
    {
        *largest=c;
    }
}
void output(int a, int b, int c, int largest)
{
    printf("The greatest of %d ,%d and %d is %d",a,b,c,largest);
}
int main()
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;

}