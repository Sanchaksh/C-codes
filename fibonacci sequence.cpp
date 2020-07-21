#include<stdio.h>
int main()
{
	int fn=0,sn=1,size,sum,i;
	printf("Enter the limit of fibonacci sequence");
	scanf("%d",&size);
	while(i<size)
	{
		sum=fn+sn;
		fn=sn;
		sn=sum;
		i++;	
	}
	
	
	
	
	
	
	
	
	
	printf("%d",sum);


}
