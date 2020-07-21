#include<stdio.h>
#include<math.h>
int main()
{
	int num ,rem=0,sum=0,cube=0,t;
	printf("Enter the number");
	scanf("%d",&t);
	t=num;
	while(t!=0)
	{
		t=t/10;
		t++;
	}
	t=num;
	while(t!=0)
	{
		rem=t % 10;
		cube=pow(t,3);
		sum=sum + cube;
		t = t / 10;
	}
	if(sum == t)
	printf("The number is a armstrong number");
	else
	printf("not an armstrong number.");
}
