#include<iostream>
//#include<cstring>
#include<string>
int main()
{
	using namespace std;
	string mon[12]=
	{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"};
	int num[12];
	long sum=0 ;
	for(int i=0;i<12;i++)
	{
		cout<<"enter the sold number of "<<mon[i]<<endl;
		cin>>num[i];
		sum+=num[i];
	}
	cout<<"the tatal sold number of books the whole year is "<<sum<<endl;


	return  0;
}