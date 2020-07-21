#include<stdio.h>
void calsum();
int main()
{
	int a,b,c,sum;
	printf("Enter the numbers");
	scanf("%d%d%d",&a,&b,&c);
	sum=calsum(a,b,c);
	return 0;
}
void calsum(x,y,z)
{
	int d;
	d=x+y+z;
	printf("The sum is %d",&d)
}
