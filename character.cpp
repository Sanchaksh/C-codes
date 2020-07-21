#include<stdio.h>
int main()
{
int c;
float a,b,d;
printf("Enter the numbers\n");
scanf("%f%f",&a,&b);
d=a/b;
c=(int)d;
printf("Result without type casting is %f\n",d);
printf("Result with type casting is%d",c);
}
