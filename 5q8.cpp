#include<iostream>
#include<string>
#include<cstring>
using namespace std;
const int NUM = 100;
int main()
{
	string w;
	int count=0;
	cout<<"enter your word(done to exit):";
	while(cin>>w&&("done"!=w))
		count++;
	cout<<"you have erntered "<<count<<" words\n";
	return 0;

}