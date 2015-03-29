#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout<<"enter your name : \n";
	//cin.getline (name,ArSize);
	cin.get(name,ArSize).get();
	cout<<"enter your dessert : \n";
	//cin.getline(dessert,ArSize);
	cin.get(dessert,ArSize).get();
	cout<<"i have some delicious "<<dessert
		<<" for you, "<<name<<".\n";
	return 0;
}