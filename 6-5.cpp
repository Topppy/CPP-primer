#include<iostream>
using namespace std;
const int Arsize=6;
int main()
{
	float naaq[Arsize];
	cout<<"enter the naaqs (new age awareness auotients)"
		<<"of \nyour neighbore. program terminates "
		<<"when you make\n"<<Arsize<<" entries"
		<<"or enter a negatice value.\n";
	int i=0;
	float temp;
	cout<<"first value: ";
	cin>>temp;
	while(i<Arsize && temp>=0)
	{
		naaq[i]=temp;
		++i;
		if(i<Arsize)
		{
			cout<<"nest value: ";
			cin>>temp;
		}
	}
	if(i==0)
		cout<<"no data--bye.\n";
	else
	{
		cout<<"enter your naaq: ";
		float you;
		cin>>you;
		int count = 0;
		for(int j=0;j<i;j++)
			if(naaq[j]>you)
				++count;
		cout<<count;
		cout<<" of your naighbors have greater awareness of\n"
			<<"the new age than you do.\n";
	}

	return 0;
}