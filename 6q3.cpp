#include<iostream>
using namespace std;
int main()
{
	cout<<"please enter one of the following choices: \n"
		<<"c) carnivore				p) pianist\n"
		<<"t) tree					g)game\n";
	char ch;
	cin.get(ch);
	while(ch!='c' && ch!='p' && ch!='t' && ch!='g')
	{
		cout<<"please enter a c,p,t,g: ";
		cin.get(ch);
	}
	switch(ch)
	{
		case 'c' : cout<<"a maple is a carnivore" ;
			break;
		case 'p' : cout<<"a maple is a pianist";
			break;
		case 't' : cout<<"a maple is a tree";
			break;
		case 'g' : cout<<"a maple is a game";
			break;
		default  : cout<<"ERRER";
	}
	return 0;

}