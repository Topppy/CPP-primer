#include<iostream>
using namespace std;
const int N=4;
double calculate(double a,double b,double (*ps)(double,double));
double add(double x,double y);
double minus(double x,double y);
double multi(double x,double y);
double divide(double x,double y);

int main()
{
	cout<<"Enter two number: ";
	double num1,num2;
	double (*pf[N]) (double,double)={add,minus,multi,divide};
	//pf[0]=add;
	//pf[1]=minus;
	//pf[2]=multi;
	//pf[3]=divide;
	while(cin>>num1>>num2)
	{
		for(int i=0;i<N;i++)
		{
			cout<<"value #"<<i+1<<": "<<calculate(num1,num2,pf[i])<<endl;
		}
		cout<<"Next two number(q to quit): ";
	}
	cout<<"Done.\n";
	return 0;
}
double add(double x,double y)
{
	return(x+y);
}
double minus(double x,double y)
{
	return(x-y);
}
double multi(double x,double y)
{
	return(x*y);
}
double divide(double x,double y)
{
	return(x/y);
}

double calculate(double a,double b,double (*ps)(double,double))
{
	return((*ps)(a,b));
}