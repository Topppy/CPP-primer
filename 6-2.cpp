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
		cout<<++ch;//�����++ch��Ϊch+1�����ȫΪ����
	cin.get(ch);
	}
	return 0;
}