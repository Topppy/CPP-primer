#include<iostream>
#include<string>
#include<cstring>
struct pizza
{
	std::string name;
	int size;
	int weight;
};
int main()
{
	using namespace std;
	pizza n1;
	cout<<"Enter your pizza's company: ";
	getline(cin,n1.name);
	cout<<"Enter your pizza's size: ";
	cin>>n1.size;
	cout<<"Enter your pizza's weight: ";
	cin>>n1.weight;
	cout<<"your pizza's company: "<<n1.name<<endl
		<<"your pizza's size: "<<n1.size<<endl
		<<"your pizza's weight: "<<n1.weight<<endl;
	return 0;
}