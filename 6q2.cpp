#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	double db;
	double d[10];
	int i=0,count=0;
	cout<<"enter your donations: ";
	//cin>>db;
	while(i<10 && cin>>db)
	{
		d[i]=db;
		i++;
		cout<<"enter your donations: ";
	}
	double avr=0.0,sum=0.0;
	for(int j=0;j<i;j++)
	{
		sum+=d[j];
	}
	avr=sum/i;
	for(int j=0;j<i;j++)
	{
		if(d[j]>avr)
			count++;
	}
	cout<<"the average of "<<i<<" donations is "<<avr<<" .\n";
	cout<<count<<" donations is more than average.\n";
	return 0;
}