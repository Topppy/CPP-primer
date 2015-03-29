#include<iostream>
using namespace std;
const int Max=5;
double* fill_array(double *begin,double*end);
void show_array(const double *begin,const double*end);
void revalue(double r,double *begin,double*end);

int main()
{
	double properties[Max];
	double* size= fill_array(properties,properties+Max);
	show_array(properties,size);
	cout<<"Enter revaluation factor: ";
	double factor;
	cin>>factor;
	revalue(factor,properties,size);
	show_array(properties,size);
	cout<<"Done.\n";
	return 0;
}

double* fill_array(double *begin,double*end)
{
	double temp;
	int i;
	double* j;
	for(j=begin,i=0;j<end;j++,i++)
	{
		cout<<"Enter value #"<<(i+1)<<": ";
		cin>>temp;
		if(!cin)
		{
			cin.clear();
			while(cin.get()!='\n')
				continue;
			cout<<"Bad input : input process terminates.\n";
			break;//get out with for{}
		}
		else if(temp<0)
			break;//get out with for{}
		*j =temp;
	}
	return j;
}

void show_array(const double *begin,const double*end)
{
	const double* j;
	int i;
	for( i=0,j=begin;j<end;j++,i++)
	{
		cout<<"Property #"<<(i+1)<<": $";
		cout<<*j<<endl;
	}
}

void revalue(double r,double *begin,double*end)
{
	double * j;
	int i;
	for(i=0,j=begin;j<end;j++,i++)
	{
		(*j)*=r;
	}
}