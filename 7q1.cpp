#include<iostream>
using namespace std;
double avr(int x,int y);
int main()
{
	cout<<"Enter two number(0 to quit): ";
	int a,b;
	double ans;
	while(cin>>a>>b)
	{
		if(a==0||b==0)
			break;
		ans=avr(a,b);
		cout<<"The avr of "<<a<<" and "<<b<<" is "<<ans<<endl;
	}
	cout<<"Done.\n";
	return 0;
}
double avr(int x, int y)
{
	double ans;
	ans=2.0*x*y/(x+y);
	return ans;
}