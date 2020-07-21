#include<stdio.h>
int main()
{
	int hours,a,emp;
	for(emp=1;emp<=10;emp++)
	{
	if(hours<40)
	printf("Enter the no. of hours");
	scanf("%d",&hours);
	{
		printf("The salary is =%d",12*hours);
	}
	 
	 if(hours>40)
	{
	 	a=hours-40;
	 	printf("The extra salary is = %d",12*a);
	}
}
	return 0;
}
