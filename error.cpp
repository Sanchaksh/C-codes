#include<iostream>
using namespace std;
int fun()
{
	return 1;
}
float fun()
{
	return 10.23;
}
void main()
{
	cout<<(int)fun()<<endl;
	cout<<(float)fun();
}
