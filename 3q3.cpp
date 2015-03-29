#include<iostream>

int main()
{
	using namespace std;
	double deg,min,sec;
	cout<<"enter a lattude in degrees, minutes, and seconds: \n"
		<<"first, enter the degrees: ";
	cin>>deg;
	cout<<"next, enter the minutes of arc: ";
	cin>>min;
	cout<<"finally, enter the seconds of arc: ";
	cin>>sec;
	double sum=deg+(((sec/60)+min)/60);
	cout<<deg<<" degrees, "<<min<<" minutes, "<<sec<<" seconds= "
		<<sum<<" degrees\n";
	return 0;
}