#include<iostream>
#include<string>
int main()
{
using namespace std;
int num[3][12];
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
long sum=0 ;
long ysum[3];
for(int j=0;j<3;j++)
{	
	for(int i=0;i<12;i++)
	{
		cout<<"enter the sold number of "<<mon[i]<<" of "<<j+1<<" year: "<<endl;
		cin>>num[j][i];
		sum+=num[j][i];
	}
ysum[j]=sum;
}
cout<<"the tatal number of books sold in 3 years is "<<sum<<endl;
cout<<"the tatal number of books sold in the first year is"<<ysum[0]<<endl;
cout<<"the tatal number of books sold in the second year is"<<ysum[1]-ysum[0]<<endl;
cout<<"the tatal number of books sold in the third year is"<<ysum[2]-ysum[1]<<endl;
return 0;
}