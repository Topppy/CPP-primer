#include<iostream>
using namespace std;
const int Size=10;
int Fill_arr(double ar[],int limit);
void  Show_arr(const double ar[],int n);
void Reverse_arr(double * begin,double *end);
int main()
{
	cout<<"fill your array with double number: \n";
	double a[Size];
	int n;
	n=Fill_arr(a,Size);
	cout<<"the values of array is(q to quit) : ";
	Show_arr(a,n);
	Reverse_arr(a,a+n);
	cout<<"the values of the reversed array is : ";
	Show_arr(a,n);
	Reverse_arr(a+1,a+n-1);
	cout<<"the values of twice reversed array is : ";
	Show_arr(a,n);
	return 0;
}
int Fill_arr(double ar[],int limit)
{
	int i=0;
	double a;
	for(i;i<limit;i++)
	{
		cout<<"#"<<i+1<<": ";
		if(!(cin>>a))
		{
			cin.clear();
			while(cin.get()!='\n')
				continue;
			break;
		}
		else if(a<0)
			break;
		ar[i]=a;
	}
	cout<<"Done.\n";
	return i;
}

void Show_arr(const double ar[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"value#"<<i+1<<" is : "<<ar[i]<<endl;
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