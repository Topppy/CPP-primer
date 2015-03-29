#include<iostream>
int main()
{
	using namespace std;
	int x=1;
	int y;
	cout<<"x= "<<x<<endl;
	y=(4+ x++)+(6 +x++); //				y=12
	cout<<"Now x = "<<x<<endl<<"y = "<<y<<endl; 
	return 0;

}