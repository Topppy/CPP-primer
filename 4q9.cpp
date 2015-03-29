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
	couti(0);
	couti(1);
	couti(2);

	return 0;
}
void couti(int i)
{
	using namespace std;
	CandyBar n1[3] =
	{
		{"snak",2.3,350},
		{"bob",3.3,465},
		{"god",5.1,390}
	};
	CandyBar* ps[3]	;
	ps[i] = new CandyBar;
	strcpy_s((*ps[i]).name,n1[i].name );
	ps[i]->weight = n1[i].weight ;
	ps[i]->energy = n1[i].energy ;

	cout<<(*ps[i]).name <<endl;
	cout<<(*ps[i]).weight <<endl;
	cout<<(*ps[i]).energy <<endl;

	delete ps[i];

}
