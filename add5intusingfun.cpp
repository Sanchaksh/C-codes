#include<stdio.h>
int fun(int,int,int,int,int);
int main()
{
	int a,b,c,d,e,x;
	printf("Enter the five numbers.\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	x=fun(a,b,c,d,e);
	printf("The sum is = %d\nThe average of the numbers is %d",x);
	return 0;
}
int fun(int a,int b,int c, int d, int e)
{
	int sum,avg;
	sum=a+b+c+d+e;
	avg=(a+b+c+d+e)/5;
	return (sum);
	return (avg);
}

