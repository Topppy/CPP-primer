#include<iostream>
using namespace std;
int main()
{
	cout<<"Type,and I shall repeat.";
	char ch;
	cin.get(ch);
	while(ch!='.')
	{if(ch=='\n')
		cout<<ch;
	else
		cout<<++ch;//如果将++ch改为ch+1则输出全为数字
	cin.get(ch);
	}
	return 0;
}