#include<iostream>
using namespace std;
int main()
{
	cout <<"enter a number in the range 1-100 to find my favorite number: ";
	int num=27;
	int in;
	cin>>in;
	while(in!=num)
	{
	if(in>num)
		cout<<"Too high -- guess again: ";
	else 
		cout<<"too low -- guess again: ";
	cin>>in;
	}
	cout<<num<<" is right!\n";
return 0;
}