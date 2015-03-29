#include<iostream>
#include<cstring>
#include<string>
int main()
{
	using namespace std;
	string str1,str2,str3;
	cout<<"Enter your first name:  ";
	cin>>str1;
	cout<<"Enter your last name:  ";
	cin>>str2;
	str3=str2+", "+str1;
	cout<<"Here is the information in a single string: "<<str3<<endl;


	return 0;
}