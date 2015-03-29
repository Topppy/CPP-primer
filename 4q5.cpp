#include<iostream>
#include<string>
#include<cstring>
struct CandyBar
{
	char name[20];
	double weight;
	int energy;
};
int main()
{
	using namespace std;
	CandyBar snak=
	{
		"Mocha Munch",
		2.3,
		350
	};
	cout<<snak.name <<endl;
	cout<<snak.weight <<endl;
	cout<<snak.energy <<endl;
	return 0;
}