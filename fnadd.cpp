#include<stdio.h>
int add(int x,int y);
int main()
{    int a;
	a=add(30,40);
	printf("%d",a);
	a=add(2,20);
	printf("\n%d",a);
	a=add(99,10);
	printf("\n%d",a);
	return 0;
}
int add(int x,int y)
{
	int result;
	result=x+y;
	return result;
}
