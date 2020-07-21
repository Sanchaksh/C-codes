#include<stdio.h>
int main()
{
int a,b;
printf("enter 1 to check even or odd\enter 2 to check positive or negative");
scanf("%d",a);
printf("enter the numbers");
scanf("%d",&b);
switch(a)
{
case 1:
if(b%2==0)
printf("even");
else
printf("odd");
break;
case 2:
if(b>0)
printf("positive");
else
printf("negative");
break;
 
}
}

