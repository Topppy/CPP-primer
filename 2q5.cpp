# include <iostream>
double lightychange(double);

int main()
{
	using namespace std;
	cout<<"Enter the number of light years: ";
	double lighty;
	cin>>lighty;
	double astry=lightychange(lighty);
	cout<<lighty<<" light years = "<<astry<<" astronomical units.\n";

	return 0;
}
double lightychange(double n)
{
	using namespace std;
	double a=n*63240;
	return a;
}