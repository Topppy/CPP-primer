#include<iostream>
struct A
{
	char Fname[20];
	char Lname[20];
	char grade;
	int age;
};
int main()
{
	using namespace std;
	A guest1;
	cout<<"What is your first name ? ";
	cin>>guest1.Fname;

	cout<<"What is your last name ? ";
	cin>>guest1.Lname ;

	cout<<"What letter grade do you deserve ? ";
	cin>>guest1.grade  ;

	cout<<"What is your age ? "; 
	cin>>guest1.age  ;
	
	cout<<"Name: "<<guest1.Lname <<" , "<<guest1.Fname <<endl;
	cout<<"Grade: "<<char(guest1.grade+1) <<endl;
	cout<<"Age: "<<guest1.age <<endl;

	return 0;
		


}
