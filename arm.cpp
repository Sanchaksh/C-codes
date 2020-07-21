#include<stdio.h>
#include<math.h>
int main()
{
	int rem,res=0,n=0,num,temp;
	printf("Enter the number.");
	scanf("%d",&num);
	temp = num;
	while(temp>0)
	{
		temp = temp/10;
		n++;
	}
	temp = num;
	while(temp>0)
	{
		rem = temp%10;
		res = res + pow(rem,n);
		temp = temp/10;
	}
	if(res == num)
	printf("Armstrong Number");
	else
	printf("Not Armstrong Number");
	return 0;
}
