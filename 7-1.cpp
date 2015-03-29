#include<iostream>
void simple();//funcation prototype
using namespace std;
int main()
{
	cout<<"main() will call the simple() function: \n";
	simple();
	return 0;
}
void simple()
{
	cout<<"I'm but a simple function.\n";
}