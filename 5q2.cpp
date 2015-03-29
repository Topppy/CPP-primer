#include<iostream>
int main()
{
	using namespace std;
	cout<<"input your number(enter 0 to exit) : ";
	int sum=0;
	int innum;
	cin>>innum;
	while(innum)
	{
		sum=sum+innum;
		cout<<"so far the sumof all input is : "<<sum<<endl;
		cout<<"inout your number : ";
		cin>>innum;
	}
	cout<<"DONE.\n";

	return 0;
}