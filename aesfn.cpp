#include<stdio.h>
float j(float);
int main()
{	float r;
	printf("Enter the value of radius");
	scanf("%f",&r);
	j(r);
	
}
float j(float r)
{	
	printf("The area is %f",22*r*r/7);
	
}

