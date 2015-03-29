#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct car
{
	string productor;
	int year;
};
int main()
{

cout<<"how many cars do you want to catalog? ";
int num;
cin>>num;
car * ps=new car[num];
for(int i=0;i<num;i++)
{
	cout<<"car#"<<i+1<<endl
		<<"please enter the make:";
	//cin>>ps[i].productor;
	fflush(stdin);//将键盘缓冲区清空！！！
	//否则getline读入换行符直接结束输入!!!
	getline(cin,ps[i].productor);
	cout<<"please enter the year made: ";
	cin>>ps[i].year;
}
cout <<"here is tyour collection : \n";
for(int j=0;j<num;j++)
{
	cout<<ps[j].year<<" "<<ps[j].productor<<endl;
}
delete [] ps;
return 0;
}