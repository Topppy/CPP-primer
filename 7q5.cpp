#include<iostream>
using namespace std;
unsigned long long factorial(int n);
int main()
{
	int num;
	unsigned long long fac;
	cout<<"Enter the number of factorial(less than 66): ";
	while(cin>>num)
	{
		fac=factorial(num);
		cout<<"The factorial of "
			<<num<<" is :"<<fac<<endl;
		cout<<"Next number(q to quit): ";
	}
	return 0;
}
unsigned long long factorial(int n)
{
	unsigned long long subfac=1;
	if(n<=0)
		return subfac;
	subfac=n*(factorial(n-1));
}
