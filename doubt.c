#include<stdio.h>
int main()
{
	int a,b,res=1;
	printf("Enter the two numbers.");
	scanf("%d%d",&b,&a);
	while(a>0)
	{
		res=res*b;
		a--;
	}
	printf("the answer is = %d",res);
	return 0;
}
