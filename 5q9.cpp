#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter the num: ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		for(int j=num-i;j>0;j--)
			cout<<".";
		for(int n=i;n>0;n--)
			cout<<"*";
		cout<<endl;
	}
	return 0;
}