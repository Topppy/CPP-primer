#include<iostream>
using namespace std;
const int Size=10;
double* Fill_arr(double *begin,double*end);
void  Show_arr(double *begin,double*end);
void Reverse_arr(double * begin,double *end);
int main()
{
	cout<<"fill your array with double number: \n";
	double a[Size];
	double* n;
	n=Fill_arr(a,a+Size);
	cout<<"the values of array is(q to quit) : ";
	Show_arr(a,n);
	Reverse_arr(a,n);
	cout<<"the values of the reversed array is : ";
	Show_arr(a,n);
	Reverse_arr(a+1,n-1);
	cout<<"the values of twice reversed array is : ";
	Show_arr(a,n);
	return 0;
}
double* Fill_arr(double *begin,double*end)
{
	double * i;
	double a;
	int j=0;
	for(i=begin,j;i<end;i++,j++)
	{
		cout<<"#"<<j+1<<": ";
		if(!(cin>>a))
		{
			cin.clear();
			while(cin.get()!='\n')
				continue;
			break;
		}
		else if(a<0)
			break;
		*i=a;
	}
	cout<<"Done.\n";
	return i;
}

void Show_arr(double *begin,double*end)
{
	double *j;
	int i;
	for(j=begin,i=0;j<end;j++,i++)
	{
		cout<<"value#"<<i+1<<" is : "<<*j<<endl;
	}
}


void Reverse_arr(double * begin , double * end)
{
	double temp;
	double * i;
	double * j;
	for(i=begin,j=end-1;i<j;i++,j--)
	{
		temp=*i;
		*i=*j;
		*j=temp;
	}
}