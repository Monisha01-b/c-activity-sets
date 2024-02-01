// Write a C program to find the sum of 2 complex numbers

#include<stdio.h>
struct _complex
 {
   float real;
   float imaginary;
}; 
typedef struct _complex Complex;

Complex input_complex()
{
Complex num;
printf("enter the real num:");
scanf("%f",&num.real);
printf("enter the imaginary num:");
scanf("%f",&num.imaginary);
return num;
}
Complex add_complex(Complex a, Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}
void output(Complex a,Complex b,Complex sum)
{
    printf("the sum of %2.f+%2.fi and %2.f+%2.fi is %2.f ",a.real,a.imaginary,b.real,b.imaginary);
}
int main()
{
    Complex num1,num2,result;
    printf("enter the 1st complex number\n");
    num1=input_complex();
     printf("enter the 2nd complex number\n");
    num2=input_complex();
    result=add_complex(num1,num2);
    output(num1,num2,result);
    return 0;
}