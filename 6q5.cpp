#include<iostream>
using namespace std;
int main()
{
	cout<<"enter you income: ";
	double income;
	while(cin>>income&&income>=0)
	{
		double tex;
		if(income<=5000)
			tex=0.0;
		else if(income>5000&&income<=15000)
			tex=0.0+(income-5000)*0.10;
		else if(income>15000&&income<=35000)
			tex=0.0+10000*0.10+(income-15000)*0.15;
		else
			tex=0.0+10000*0.10+20000*0.15+(income-35000)*0.20;
		cout<<"the tex of income "<<income<<" is "<<tex<<" tvarps"<<endl;
		cout<<"next income: ";	                                                     
	}
	cout<<"bye!\n";
}