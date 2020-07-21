#include<stdio.h>
int fun(int x);
int main()
{
	int x,answer;
	printf("Enter the number");
	scanf("%d",&x);
	answer = fun(x);
	printf("The answer of is = %d",answer);
	return 0;
}

int fun(int x)
{
	int x_cubed;
	x_cubed=x * x * x;
	return x_cubed;
}
