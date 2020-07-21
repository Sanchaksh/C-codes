#include<stdio.h>
int main()
{
float a,b;
char q;
printf("What do you want to do? A= add, S=sub, M=multiply, D=divide");
scanf("%c",&q);
if(q=='A')
{
  	scanf("%f%f",&a,&b);
	printf("%f\n",a+b);
}
if(q=='S')
{
	scanf("%f%f",&a,&b);
	printf("%f\n",a-b);
}
if(q=='M')
{
	scanf("%f%f",&a,&b);
	printf("%f\n",a*b);
}
if(q=='D');
{
	scanf("%f%f",&a,&b);
	printf("%f\n",a/b);
	return 17;
}
getch();
}
