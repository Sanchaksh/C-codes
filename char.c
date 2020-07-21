#include<stdio.h>
void main()
{
	float a,b;
	printf("Enter the base.");     //the value for which you want to find the base
	scanf("%f",&a);                // %f is the value corresponding to a decimal value
	printf("Enter the power for the base.");//the value of the power you want it to be raised
	scanf("%f",&b);                //this %f is the value of b decimal value
     printf("%.2f",pow(a,b));        //this will tell you the answer according to the formula
	getch();
}

