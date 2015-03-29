#include<iostream>
struct CandyBar
{
	char name[20];
	double weight;
	int energy;
};
void couti(int);
int main()
{
	using namespace std;
	//static CandyBar g[3] =
	//{
	//	{"snak",2.3,350},
	//	{"bob",3.3,465},
	//	{"god",5.1,390}
	//};
	couti(0);
	couti(1);
	couti(2);

	return 0;
}
void couti(int i)
{
	using namespace std;
		static CandyBar g[3] =
	{
		{"snak",2.3,350},
		{"bob",3.3,465},
		{"god",5.1,390}
	};
	cout<<g[i].name <<endl;
	cout<<g[i].weight <<endl;
	cout<<g[i].energy <<endl;

}