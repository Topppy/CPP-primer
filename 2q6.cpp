# include <iostream>
void time(int,int);

int main()
{
	using namespace std;
	cout<<"Enter the number of hours : ";
	int hour;
	cin>>hour;
	cout<<"Enter the number of minutes : ";
	int minute;
	cin>>minute;
	time(hour,minute);
	return 0;
}
void time(int n,int m)
{
	using namespace std;
	cout<<"Time: "<<n<<":"<<m<<endl;
}