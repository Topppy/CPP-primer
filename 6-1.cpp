#include<iostream>
using namespace std;
int main ()
{
	int total=0;
	int spa=0;
	char ch;
	cin.get(ch);
	while(ch!='.')
	{
		if(ch==' ')
			spa++;
		total++;
		cin.get(ch);
	}
	cout<<spa<<" spaces,"<<total<<" characters";
	return 0;
}