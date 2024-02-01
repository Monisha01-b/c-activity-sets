//Write a C program to find the sum of _n_ complex numbers

#include<stdio.h>
struct _complex {
	float real,img;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
int main()
{
	int n=get_n();
	Complex c[n];
	input_n_complex(n,c);
	Complex result=add_n_complex(n,c);
	output(n,c,result);
	return 0;
}
int get_n()
{
	int x;
	printf("enter n value: ");
	scanf("%d",&x);
	return x;
}
Complex input_complex()
{
	Complex n;
	printf("enter the num: ");
	scanf("%f",&n.real);
	printf("enter the num: ");
	scanf("%f",&n.img);
	return n;
}
void input_n_complex(int n, Complex c[n])
{
	for(int i=0;i<n;i++)
	{
		c[i]=input_complex();
	}
}
Complex add(Complex a, Complex b)
{
	Complex result;
	result.real=a.real+b.real;
	result.img=a.img+b.img;
	return result;
}
Complex add_n_complex(int n, Complex c[n])
{
	Complex result={0,0};
	for(int i=0;i<n;i++)
	{
		result=add(result,c[i]);
	}
	return result;
}
void output(int n, Complex c[n], Complex result)
{
	printf("the result will be %f + %fi",result.real,result.img);
}