#include<stdio.h>
int function(int,int,int);
int main()
{

	int x,y,z,large;
	printf("Enter the values of 3 numbers");
	scanf("%d%d%d",&x,&y,&z);
	large=function(x,y,z);
	printf("%d",large);
	return 0;
}
int function(int x,int y,int z)
{
	int max = x;
	if(y>max)
	max=y;
	if(z>max)
	max=z;
	return max;
}
 



