#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	string str1;
	string str2;
	cout<<"Enter your name: \n";
	getline(cin,str1);
	cout<<"Enter your favorite dessert:\n";
	getline(cin,str2);
	cout<<"I have somr delicious "<<str2<<" for you, "
		<<str1<<".\n";
	return 0;

}