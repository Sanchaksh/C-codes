/*
#include<stdio.h>

int main()
{
	int n,sum=0;
	for(;;)
	{
		printf("Enter the number");
		scanf("%d",&n);
		int flag=1;
		for (int i=2;i<n;i++)
		{
			if(n%i==0)
			{
				flag=0;
			break;
			}
		}
			if(flag==1)
			{
				sum = sum + n;
			}
			if(n==999)
			break;
	
	}
	printf("sum of prime no.s is %d",sum);
}*/
#include<stdio.h>

	int main()
	{
	
	int a,c=0,s=0,i;
	
	
	while(a!=999)
	{
		scanf("%d",&a);
		c=0;
		for(i=1;i<=a;i++)
		{
			
			if(a%i==0)
			{
				c++;
			}
	     } 
			if (c==2)
			{
				s=s+a;
		
			}
		
		
	}
	printf("sum %d",s);
	return 0;
	
}
