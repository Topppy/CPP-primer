#include<iostream>
using namespace std;
void n_chars(char,int);
int main()
{
	cout<<"Enter a character: ";
	char ch;
	int n;
	cin>>ch;
	while(ch!='q')
	{	
		cout<<"Enter an integer: ";
		cin>>n;
		n_chars(ch,n);
		cout<<"Enter another character or press q-key to quit: ";
		cin>>ch;
	}
	cout<<"the value of times is "<<n<<" .\n";
	cout<<"bye.\n";
	return 0;
}
void n_chars(char a,int b)
{
	for(int i=0;i<b;i++)
	{
		cout<<a;
	}
	cout<<endl;
}