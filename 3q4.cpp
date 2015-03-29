#include<iostream>

int main()
{
	using namespace std;
	int day,hor,min,sec;
	long sum;
	cout<<"enter the number of seconds: ";
	cin>>sum;
	sec=sum%60;
	min=(sum/60)%60;
	hor=(sum/60/60)%24;
	day=(sum/60/60/24);
	cout<<sum<<" secods = "<<day<<" days, "<<hor<<" hours, "<<min<<" minutes, "<<sec<<" secods.\n";
	return 0;
}