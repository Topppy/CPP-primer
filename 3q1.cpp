# include <iostream>


int main()
{
	using namespace std;
	cout<<"enter the hight of you in cm:_______cm.\b\b\b\b\b\b\b\b\b\b";
	int hightin;
	cin>>hightin;
	const double METER=100;
	double hightout=(hightin/METER);
	cout<<"your hight in m is: "<<hightout<<" m.\n";
	return 0;

}