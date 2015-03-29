#include<iostream>
using namespace std;
const int strsize = 20;
struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;//0-fullname,1-title,2-bopname
};
//enum{fullname,title,bopname,preference};
int main()
{
	bop q[4]={
		{"black","professor","dog",0},
		{"clock","student","cat",1},
		{"delphy","teacher","duck",2},
		{"jack","doctor","rat",0}
	};
	cout<<"benevolent order of programmers report\n"
		<<"a.sidplay by name		b.display by title\n"
		<<"c.display by bopname     d.display by preference\n";
	char ch;
	cin>>ch;
	while(ch!='q'&&ch!='Q')
	{
		switch(ch)
		{
		case 'a' : for (int i=0;i<4;i++)
					cout<<q[i].fullname<<endl;
				break;
		case 'b' : for (int i=0;i<4;i++)
					 cout<<q[i].title<<endl;
				break;

		case 'c' : for (int i=0;i<4;i++)
					 cout<<q[i].bopname<<endl;
			  	break;
		case 'd' : for (int i=0;i<4;i++)
				{
					switch(q[i].preference)
					{
					case 0 : cout<<q[i].fullname<<endl;break;
					case 1 : cout<<q[i].title<<endl;break;
					case 2 : cout<<q[i].bopname<<endl;break;
					default: cout<<"wrong preference number\n";
					}
				}
				break;
		default : cout<<"wrong choice number.\n";
		}
		cout<<"Next choice: ";
		cin>>ch;
	}
	cout<<"bye!\n";
	return 0;
}