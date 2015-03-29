#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20]="jaguar";
	string str1;
	string str2 = "panther";

	cout<<"enter a kind of feline: ";
	cin>>charr1;
	cout<<"enter another kinde of feline: ";
	cin>>str1;
	cout<<"here are some feline:\n";
	cout<<charr1<<"  "<<charr2<<"  "
		<<str1<< ""<<str2<<endl;
	cout<<"the third letter in "<<charr2<<" is "<<charr2[2]<<endl;
	cout<<"the third letter in "<<str2<<" is"
		<<str2[2]<<endl;
	cout<<charr1<<charr2<<endl;
	strcpy(charr1,charr2);
	cout<<charr1<<charr2<<endl;
	strcat(charr1,"fuck");
	cout<<charr1<<charr2<<endl;
	cout<<str1.size()<<endl
		<<strlen(charr1)<<endl;


	return 0;
}