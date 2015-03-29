#include<iostream>
using namespace std;
const int Size=30;
struct donation
{
	char name[Size];
	double money;            
};
int main()
{
	cout<<"enter the number of donation people: ";
	int num;
	cin>>num;
	if(num)
	{
		donation *p= new donation [num];// 动态结构数组
		for(int i=0;i<num;i++)
		{
			cout<<"enter the name"<<i+1<<": ";
			cin>>(*(p+i)).name;
			cout<<"enter the money"<<i+1<<": ";
			cin>>(*(p+i)).money;
		}

		cout<<"here are Grand Patrons: \n";
		int count=0;
		for(int i=0;i<num;i++)
		{
			if((*(p+i)).money>10000)
			{
				cout<<(*(p+i)).name<<"		"<<(*(p+i)).money<<" RMB\n";
				count++;
			}
		}
		if(!count)
			cout<<"none.\n";

		cout<<"Patrons: \n";
		int count0=0;
		for(int i=0;i<num;i++)
		{
			if((*(p+i)).money<=10000)
			{
				cout<<(*(p+i)).name<<"		"<<(*(p+i)).money<<" RMB\n";
				count0++;
			}
		}
		if(!count0)
			cout<<"none.\n";
		delete [] p;
	}
	else
		cout<<"none.\n";
	

	return 0;
}