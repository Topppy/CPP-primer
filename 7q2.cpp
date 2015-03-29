#include<iostream>
using namespace std;
const  int Size=10;

int fill_ar(int limit,int ar[]);
void show_ar(const int ar[],int n);
double avr_ar(int ar[],int n);

int main()
{
	cout<<"Enter your score of golf(q to quit): \n";
	int a[Size];
	int n=fill_ar(Size,a);
	show_ar(a,n);
	cout<<"The average of your score is : ";
	cout<<avr_ar(a,n)<<endl;
	return 0;
}
int fill_ar(int limit,int ar[])
{
	int i;
	int temp;
	for( i=0;i<limit;i++)
	{
		cout<<"#"<<i+1<<": ";
		cin>>temp;
		if(!cin)
		{
			cin.clear();
			while(cin.get()!='\n')
				continue;
			cout<<"Input over.\n";//"Bad input: input process terminated.\n";
			break;//输入类型不正确跳出循环
		}
		else if(temp<0)
			break;//输入负值跳出循环
		ar[i]=temp;
	}
	return i;
}

void show_ar(const int ar[],int n)
{
	for(int i=0;i<n;i++)
		cout<<"score#"<<i+1<<": "
		<<ar[i]<<endl;
}

double avr_ar(int ar[],int n)
{
	double ans,sum=0;
	for(int i=0;i<n;i++)
		sum+=ar[i];
	ans=sum/n;
	return ans;
}