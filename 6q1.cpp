#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char c[100];
	char ch;
	int i=0;
	cout<<"enter your words('@' to quit): ";
	cin.get(ch);
	while(ch!='@')
	{
		if(!isdigit(ch))
		{
			if(isupper(ch))
				c[i]=ch+32;
			else
				c[i]=ch;
			i++;
		}
		cin.get(ch);
	}
	cout<<"the words you 've entered are: ";
	for(int j=0;j<=i;j++)
	{
		cout<<c[j];
	}
	return 0;
}