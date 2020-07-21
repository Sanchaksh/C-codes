#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,A,n,B,C,D;
	printf("Enter the value of p.");
	scanf("%f",&p);	
	printf("Enter the value of rate of interest.");
	scanf("%f",&r);
	printf("Enter the value of time. ");
	scanf ("%f",&t);
	printf("Enter the value of number of times interest is being applied in a year.");
	scanf("%f",&n);
	A=(1+r/n);
	B=n*t;
	C=pow(A,B);
	D=C*p;
	printf("The amount = %f",D);
	return 0;
	



}
