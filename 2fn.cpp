#include<iostream>
using namespace std;
void msg1();
void msg2();
int main()
{
	cout<<"I am in main\n";
	msg1();
	msg2();
	return 0;
}
void msg1()
{
	cout<<"Hello";
}
void msg2()
{
	cout<<"World";
}
