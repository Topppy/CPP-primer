#include<iostream>
using namespace std;
long double prob(unsigned numbers,unsigned picks);
int main ()
{
	double total,choices;
	cout<<"enter total number of choices in thr game card and\nthe number of picks allowed:\n";
	while((cin>>total>>choices)&&(choices<=total))
	{
		cout<<"you have one changce in ";
		cout<<prob(total,choices);
		cout<<" of winning.\n";
		cout<<"Next two numbers(q to quit): ";
	}
	cout<<"bye.\n";
	return 0;
}
long double prob(unsigned  a,unsigned  b)
{
	long double total=1.0;
	for(;b>0;a--,b--)
		total=total*a/b;
	return total;
	
}