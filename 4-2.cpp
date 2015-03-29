#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	const int Size = 15;
	char name1[Size];
	char name2[Size]="C++owboy";

	cout<<name2<<" \nyour name: ";
	cin>>name1;
	cout<<name1<<" has "<<strlen (name1)<<"letters.\n";
	cout<<"and is stored in an array of "
		<<sizeof(name1)<<" bytes.\n";
	cout<<"you initial is "<<name1[0]<<".\n";
	name2[3]='\0';
	cout<<"here are the first 3charaters of my name: "
		<<name2<<".\n";



	return 0;
}