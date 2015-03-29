#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	char fname[20];
	char lname[20];
	char name[20];
	char point[5]=", ";
	cout<<"Enter your first name:  ";
	cin>>fname;
	cout<<"Enter your last name:  ";
	cin>>lname;

	strcpy(name,lname);
	strcat(name,point);
	strcat(name,fname);
	cout<<"Here is the information in a single string: "<<name<<endl;
	return 0;

}