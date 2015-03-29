#include<iostream>
int main()
{
	using namespace std;
	cout<<"INput first number : ";
	int num1,num2,temp;
	cin>>num1;
	cout<<"Input second number : ";
	cin>>num2;
	int sum=0;
	if (num1>num2)
	{
		temp=num1;
		num1=num2;
		num2=temp;
	}
	else 
	{
		for(int i=num1;i<=num2;i++)
			sum=sum+i;
	}
	cout<<" the sum from "<<num1<<" to "<<num2<<" is "<<sum<<endl;

	return 0;
}