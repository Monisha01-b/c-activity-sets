//Write a C program to find the sum of _n_ complex numbers

#include<stdio.h>
struct complex
{
    float real;
    float imag;
};

typedef struct complex com;

int input()
{
    int n;
    printf("how many complex numbers you want to add: ");
    scanf("%d",&n);
    return n;
}

com input_complex(){
    com x;
    printf("enter the real number: ");
    scanf("%f",&x.real);
    printf("enter the imaginary number: ");
    scanf("%f",&x.imag);
    return x;
}

void n_complex(int n,com arr[]){
    int i;
    for(i=0;i<n;i++){
       arr[i]=input_complex();
    }
}

com add(int n,com arr[]){
    int i;
    com sum={0,0};
    for(i=0;i<n;i++){
        sum.real=sum.real+arr[i].real;
        sum.imag=sum.imag+arr[i].imag;
    }
    return sum;
}

void output(com sum){
    printf("the sum is %f+%fi",sum.real,sum.imag);
}

int main(){
    int n;
    n=input();
    com arr[n];
    n_complex(n,arr);
    com s;
    s=add(n,arr);
    output(s);
return 0;
}