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
	pizza* pn = new pizza ;

	cout<<"Enter your pizza's size: ";
	cin>>(pn->size);
	cin.get();
	cout<<"Enter your pizza's company: ";
	getline(cin,(pn->name));
	cout<<"Enter your pizza's weight: ";
	cin>>(pn->weight);
	cout<<"your pizza's company: "<<(*pn).name<<endl
		<<"your pizza's size: "<<(*pn).size<<endl
		<<"your pizza's weight: "<<(*pn).weight<<endl;

	delete pn;
	return 0;
}