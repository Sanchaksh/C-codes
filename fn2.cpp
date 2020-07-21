#include<stdio.h>
int send();
int main()
{
	int z;
	z=send();
	printf("The no. is %d\n",z);
}
int send()
{
	int x;
	printf("Enter the number");
	scanf("%d",&x);
	printf("My number is %d\n",x);
	return (x);
}
