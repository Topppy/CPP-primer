#include<iostream>
int main()
{
	using namespace std;
	double Dp=0.10;
	double Cp=0.05;
	double DSum=100,CSum=100;
	int count=0;
	while(CSum<=DSum)
	{
		DSum=DSum+100*Dp;
		CSum=CSum*(1+Cp);
		count++;
		cout<<count<<" years "<<"the money of Daphone is "<<DSum<<endl
		<<"the money of Cloe is "<<CSum<<endl;
	}	 
	cout<<count
		<<" years later the money Cloe earn will much than Daphane.\n"
		<<"the money of Daphone is "<<DSum<<endl
		<<"the money of Cloe is "<<CSum<<endl;
	return 0;
}