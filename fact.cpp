#include<iostream>
using namespace std;
int main()
{
	int n,i,fact=1;
	cout<<"Enter the number to find the factorial"<<endl;
	cin>>n;
/*	while(n>0)
	{
		fact=fact*n;
		n--;
	}
*/
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}
	cout<<fact;
}
