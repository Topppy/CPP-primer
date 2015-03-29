#include<iostream>
enum spectrum{red,orange,yellow,green,blue,violet,indigo,ultraviolet};
int main()
{
	using namespace std;
	spectrum band;
	int color=blue;
	cout<<color<<endl;
	band=blue;
	cout<<band<<endl;
	color=3+red;
	cout<<color<<endl;
	return 0;

}